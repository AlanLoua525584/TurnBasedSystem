// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/Components/Movement/MovementStateManager.h"
#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UMovementStateManager::UMovementStateManager()
{
	PrimaryComponentTick.bCanEverTick = false;
	ActiveMovementSystem = EMovementSystemType::None;
}


// Called when the game starts
void UMovementStateManager::BeginPlay()
{
	Super::BeginPlay();

    // 獲取所有移動組件
    if (AActor* Owner = GetOwner())
    {
        GridMovement = Owner->FindComponentByClass<UGridMovementComponent>();
        DynamicMovement = Owner->FindComponentByClass<UEnhancedMovementSystem>();

        if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(Owner))
        {
            CharacterMovement = Character->GetCharacterMovement();
        }
    }
}

void UMovementStateManager::HaltAllMovement()
{
    Debug::Print(TEXT("MovementStateManager: Halting all movement systems"), FColor::Orange);

    StopGridMovement();
    StopDynamicMovementByManager();
    StopCharacterMovement();

    EMovementSystemType OldSystem = ActiveMovementSystem;
    ActiveMovementSystem = EMovementSystemType::None;

    if (OldSystem != EMovementSystemType::None)
    {
        NewOnMovementStateChanged.Broadcast(OldSystem, false);
    }
}

void UMovementStateManager::HaltMovementSystem(EMovementSystemType SystemType)
{
    switch (SystemType)
    {
    case EMovementSystemType::GridMovement:
        StopGridMovement();
        break;
    case EMovementSystemType::DynamicMovement:
        StopDynamicMovementByManager();
        break;
    case EMovementSystemType::AIMovement:
        StopCharacterMovement();
        break;
    }

    if (ActiveMovementSystem == SystemType)
    {
        ActiveMovementSystem = EMovementSystemType::None;
        NewOnMovementStateChanged.Broadcast(SystemType, false);
    }
}

bool UMovementStateManager::ActivateMovementSystem(EMovementSystemType SystemType)
{
    if (ActiveMovementSystem == SystemType)
    {
        Debug::Print(TEXT("Movement system already active"), FColor::Yellow);
        return true;
    }

    // 先停止所有移動
    HaltAllMovement();

    // 激活新系統
    switch (SystemType)
    {
    case EMovementSystemType::GridMovement:
        if (!GridMovement)
        {
            Debug::Print(TEXT("No GridMovement component"), FColor::Red);
            return false;
        }
        break;

    case EMovementSystemType::DynamicMovement:
        if (!DynamicMovement)
        {
            Debug::Print(TEXT("No DynamicMovement component"), FColor::Red);
            return false;
        }
        DynamicMovement->SwitchMovementMode(ECustomMovementMode::DynamicMove);
        break;

    case EMovementSystemType::AIMovement:
        if (!CharacterMovement)
        {
            Debug::Print(TEXT("No CharacterMovement component"), FColor::Red);
            return false;
        }
        break;
    }

    ActiveMovementSystem = SystemType;
    NewOnMovementStateChanged.Broadcast(SystemType, true);

    Debug::Print(FString::Printf(TEXT("Activated movement system: %s"),
        *UEnum::GetValueAsString(SystemType)), FColor::Green);

    return true;
}

bool UMovementStateManager::IsMovementSystemActive(EMovementSystemType SystemType) const
{
    
    if (SystemType == ActiveMovementSystem)
        return true;
    

    
    // 額外檢查實際狀態
    switch (SystemType)
    {
    case EMovementSystemType::GridMovement:
        return GridMovement && GridMovement->IsMoving();
    /*case EMovementSystemType::DynamicMovement:
        return DynamicMovement &&
            DynamicMovement->GetCurrentMovementMode() == ECustomMovementMode::DynamicMove;
    */
    default:
        return false;
    }
    
}

void UMovementStateManager::SynchronizeMovementStates()
{
    Debug::Print(TEXT("=== Synchronizing Movement States ==="), FColor::Cyan);

    // 檢查GridMovement
    if (GridMovement && GridMovement->IsMoving())
    {
        if (ActiveMovementSystem != EMovementSystemType::GridMovement)
        {
            Debug::Print(TEXT("GridMovement active but not registered, stopping"), FColor::Orange);
            StopGridMovement();
        }
    }

    /*TODO待更新
    // 檢查DynamicMovement
    if (DynamicMovement &&
        DynamicMovement->GetCurrentMovementMode() == ECustomMovementMode::DynamicMove)
    {
        if (ActiveMovementSystem != EMovementSystemType::DynamicMovement)
        {
            Debug::Print(TEXT("DynamicMovement active but not registered, stopping"), FColor::Orange);
            StopDynamicMovementByManager();
        }
    }
    */

    // 更新網格位置
    if (GridMovement)
    {
        GridMovement->UpdateGridPositionFromWorld();
    }

    Debug::Print(FString::Printf(TEXT("Active System: %s"),
        *UEnum::GetValueAsString(ActiveMovementSystem)), FColor::Green);
}



void UMovementStateManager::StopGridMovement()
{
    if (GridMovement && GridMovement->IsMoving())
    {
        //待更新
        //GridMovement->AbortGridMovement(); // 改名後的函數
        Debug::Print(TEXT("Stopped GridMovement"), FColor::Yellow);
    }
}

void UMovementStateManager::StopDynamicMovementByManager()
{
    if (DynamicMovement)
    {
        DynamicMovement->SwitchMovementMode(ECustomMovementMode::Idle);
        Debug::Print(TEXT("Stopped DynamicMovement"), FColor::Yellow);
    }
}

void UMovementStateManager::StopCharacterMovement()
{
    if (CharacterMovement)
    {
        CharacterMovement->StopMovementImmediately();
        Debug::Print(TEXT("Stopped CharacterMovement"), FColor::Yellow);
    }
}