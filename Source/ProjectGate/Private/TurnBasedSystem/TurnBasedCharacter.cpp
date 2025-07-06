// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem//GridPlayerController.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "CombatSystem/CombatInterface.h"
#include "CombatSystem/CombatStats.h"
#include "CombatSystem/HealthPointBarWidget.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "TurnBasedSystem/GridManager.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "TimerManager.h"
#include "Navigation/PathFollowingComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h" 


#include "Public/DebugHelper.h"


// Sets default values
ATurnBasedCharacter::ATurnBasedCharacter()
{
	//create Visual Component
	GridVisualComponent = CreateDefaultSubobject<UGridVisualComponent>(TEXT("GridVisualComponent"));

	//移動
	EnhancedMovementSystem = CreateDefaultSubobject<UEnhancedMovementSystem>(TEXT("EnhancedMovementSystem"));


	//戰鬥
	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
	
	// 創建頭頂血條組件
	HealthBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarComponent"));
	HealthBarComponent->SetupAttachment(RootComponent);
	HealthBarComponent->SetRelativeLocation(FVector(0, 0, 120.0f)); // 頭頂上方
	HealthBarComponent->SetWidgetSpace(EWidgetSpace::Screen); // 始終面向屏幕
	HealthBarComponent->SetDrawSize(FVector2D(200, 30));
	

	/* === 相機系統 === */
	// 建立 Spring Arm
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;                     // 距離角色
	CameraBoom->bUsePawnControlRotation = true;               // 跟隨控制器旋轉
	CameraBoom->SocketOffset = FVector(0.0f, 60.0f, 70.0f);   // 向右偏移一點（越肩）
	CameraBoom->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f)); // 輕微往下看

	// 建立相機
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// 角色旋轉控制
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;



	// 禁止移動時自動旋轉
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// 設置旋轉速率
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);



 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//設定預設移動速度
	GetCharacterMovement()->MaxWalkSpeed = MoveSpeed;




}


bool ATurnBasedCharacter::CanBeAttacked_Implementation() const
{
	return !bIsDying && IsAlive();
}

UCombatComponent* ATurnBasedCharacter::GetCombatComponent_Implementation() const
{
	return CombatComponent;
}

void ATurnBasedCharacter::OnDamageReceived_Implementation(const FDamageResult& DamageResult)
{
	if (CombatComponent)
	{
		CombatComponent->ApplyDamage(DamageResult);
	}
}

// Called when the game starts or when spawned
void ATurnBasedCharacter::BeginPlay()
{
	Super::BeginPlay();

	//初始化行動點數
	CurrentActionPoints = MaxActionPoints;

	// 確保角色有 AIController（用於網格移動）
	if (!GetController())
	{
		SpawnDefaultController();
		Debug::Print(FString::Printf(TEXT("%s: Spawned default controller"), *GetActorLabel()), FColor::Yellow);
	}


	// 初始化 EnhancedMovementSystem
	if (EnhancedMovementSystem)
	{
		// 設置初始值
		EnhancedMovementSystem->MaxMovementResource = 100.0f;
		EnhancedMovementSystem->CurrentMovementResource = 100.0f;
		EnhancedMovementSystem->DynamicMoveSpeed = 400.0f;

		// 確保系統正確初始化
		Debug::Print(TEXT("EnhancedMovementSystem initialized in TurnBasedCharacter"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("ERROR: EnhancedMovementSystem is null in BeginPlay!"), FColor::Red);
	}



	// 嘗試找到場景中的 GridManager
	TArray<AActor*>FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridManager::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		SetGridManager(Cast<AGridManager>(FoundActors[0]));
		Debug::Print(TEXT("GridManager found and set!"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("ERROR: No GridManager found in scene!"), FColor::Red);
	}

	// 設置血條 Widget
	if (HealthBarComponent && HealthBarWidgetClass)
	{
		HealthBarComponent->SetWidgetClass(HealthBarWidgetClass);

		if (UUserWidget* Widget = HealthBarComponent->GetUserWidgetObject())
		{
			HealthBarWidget = Cast<UHealthBarWidget>(Widget);
		}
	}

	// 綁定血量變化事件
	if (CombatComponent)
	{
		CombatComponent->OnHealthChanged.AddDynamic(this, &ATurnBasedCharacter::OnHealthChanged);

		// 初始化血條顯示
		UpdateHealthDisplay();
	}

	// 確保相機組件正確設置
	if (CameraBoom && FollowCamera)
	{
		// 設置 Spring Arm 使用 Controller 旋轉
		CameraBoom->bUsePawnControlRotation = true;
		CameraBoom->bInheritPitch = true;
		CameraBoom->bInheritYaw = true;
		CameraBoom->bInheritRoll = false;

		// 確保相機不使用 Controller 旋轉（它會跟隨 Spring Arm）
		FollowCamera->bUsePawnControlRotation = false;

		Debug::Print(TEXT("Character camera components configured"), FColor::Green);
	}

	// 根據是否玩家控制設置不同行為
	if (bIsPlayerControlled)
	{
		// 第三人稱標準設置
		bUseControllerRotationPitch = false;
		bUseControllerRotationYaw = false;
		bUseControllerRotationRoll = false;

		// 移動時自動轉向（動態模式用）
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	}


}

void ATurnBasedCharacter::SetGridManager(AGridManager* Manager)
{
	GridManager = Manager;

	if (GridManager)
	{
		//更新當前網格位置
		CurrentGridPosition = GridManager->WorldToGrid(GetActorLocation());

		//將角色對齊到網格
		FVector GridWorldPos = GridManager->GridToWorld(CurrentGridPosition);
		SetActorLocation(GridWorldPos);

		//標記網格為已佔用
		GridManager->SetCellOccupied(CurrentGridPosition, this);

		// 初始化 GridVisualComponent
		if (GridVisualComponent)
		{
			GridVisualComponent->Initialize(GridManager);
		}

		Debug::Print(FString::Printf(TEXT("%s placed at grid position (%d, %d)"),
			*GetActorLabel(), CurrentGridPosition.X, CurrentGridPosition.Y), FColor::Green);
	}
}

bool ATurnBasedCharacter::MoveToGridPosition(FIntPoint TargetGridPos)
{
	if (!GridManager)
	{
		Debug::Print(TEXT("GridManager not set! Cannot move."), FColor::Red);
		return false;
	}

	//檢查是否輪到自己
	if (!bIsMyTurn)
	{
		Debug::Print(TEXT("Not your turn!"), FColor::Red);
		return false;
	}

	//檢查是否是在移動

    if (bIsMoving)
	{
		Debug::Print(TEXT("Already moving!"), FColor::Red);
		return false;
	}


	//獲取可移動範圍
	TArray<FIntPoint> MovementRange = GridManager->GetMovementRange(
		CurrentGridPosition,
		CurrentActionPoints / MoveActionCost // 根據AP計算可移動格數
	);

	//檢查目標位置是否在可移動範圍內
	if (!MovementRange.Contains(TargetGridPos))
	{
		Debug::Print(TEXT("Target position out of movement range!"), FColor::Red);
		return false;
	}

	
	//計算移動成本
	int32 Distance = FMath::Abs(TargetGridPos.X - CurrentGridPosition.X)+
		             FMath::Abs(TargetGridPos.Y - CurrentGridPosition.Y);

	int32 APCost = Distance * MoveActionCost;


	if (!CanPerformAction(APCost))
	{
		Debug::Print(TEXT("Not enough Action Points!"), FColor::Red);
		return false;
	}

	//清除舊的視覺化

	if (GridVisualComponent)
	{
		GridVisualComponent->ClearAllVisuals();
	}
	else
	{
		GridManager->ClearHighlights();
	}

	//清除當前格子佔用
	GridManager->ClearCellOccupation(CurrentGridPosition);

	//執行移動
	bIsMoving = true;

	//計算路徑(簡單版本直接移動)
	FVector TargetWorldPos = GridManager->GridToWorld(TargetGridPos);


	//使用AI移動(如有AIController)
	if (AAIController* AIController = Cast<AAIController>(GetController()))
	{
		AIController->MoveToLocation(TargetWorldPos, 5.0f);
	}
	else
	{
		//簡單移動
		SetActorLocation(TargetWorldPos);
	}

	//更新位置
	CurrentGridPosition = TargetGridPos;
	GridManager->SetCellOccupied(CurrentGridPosition, this);

	//消耗AP
	ConsumeActionPoints(APCost);


	//清除高亮
	GridManager->ClearHighlights();

	bIsMoving = false;

	Debug::Print(FString::Printf(TEXT("%s moved to (%d, %d), Cost: %d AP"),
		*GetActorLabel(), TargetGridPos.X, TargetGridPos.Y, APCost), FColor::Green);


	// 如果還有行動點，自動顯示新的移動範圍
	if (CurrentActionPoints >= MoveActionCost)
	{
		ShowMovementRange();
	}



	return true;
	
}

void ATurnBasedCharacter::ShowMovementRange()
{
	if (!GridManager || !bIsMyTurn || !GridVisualComponent)
		return;

	Debug::Print(FString::Printf(TEXT("=== %s: Showing Movement Range ==="), *GetActorLabel()), FColor::Magenta);

	GridVisualComponent->ClearAllVisuals();

	int32 MoveRange = CurrentActionPoints / MoveActionCost;

	//調用ShowMovementRange
	GridVisualComponent->ShowMovementRange(CurrentGridPosition, MoveRange);

	Debug::Print(FString::Printf(TEXT("Showing movement range: %d cells"), MoveRange), FColor::Cyan);

}

void ATurnBasedCharacter::UpdateGridPositionFromWorld()
{
	if (!GridManager) return;

	// 清除舊位置
	GridManager->ClearCellOccupation(CurrentGridPosition);

	// 更新到新位置
	CurrentGridPosition = GridManager->WorldToGrid(GetActorLocation());

	// 標記新位置為已佔用
	GridManager->SetCellOccupied(CurrentGridPosition, this);

	/*Debug::Print(FString::Printf(TEXT("%s updated grid position to (%d, %d)"),
		*GetActorLabel(), CurrentGridPosition.X, CurrentGridPosition.Y), FColor::Yellow);
	*/
	Debug::PrintCooldown(TEXT("GridPosition"),
		FString::Printf(TEXT("%s grid position (%d, %d)"), *GetActorLabel(), CurrentGridPosition.X, CurrentGridPosition.Y),
		FColor::Yellow,
		1.0f); // 1秒更新一次


}

void ATurnBasedCharacter::OnDeath_Implementation(AActor* Killer)
{
	if (bIsDying) return; // 防止重複死亡

	bIsDying = true;

	Debug::Print(FString::Printf(TEXT("=== %s DIED ==="), *GetActorLabel()), FColor::Red, 5.0f);
	Debug::Print(FString::Printf(TEXT("Killed by: %s"),
		Killer ? *Killer->GetActorLabel() : TEXT("Unknown")), FColor::Orange);

	// 1. 清理角色狀態
	CleanupCharacter();

	// 2. 播放死亡效果
	PlayDeathEffects();

	// 3. 通知回合系統
	NotifyTurnSystemOfDeath();

	// 4. 播放死亡動畫並設置銷毀計時器
	if (DeathMontage && GetMesh() && GetMesh()->GetAnimInstance())
	{
		float MontageLength = GetMesh()->GetAnimInstance()->Montage_Play(DeathMontage);

		// 使用動畫長度或預設延遲時間
		float DestroyDelay = FMath::Max(MontageLength, DeathDestroyDelay);

		Debug::Print(FString::Printf(TEXT("Playing death animation, destroy in %.1f seconds"),
			DestroyDelay), FColor::Yellow);

		GetWorld()->GetTimerManager().SetTimer(
			DeathTimerHandle,
			this,
			&ATurnBasedCharacter::OnDeathAnimationEnd,
			DestroyDelay,
			false
		);
	}
	else
	{
		Debug::Print(TEXT("No death animation, using default delay"), FColor::Yellow);

		// 沒有動畫時使用預設延遲
		GetWorld()->GetTimerManager().SetTimer(
			DeathTimerHandle,
			this,
			&ATurnBasedCharacter::OnDeathAnimationEnd,
			DeathDestroyDelay,
			false
		);
	}

}

void ATurnBasedCharacter::OnDeathAnimationEnd()
{
	Debug::Print(FString::Printf(TEXT("%s - Death animation completed, destroying actor"),
		*GetActorLabel()), FColor::Red);

	// 最後的清理
	if (Controller)
	{
		Controller->UnPossess();
	}

	// 銷毀角色
	Destroy();
}

void ATurnBasedCharacter::NotifyTurnSystemOfDeath()
{
	
	// 查找回合管理器
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASimpleTurnManager::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		if (ASimpleTurnManager* TurnManager = Cast<ASimpleTurnManager>(FoundActors[0]))
		{
			TurnManager->RemoveCharacter(this);
			Debug::Print(TEXT("Notified turn system of death"), FColor::Green);
		}
	}
	
}

void ATurnBasedCharacter::PlayDeathEffects()
{
	// 1. 生成死亡特效
	if (DeathEffectClass)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AActor* DeathEffect = GetWorld()->SpawnActor<AActor>(
			DeathEffectClass,
			GetActorLocation(),
			GetActorRotation(),
			SpawnParams
		);

		Debug::Print(TEXT("Spawned death effect"), FColor::Cyan);
	}

	
}

void ATurnBasedCharacter::CleanupCharacter()
{
	Debug::Print(TEXT("Cleaning up character..."), FColor::White);

	// 1. 從網格中移除
	if (GridManager)
	{
		GridManager->ClearCellOccupation(CurrentGridPosition);
		Debug::Print(TEXT("- Cleared grid occupation"), FColor::White);
	}

	// 2. 禁用碰撞
	SetActorEnableCollision(false);
	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	Debug::Print(TEXT("- Disabled collision"), FColor::White);

	// 3. 禁用輸入
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		DisableInput(PC);
		Debug::Print(TEXT("- Disabled input"), FColor::White);
	}

	// 4. 停止所有高亮效果
	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		MeshComp->SetRenderCustomDepth(false);
	}

	// 5. 隱藏血條
	if (HealthBarComponent)
	{
		HealthBarComponent->SetVisibility(false);
	}

	// 6. 清除視覺組件
	if (GridVisualComponent)
	{
		GridVisualComponent->ClearAllVisuals();
	}

	// 7. 停止移動
	if (UCharacterMovementComponent* Movement = GetCharacterMovement())
	{
		Movement->StopMovementImmediately();
		Movement->DisableMovement();
	}
}




bool ATurnBasedCharacter::CanPerformDynamicMovement() const
{
	if (!EnhancedMovementSystem) return false;
	return bIsMyTurn && EnhancedMovementSystem->CanMove();
}

void ATurnBasedCharacter::SetMovementMode(bool bDynamic)
{
	if (bDynamic)
	{
		// 動態模式：角色面向移動方向
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
	}
	else
	{
		// 網格模式：角色不自動轉向
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
	}
}

void ATurnBasedCharacter::ResetActionPoints()
{
	CurrentActionPoints = MaxActionPoints;
	OnActionPointsChanged.Broadcast(CurrentActionPoints);

	FString Msg = FString::Printf(TEXT("%s: Action Points Reset to %d"),
		*GetActorLabel(), CurrentActionPoints);

	Debug::Print(Msg, FColor::Green);

}

bool ATurnBasedCharacter::CanPerformAction(int32 ActionCost) const
{
	return CurrentActionPoints >= ActionCost&& bIsMyTurn;
}

void ATurnBasedCharacter::ConsumeActionPoints(int32 Amount)
{
	CurrentActionPoints = FMath::Max(0, CurrentActionPoints - Amount);
	OnActionPointsChanged.Broadcast(CurrentActionPoints);

	FString Msg = FString::Printf(TEXT("%s: Used %d AP, Remaining: %d"),
		*GetActorLabel(), Amount, CurrentActionPoints);
	Debug::Print(Msg, FColor::Yellow);
}

bool ATurnBasedCharacter::TryMove(FVector TargetLocation)
{
	//檢查是否輪到自己
	if (!bIsMyTurn)
	{
		Debug::Print(TEXT("Not your turn!"), FColor::Red);
		return false;
	}

	//檢查是否有足夠的行動點
	if (!CanPerformAction(MoveActionCost))
	{
		Debug::Print(TEXT("Not enough Action Points to move!"), FColor::Red);
		return false;
	}

	//檢查是否正在移動
	if (bIsMoving)
	{
		Debug::Print(TEXT("Already moving!"), FColor::Red);
		return false;
	}

	//儲存目標位置
	MoveTargetLocation = TargetLocation;

	//執行移動
	PerformMove();

	//消耗行動點
	ConsumeActionPoints(MoveActionCost);

	//廣播行動事件
	OnActionPerformed.Broadcast(TEXT("Move"), MoveActionCost);

	return true;
}

bool ATurnBasedCharacter::TryAttack(AActor* TargetActor)
{
	//檢查是否輪到自己
	if (!bIsMyTurn)
	{
		Debug::Print(TEXT("Not your turn!"), FColor::Red);
		return false;
	}

	//檢查目標
	if (!TargetActor)
	{
		Debug::Print(TEXT("No target selected!"), FColor::Red);
		return false;
	}

	//檢查是否有足夠的行動點
	if (!CanPerformAction(AttackActionCost))
	{
		Debug::Print(TEXT("Not enough Action Points to attack!"), FColor::Red);
		return false;
	}

	//檢查距離
	float Distance = FVector::Dist(GetActorLocation(), TargetActor->GetActorLocation());
	if (Distance > AttackRange)
	{
		Debug::Print(FString::Printf(TEXT("Target out of range! Distance: %.2f, Range: %.2f"),
			Distance, AttackRange), FColor::Red);
		return false;
	}

	//執行攻擊
	PerformAttack(TargetActor);

	//消耗行動點
	ConsumeActionPoints(AttackActionCost);

	//廣播行動事件
	OnActionPerformed.Broadcast(TEXT("Attack"), AttackActionCost);


	return true;
}

void ATurnBasedCharacter::ExecuteAnimatedAttack(AActor* Target)
{
	UCombatComponent* Combat = FindComponentByClass<UCombatComponent>();
	if (!Combat || !Target) return;

	// 使用現有的 CanAttack 檢查
	if (!Combat->CanAttack(Target))
	{
		Debug::Print(TEXT("Cannot attack target"), FColor::Red);
		return;
	}

	// 儲存目標
	PendingAttackTarget = Target;

	// 面向目標
	FVector Direction = Target->GetActorLocation() - GetActorLocation();
	Direction.Z = 0;
	SetActorRotation(Direction.Rotation());

	// 播放動畫
	if (AttackMontage && GetMesh() && GetMesh()->GetAnimInstance())
	{
		Debug::Print(TEXT("Playing attack animation..."), FColor::Cyan);

		float MontageLength = GetMesh()->GetAnimInstance()->Montage_Play(AttackMontage);

		if (MontageLength > 0.0f)
		{
			Debug::Print(FString::Printf(TEXT("Attack montage playing, length: %.2f"), MontageLength), FColor::Green);

			// 在動畫適當時機觸發實際攻擊
			GetWorld()->GetTimerManager().SetTimer(
				AttackTimerHandle,
				this,
				&ATurnBasedCharacter::OnAttackAnimationHit,
				AttackAnimationDelay,  // 確保這個值在 TurnBasedCharacter.h 中設置（預設 0.5f）
				false
			);
		}
		else
		{
			Debug::Print(TEXT("ERROR: Montage play failed!"), FColor::Red);
			OnAttackAnimationHit();  // 直接執行攻擊
		}
	}
	else
	{
		// 無動畫直接執行
		OnAttackAnimationHit();
	}
}

void ATurnBasedCharacter::OnTurnStart()
{
	bIsMyTurn = true;


	//重置行動點數
	ResetActionPoints();

	//視覺提示-改變角色外觀或顏色

	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		MeshComp->SetRenderCustomDepth(true);
		MeshComp->SetCustomDepthStencilValue(252); // 綠色輪廓

		Debug::Print(FString::Printf(TEXT("%s: Highlight enabled"), *GetActorLabel()), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("Failed to get Mesh Component for highlight!"), FColor::Red);
	}

	// 只在非動態模式時顯示移動範圍
	if (AGridPlayerController* PC = Cast<AGridPlayerController>(GetController()))
	{
		if (!PC->bIsInDynamicMode)
		{
			ShowMovementRange();
		}
	}
	else
	{
		// AI 角色總是顯示範圍
		ShowMovementRange();
	}

	FString Msg = FString::Printf(TEXT("=== %s's Turn Started ==="), *GetActorLabel());
	Debug::Print(Msg, FColor::Cyan, 3);

}

void ATurnBasedCharacter::OnTurnEnd()
{
	bIsMyTurn = false;

	//視覺提示-恢復角色外觀或顏色
	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		MeshComp->SetRenderCustomDepth(false);
	}

	FString Msg = FString::Printf(TEXT("=== %s's Turn Ended ==="), *GetActorLabel());
	Debug::Print(Msg, FColor::Orange, 2);

	//消除移動範圍顯示
	if (GridManager)
	{
		GridManager->ClearHighlights();
	}

}

void ATurnBasedCharacter::PerformMove()
{
	//簡單移動邏輯
	bIsMoving = true;

	//繪製移動目標(除錯用)
	DrawDebugSphere(
		GetWorld(),
		MoveTargetLocation,
		50.0f,
		12,
		FColor::Green,
		false,
		3.0f
	);

	//繪製移動路徑
	DrawDebugLine(
		GetWorld(),
		GetActorForwardVector(),
		MoveTargetLocation,
		FColor::Green,
		false,
		3.0f
		);

	//之後實作實作實際的移動邏輯
	//例如：使用 AIController 的 MoveToLocation

	bIsMoving = false;

	FString Msg = FString::Printf(TEXT("%s moved to new position"), *GetActorLabel());
	Debug::Print(Msg, FColor::Green);

}

void ATurnBasedCharacter::PerformAttack(AActor* TargetActor)
{
	//簡單的攻擊邏輯

	FString Msg = FString::Printf(TEXT("%s attacks %s for %d damage!"),
		*GetActorLabel(), *TargetActor->GetActorLabel(), AttackDamage);
	Debug::Print(Msg, FColor::Red, 3);

	//繪製攻擊線條(除錯用)
	DrawDebugLine(
		GetWorld(),
		GetActorLocation() + FVector(0, 0, 50),  // 從角色中心發射
		TargetActor->GetActorLocation() + FVector(0, 0, 50),
		FColor::Red,
		false,
		2.0f,
		0,
		5.0f
	);

	//繪製傷害數字位置
	DrawDebugString(
		GetWorld(),
		TargetActor->GetActorLocation() + FVector(0, 0, 100),
		FString::Printf(TEXT("-%d"), AttackDamage),
		nullptr,
		FColor::Red,
		2.0f,
		true,
		1.5f
	);

	// 這裡可以實作實際的傷害處理
	// 例如：呼叫 Target 的 TakeDamage 函數


}

void ATurnBasedCharacter::OnAttackAnimationHit()
{
	if (!PendingAttackTarget.IsValid()) 
	{
		Debug::Print(TEXT("ERROR: PendingAttackTarget is invalid!"), FColor::Red);
		return;
	}

	Debug::Print(TEXT("Attack animation hit - executing damage"), FColor::Orange);

	UCombatComponent* Combat = FindComponentByClass<UCombatComponent>();
	if (Combat)
	{
		// 使用現有的 ExecuteAttack
		if (Combat->ExecuteAttack(PendingAttackTarget.Get()))
		{
			Debug::Print(TEXT("Attack executed successfully!"), FColor::Green);
		}
		else
		{
			Debug::Print(TEXT("Attack execution failed!"), FColor::Red);
		}
	}

	PendingAttackTarget = nullptr;
}

void ATurnBasedCharacter::OnHealthChanged(AActor* Character,int32 CurrentHealth, int32 MaxHealth)
{


	Debug::Print(FString::Printf(TEXT("%s Health: %d/%d"),
		*GetActorLabel(), CurrentHealth, MaxHealth), FColor::Yellow);

	if (Character != this) return;  // 確保是自己
	UpdateHealthDisplay();

	// 血量低時的視覺反饋
	if (CurrentHealth > 0 && CurrentHealth <= MaxHealth * 0.3f)
	{
		// 可以添加受傷特效或材質閃爍
		if (USkeletalMeshComponent* MeshComp = GetMesh())
		{
			// 暫時變紅
			MeshComp->SetVectorParameterValueOnMaterials(FName("DamageFlash"), FVector(1, 0, 0));

			// 0.2秒後恢復
			FTimerHandle FlashTimer;
			GetWorld()->GetTimerManager().SetTimer(FlashTimer, [this]()
				{
					if (USkeletalMeshComponent* MeshComp = GetMesh())
					{
						MeshComp->SetVectorParameterValueOnMaterials(FName("DamageFlash"), FVector(0, 0, 0));
					}
				}, 0.2f, false);
		}
	}
}

bool ATurnBasedCharacter::IsMyTurn() const
{
	return bIsMyTurn;  // 直接返回 bIsMyTurn，而不是返回 false
}











// Called every frame
void ATurnBasedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 平滑相機旋轉
	if (CameraBoom && Controller)
	{
		FRotator ControlRotation = Controller->GetControlRotation();
		FRotator CurrentRotation = CameraBoom->GetComponentRotation();
		FRotator NewRotation = FMath::RInterpTo(CurrentRotation, ControlRotation, DeltaTime, 10.0f);
		CameraBoom->SetWorldRotation(NewRotation);
	}

}

// Called to bind functionality to input
void ATurnBasedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATurnBasedCharacter::TestVisualization()
{
	Debug::Print(TEXT("=== Testing Visualization System ==="), FColor::Magenta);

	if (GridManager)
	{
		// 直接調用 GridManager 的視覺化
		GridManager->ShowMovementRange(CurrentGridPosition, 3);
	}

	if (GridVisualComponent)
	{
		// 直接調用組件的視覺化
		GridVisualComponent->ShowMovementRange(CurrentGridPosition, 3);
	}
}

void ATurnBasedCharacter::TestDifferentVisuals()
{
	if (!GridManager) return;

	// 測試移動範圍（綠色）
	GridManager->ShowMovementRange(CurrentGridPosition, 3);

	// 延遲顯示攻擊範圍（紅色）
	GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			if (GridVisualComponent)
			{
				GridVisualComponent->ShowAttackRange(CurrentGridPosition, 200.0f);
			}
		});

	// 測試路徑（藍色）
	TArray<FIntPoint> TestPath = {
		CurrentGridPosition,
		CurrentGridPosition + FIntPoint(1, 0),
		CurrentGridPosition + FIntPoint(2, 0),
		CurrentGridPosition + FIntPoint(2, 1)
	};

	if (GridVisualComponent)
	{
		GridVisualComponent->ShowPath(TestPath);
	}

}

void ATurnBasedCharacter::UpdateHealthDisplay()
{

	if (!CombatComponent || !HealthBarWidget) return;

	int32 CurrentHealth = CombatComponent->GetCurrentHealth();
	int32 MaxHealth = CombatComponent->GetMaxHealth();

	// 更新血條Widget
	HealthBarWidget->UpdateHealth(CurrentHealth, MaxHealth);

	// 死亡時隱藏血條
	if (CurrentHealth <= 0)
	{
		HealthBarComponent->SetVisibility(false);
	}

	Debug::Print(FString::Printf(TEXT("%s Health Display Updated: %d/%d"),
		*GetActorLabel(), CurrentHealth, MaxHealth), FColor::Green);
}

bool ATurnBasedCharacter::IsAlive() const
{
	if (bIsDying) return false;

	if (CombatComponent)
	{
		return CombatComponent->IsAlive();
	}

	return true;
}
