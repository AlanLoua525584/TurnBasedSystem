// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "TurnBasedSystem/GridManager.h"
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

	EnhancedMovementSystem = CreateDefaultSubobject<UEnhancedMovementSystem>(TEXT("EnhancedMovementSystem"));
	
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



 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//設定預設移動速度
	GetCharacterMovement()->MaxWalkSpeed = MoveSpeed;




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

	//計算路徑(簡單版本直接移動)
	FVector TargetWorldPos = GridManager->GridToWorld(TargetGridPos);
	
	//計算移動成本
	int32 Distance = FMath::Abs(TargetGridPos.X - CurrentGridPosition.X)+
		             FMath::Abs(TargetGridPos.Y - CurrentGridPosition.Y);

	int32 APCost = Distance * MoveActionCost;


	if (!CanPerformAction(APCost))
	{
		Debug::Print(TEXT("Not enough Action Points!"), FColor::Red);
		return false;
	}


	//清除當前佔用
	GridManager->ClearCellOccupation(CurrentGridPosition);

	//執行移動
	bIsMoving = true;

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

	return true;
	
}

void ATurnBasedCharacter::ShowMovementRange()
{
	if (!GridManager || !bIsMyTurn)
		return;

	Debug::Print(FString::Printf(TEXT("=== %s: Showing Movement Range ==="), *GetActorLabel()), FColor::Magenta);

	int32 MoveRange = CurrentActionPoints / MoveActionCost;
	GridManager->ShowMovementRange(CurrentGridPosition, MoveRange);

	Debug::Print(FString::Printf(TEXT("Showing movement range: %d cells"), MoveRange), FColor::Cyan);

}



bool ATurnBasedCharacter::CanPerformDynamicMovement() const
{
	if (!EnhancedMovementSystem) return false;
	return bIsMyTurn && EnhancedMovementSystem->CanMove();
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


	//顯示移動範圍
	ShowMovementRange();


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

bool ATurnBasedCharacter::IsMyTurn() const
{
	return bIsMyTurn;  // 直接返回 bIsMyTurn，而不是返回 false
}











// Called every frame
void ATurnBasedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
