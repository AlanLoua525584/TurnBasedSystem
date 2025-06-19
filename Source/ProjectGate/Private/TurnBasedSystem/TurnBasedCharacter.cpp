// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Engine.h"
#include "Public/DebugHelper.h"
#include "DrawDebugHelpers.h"

// Sets default values
ATurnBasedCharacter::ATurnBasedCharacter()
{
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

	Debug::Print(FString::Printf(TEXT("%s initialized with %d AP"),
		*GetActorLabel(), CurrentActionPoints), FColor::Green);

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
	PerfromMove();

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
	GetCapsuleComponent()->SetRenderCustomDepth(true);
	GetCapsuleComponent()->SetCustomDepthStencilValue(252); 

	FString Msg = FString::Printf(TEXT("=== %s's Turn Started ==="), *GetActorLabel());
	Debug::Print(Msg, FColor::Cyan, 3);

}

void ATurnBasedCharacter::OnTurnEnd()
{
	bIsMyTurn = false;

	//視覺提示-恢復角色外觀或顏色
	GetCapsuleComponent()->SetRenderCustomDepth(false);

	FString Msg = FString::Printf(TEXT("=== %s's Turn Ended ==="), *GetActorLabel());
	Debug::Print(Msg, FColor::Orange, 2);

}

void ATurnBasedCharacter::PerfromMove()
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
	return false;
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

