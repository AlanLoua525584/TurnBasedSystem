// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnbasedSystem/Components/Combat/CombatModeComponent.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatDisplayWidget.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UCombatModeComponent::UCombatModeComponent()
{

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

}

// Called when the game starts
void UCombatModeComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerController = Cast<APlayerController>(GetOwner());
	if (!OwnerController)
	{
		Debug::Print(TEXT("ERROR: CombatModeComponent owner is not a PlayerController!"), FColor::Red);
	}

}


void UCombatModeComponent::Initialize(APlayerController* InOwnerController)
{
	OwnerController = InOwnerController;
	Debug::Print(TEXT("CombatModeComponent initialized"), FColor::Green);
}

void UCombatModeComponent::EnterAttackMode()
{
    if (bIsInAttackMode) return;

    ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
    if (!ControlledCharacter)
    {
        Debug::Print(TEXT("No controlled character!"), FColor::Red);
        return;
    }

    if (!ControlledCharacter->IsMyTurn())
    {
        Debug::Print(TEXT("Not your turn!"), FColor::Yellow);
        return;
    }

    UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>();
    if (!CombatComp)
    {
        Debug::Print(TEXT("Character has no CombatComponent!"), FColor::Red);
        return;
    }

    bIsInAttackMode = true;

    Debug::Print(TEXT("=== ATTACK MODE: ON ==="), FColor::Red, 10.0f);

    // 顯示攻擊範圍
    CombatComp->ShowAttackRange();

    // 停止角色移動
    if (UCharacterMovementComponent* CharMoveComp = ControlledCharacter->GetCharacterMovement())
    {
        CharMoveComp->StopMovementImmediately();
    }

    // 啟用更新
    SetComponentTickEnabled(true);

    // 綁定戰鬥事件
    if (!CombatComp->OnAttackExecutedWithResult.IsAlreadyBound(this, &UCombatModeComponent::OnCombatResultReceived))
    {
        CombatComp->OnAttackExecutedWithResult.AddDynamic(
            this, &UCombatModeComponent::OnCombatResultReceived);
    }

    // 廣播事件
    OnAttackModeChanged.Broadcast(true);
}

void UCombatModeComponent::ExitAttackMode()
{
    if (!bIsInAttackMode) return;

    bIsInAttackMode = false;

    Debug::Print(TEXT("=== ATTACK MODE: OFF ==="), FColor::Blue, 5.0f);

    // 隱藏攻擊範圍
    if (ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter())
    {
        if (UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>())
        {
            CombatComp->HideAttackRange();

            // 解綁事件
            CombatComp->OnAttackExecutedWithResult.RemoveDynamic(
                this, &UCombatModeComponent::OnCombatResultReceived);
        }
    }

    // 清除高亮目標
    LastHighlightedTarget = nullptr;

    // 停用更新
    SetComponentTickEnabled(false);

    // 廣播事件
    OnAttackModeChanged.Broadcast(false);
}

void UCombatModeComponent::ToggleAttackMode()
{
    if (bIsInAttackMode)
    {
        ExitAttackMode();
    }
    else
    {
        EnterAttackMode();
    }
}

void UCombatModeComponent::ProcessAttackClick()
{
    AActor* Target = nullptr;

    // 使用新的檢測函數
    if (!GetCharacterUnderCursor(Target))
    {
        Debug::Print(TEXT("No character under cursor - exiting attack mode"), FColor::Yellow);
        ExitAttackMode();
        return;
    }

    Debug::Print(FString::Printf(TEXT("Found target: %s"), *Target->GetActorLabel()), FColor::Cyan);

    // 攻擊邏輯
    ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
    if (!ControlledCharacter) return;

    UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>();
    if (!CombatComp) return;

    // 檢查是否可以攻擊此目標
    if (CombatComp->CanAttack(Target))
    {
        Debug::Print(FString::Printf(TEXT("Attacking %s..."), *Target->GetActorLabel()), FColor::Orange);

        // 執行帶動畫的攻擊
        ControlledCharacter->ExecuteAnimatedAttack(Target);

        // 注意：不要立即退出攻擊模式，等待動畫完成
        // 可以設置一個標記或計時器
        if (bAutoExitAttackMode)
        {
            // 延遲退出攻擊模式，給動畫時間完成
            FTimerHandle ExitTimer;
            GetWorld()->GetTimerManager().SetTimer(
                ExitTimer,
                [this]() { ExitAttackMode(); },
                4.0f, // 給動畫足夠的時間
                false
            );
        }
    }
    else
    {
        Debug::Print(TEXT("CanAttack returned false"), FColor::Orange);
    }
}

void UCombatModeComponent::ShowAttackPreview(AActor* Target)
{
    ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
    if (!ControlledCharacter) return;

    UCombatComponent* Combat = ControlledCharacter->FindComponentByClass<UCombatComponent>();
    if (!Combat) return;

    // 計算預覽傷害
    FDamageResult PreviewDamage = Combat->CalculateDamage(Target);

    // 使用戰鬥 UI 顯示預覽
    if (CombatDisplayWidget)
    {
        CombatDisplayWidget->ShowDamagePreview(
            PreviewDamage.FinalDamage,
            PreviewDamage.bIsCritical
        );

        CombatDisplayWidget->ShowTargetInfo(Target, true);
    }
}

// Called every frame
void UCombatModeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsInAttackMode)
    {
        UpdateAttackTargetHighlight();
    }
}

void UCombatModeComponent::UpdateAttackTargetHighlight()
{
    if (!bIsInAttackMode) return;

    AActor* CurrentTarget = nullptr;

    // 嘗試獲取滑鼠下的角色
    if (!GetCharacterUnderCursor(CurrentTarget))
    {
        // 沒有目標，清除目標信息
        if (LastHighlightedTarget)
        {
            // TODO: 隱藏目標UI
            LastHighlightedTarget = nullptr;
        }
        return;
    }

    // 如果是相同目標，不需要更新
    if (CurrentTarget == LastHighlightedTarget) return;

    // 新目標
    LastHighlightedTarget = CurrentTarget;

    /*
    Debug::PrintCooldown(TEXT("HoverTarget"),
        FString::Printf(TEXT("Hovering over: %s"), *CurrentTarget->GetActorLabel()),
        FColor::White, 0.5f);
        */

    // 顯示攻擊預覽
    ShowAttackPreview(CurrentTarget);
}

bool UCombatModeComponent::GetCharacterUnderCursor(AActor*& OutCharacter)
{
    if (!OwnerController) return false;

    FVector WorldLocation, WorldDirection;
    OwnerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

    FVector Start = WorldLocation;
    FVector End = WorldLocation + WorldDirection * 10000.0f;

    FCollisionQueryParams QueryParams;
    QueryParams.bTraceComplex = true;
    QueryParams.bReturnPhysicalMaterial = false;

    // 只檢測 Pawn
    FCollisionObjectQueryParams ObjectQueryParams;
    ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

    TArray<FHitResult> Hits;
    OwnerController->GetWorld()->LineTraceMultiByObjectType(
        Hits,
        Start,
        End,
        ObjectQueryParams,
        QueryParams
    );

    // 找到第一個 TurnBasedCharacter
    for (const FHitResult& Hit : Hits)
    {
        if (Hit.GetActor() && Hit.GetActor()->IsA<ATurnBasedCharacter>())
        {
            OutCharacter = Hit.GetActor();
            return true;
        }
    }

    return false;
}

ATurnBasedCharacter* UCombatModeComponent::GetControlledTurnCharacter() const
{
    if (!OwnerController) return nullptr;
    return Cast<ATurnBasedCharacter>(OwnerController->GetPawn());
}

void UCombatModeComponent::OnCombatResultReceived(AActor* Attacker, AActor* Target, const FDamageResult& Result)
{
    Debug::Print(FString::Printf(TEXT("Combat Result: %d damage!"), Result.FinalDamage), FColor::Green);

    // TODO: 通知UI顯示戰鬥結果
}

