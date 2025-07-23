// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h"
#include "AnimationComponents/AnimationManagerComponent.h"
#include "AnimationComponents/CombatAnimationComponent.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "HighlightSystem/HighlightComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/HealthPointBarWidget.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Public/DebugHelper.h"


// Sets default values
ATurnBasedCharacter::ATurnBasedCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// === Create Components ===

	// Grid movement component
	GridMovementComponent = CreateDefaultSubobject<UGridMovementComponent>(TEXT("GridMovementComponent"));

	// Turn system component
	TurnSystemComponent = CreateDefaultSubobject<UTurnSystemComponent>(TEXT("TurnSystemComponent"));

	// Grid visual component
	GridVisualComponent = CreateDefaultSubobject<UGridVisualComponent>(TEXT("GridVisualComponent"));

	// Enhanced movement system
	EnhancedMovementSystem = CreateDefaultSubobject<UEnhancedMovementSystem>(TEXT("EnhancedMovementSystem"));

	// Combat component
	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));

    // Movement validator
    MovementValidator = CreateDefaultSubobject<UMovementValidatorComponent>(TEXT("MovementValidator"));

    // Movement state manager
    MovementStateManager = CreateDefaultSubobject<UMovementStateManager>(TEXT("MovementStateManager"));


	// Health bar widget component
	HealthBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarComponent"));
	HealthBarComponent->SetupAttachment(RootComponent);
	HealthBarComponent->SetRelativeLocation(FVector(0, 0, 120.0f));
	HealthBarComponent->SetWidgetSpace(EWidgetSpace::Screen);
	HealthBarComponent->SetDrawSize(FVector2D(200, 30));

    // 創建高亮組件
    HighlightComponent = CreateDefaultSubobject<UHighlightComponent>(TEXT("HighlightComponent"));

    // 配置自動高亮
    HighlightComponent->bAutoHighlightOnHover = true;
    HighlightComponent->bAutoHighlightWhenSelected = false;
    HighlightComponent->HoverHighlightType = EHighlightType::Hover;


	// === Camera System ===
	SetupCameraComponents();

	// === Character Movement Settings ===
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;

	// Character rotation settings
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;


    AnimationManager = CreateDefaultSubobject<UAnimationManagerComponent>(TEXT("AnimationManager"));

    CombatAnimationComponent = CreateDefaultSubobject<UCombatAnimationComponent>(TEXT("CombatAnimationComponent"));

}

void ATurnBasedCharacter::ExecuteAnimatedAttack(AActor* Target)
{
    Debug::Print(FString::Printf(TEXT("Executing animated attack on %s"),
        Target ? *Target->GetActorLabel() : TEXT("NULL")), FColor::Green);

    if (!Target)
    {
        Debug::Print(TEXT("ERROR: Target is null"), FColor::Red);
        return;
    }

    if (!CombatComponent)
    {
        Debug::Print(TEXT("ERROR: CombatComponent is null"), FColor::Red);
        return;
    }

    if (!CombatAnimationComponent)
    {
        Debug::Print(TEXT("WARNING: Missing CombatAnimationComponent - using direct attack"), FColor::Red);
        ExecuteDirectAttack(Target);
        return;
    }

    // 儲存攻擊目標
    PendingAttackTarget = Target;

    // 獲取攻擊類型
    ECombatAttackType AttackType = CombatComponent->GetAttackType();
    Debug::Print(FString::Printf(TEXT("Attack type: %s"),
        *UEnum::GetValueAsString(AttackType)), FColor::Cyan);

    // 檢查是否有對應的攻擊序列配置
    if (!CombatAnimationComponent->AttackSequences.Contains(AttackType))
    {
        Debug::Print(FString::Printf(TEXT("WARNING: No animation sequence for attack type %s - using direct attack"),
            *UEnum::GetValueAsString(AttackType)), FColor::Yellow);
        ExecuteDirectAttack(Target);
        return;
    }

    Debug::Print(TEXT("Starting combat animation sequence..."), FColor::Green);
    CombatAnimationComponent->ExecuteCombatSequence(Target, AttackType);
}

void ATurnBasedCharacter::ExecuteDirectAttack(AActor* Target)
{
    Debug::Print(FString::Printf(TEXT("Executing direct attack on %s"),
        Target ? *Target->GetActorLabel() : TEXT("NULL")), FColor::Yellow);

    if (!Target)
    {
        Debug::Print(TEXT("ERROR: Direct attack failed - Target is null"), FColor::Red);
        return;
    }

    if (!CombatComponent)
    {
        Debug::Print(TEXT("ERROR: CombatComponent is null"), FColor::Red);
        return;
    }

    Debug::Print(TEXT("Checking CanAttack..."), FColor::White);
    if (CombatComponent->CanAttack(Target))
    {
        Debug::Print(TEXT("CanAttack passed - executing attack"), FColor::Green);

        if (CombatComponent->ExecuteAttack(Target))
        {
            Debug::Print(TEXT("Direct attack completed successfully"), FColor::Green);
        }
        else
        {
            Debug::Print(TEXT("ERROR: ExecuteAttack returned false"), FColor::Red);
        }
    }
    else
    {
        Debug::Print(TEXT("ERROR: Direct attack failed - CanAttack returned false"), FColor::Red);

        // 提供詳細的失敗原因
        if (!CombatComponent->IsAlive())
        {
            Debug::Print(TEXT("  - Reason: Attacker is dead"), FColor::Orange);
        }

        float Distance = FVector::Dist(GetActorLocation(), Target->GetActorLocation());
        float AttackRange = CombatComponent->GetAttackRange();

        Debug::Print(FString::Printf(TEXT("  - Distance: %.1f, Range: %.1f"), Distance, AttackRange), FColor::Orange);

        if (Distance > AttackRange)
        {
            Debug::Print(TEXT("  - Reason: Target out of range"), FColor::Orange);
        }
    }
}

void ATurnBasedCharacter::HaltAllMovementSystems()
{
    Debug::Print(FString::Printf(TEXT("%s: Halting all movement systems"),
        *GetActorLabel()), FColor::Orange);

    // 使用MovementStateManager統一管理
    if (MovementStateManager)
    {
        MovementStateManager->HaltAllMovement();
    }
    else
    {
        // 備用方案：手動停止各個系統
        if (GridMovementComponent && GridMovementComponent->IsMoving())
        {
            GridMovementComponent->AbortGridMovement();
        }

        if (EnhancedMovementSystem)
        {
            EnhancedMovementSystem->SwitchMovementMode(ECustomMovementMode::Idle);
        }

        if (GetCharacterMovement())
        {
            GetCharacterMovement()->StopMovementImmediately();
        }
    }

    // 清除視覺效果
    if (GridVisualComponent)
    {
        GridVisualComponent->ClearAllVisuals();
    }
}

void ATurnBasedCharacter::SynchronizeMovementComponents()
{
    Debug::Print(FString::Printf(TEXT("=== %s: Synchronizing Movement Components ==="),
        *GetActorLabel()), FColor::Cyan);

    // 使用MovementStateManager進行同步
    if (MovementStateManager)
    {
        MovementStateManager->SynchronizeMovementStates();
    }

    // 確保網格位置更新
    if (GridMovementComponent)
    {
        GridMovementComponent->UpdateGridPositionFromWorld();
    }

    Debug::Print(TEXT("=== Movement Components Synchronized ==="), FColor::Green);
}

// 確保動畫事件處理函數實現
void ATurnBasedCharacter::OnCombatAnimationHit(AActor* Attacker, AActor* Target)
{
    Debug::Print(TEXT("=== Combat Animation Hit Event ==="), FColor::Red);
    Debug::Print(FString::Printf(TEXT("Attacker: %s"),
        Attacker ? *Attacker->GetActorLabel() : TEXT("NULL")), FColor::White);
    Debug::Print(FString::Printf(TEXT("Target: %s"),
        Target ? *Target->GetActorLabel() : TEXT("NULL")), FColor::White);
    Debug::Print(FString::Printf(TEXT("Is this character the attacker: %s"),
        (Attacker == this) ? TEXT("YES") : TEXT("NO")), FColor::White);

    // 確保是自己發起的攻擊
    if (Attacker != this)
    {
        Debug::Print(TEXT("Ignoring hit event - not my attack"), FColor::Yellow);
        return;
    }
    // 使用保存的攻擊目標（如果有的話）
    AActor* ActualTarget = Target ? Target : PendingAttackTarget;

    if (!ActualTarget)
    {
        Debug::Print(TEXT("ERROR: No valid target for attack"), FColor::Red);
        return;
    }

    Debug::Print(FString::Printf(TEXT("Processing attack on: %s"),
        *ActualTarget->GetActorLabel()), FColor::Green);

    // 執行實際的攻擊計算
    if (!CombatComponent)
    {
        Debug::Print(TEXT("ERROR: CombatComponent is null"), FColor::Red);
        return;
    }

    Debug::Print(TEXT("Executing attack calculation..."), FColor::Orange);

    if (CombatComponent->ExecuteAttack(ActualTarget))
    {
        Debug::Print(TEXT("Attack calculation completed successfully"), FColor::Green);
        PendingAttackTarget = nullptr; // 清空待處理目標
    }
    else
    {
        Debug::Print(TEXT("Attack calculation failed"), FColor::Red);
    }
}

void ATurnBasedCharacter::BeginPlay()
{
    Super::BeginPlay();

    Debug::Print(FString::Printf(TEXT("=== %s BeginPlay Start ==="), *GetActorLabel()), FColor::Cyan);

    // === 基礎驗證 ===
    if (!IsValid(this))
    {
        Debug::Print(TEXT("ERROR: Character is not valid!"), FColor::Red);
        return;
    }

    // Ensure AI controller for grid movement
    if (!GetController())
    {
        SpawnDefaultController();
        Debug::Print(FString::Printf(TEXT("%s: Spawned default controller"), *GetActorLabel()), FColor::Yellow);
    }

    // Initialize components
    InitializeComponents();

    // Find and set grid manager
    TArray<AActor*> FoundActors;
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

    // === 確保組件初始化順序 ===
    // 1. 首先設置基礎組件
    SetupHealthBar();

    // 2. 然後設置動畫管理器
    SetupAnimationManager();

    // 3. 接著設置戰鬥動畫組件（依賴動畫管理器）
    SetupCombatAnimationComponent();

    // 4. 最後綁定戰鬥事件（依賴所有組件都設置完成）
    BindCombatEvents();

    // Setup movement mode based on player control
    if (bIsPlayerControlled)
    {
        GetCharacterMovement()->bOrientRotationToMovement = true;
        GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
    }

    // === 延遲執行最終驗證 ===
    FTimerHandle DebugTimer;
    GetWorld()->GetTimerManager().SetTimer(
        DebugTimer,
        [this]()
        {
            // 執行最終的組件和事件綁定檢查
            DebugCombatBindings();
            Debug::Print(FString::Printf(TEXT("=== %s BeginPlay Complete ==="), *GetActorLabel()), FColor::Green);
        },
        0.5f,  // 延遲 0.5 秒執行
        false
    );

    
    if (UCapsuleComponent* CapsuleComp = GetCapsuleComponent())
    {
        CapsuleComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
    }

   
}


void ATurnBasedCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Smooth camera rotation for player-controlled characters
    if (CameraBoom && Controller && bIsPlayerControlled)
    {
        FRotator ControlRotation = Controller->GetControlRotation();
        FRotator CurrentRotation = CameraBoom->GetComponentRotation();

        if (!CurrentRotation.Equals(ControlRotation, 1.0f))
        {
            FRotator NewRotation = FMath::RInterpTo(CurrentRotation, ControlRotation, DeltaTime, 10.0f);
            CameraBoom->SetWorldRotation(NewRotation);
        }
    }
}

void ATurnBasedCharacter::SetupCameraComponents()
{
    // Create spring arm
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 300.0f;
    CameraBoom->bUsePawnControlRotation = true;
    CameraBoom->SocketOffset = FVector(0.0f, 60.0f, 70.0f);
    CameraBoom->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f));

    // Create camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    FollowCamera->bUsePawnControlRotation = false;

    // Setup spring arm for controller rotation
    CameraBoom->bUsePawnControlRotation = true;
    CameraBoom->bInheritPitch = true;
    CameraBoom->bInheritYaw = true;
    CameraBoom->bInheritRoll = false;
}

void ATurnBasedCharacter::OnInitiativeChanged(int32 NewInitiative)
{
    CurrentInitiative = NewInitiative;
    OnTurnOrderChanged.Broadcast(NewInitiative);
}

void ATurnBasedCharacter::BindComponentEvents()
{
    // Bind TurnSystemComponent events
    if (TurnSystemComponent)
    {
        TurnSystemComponent->OnInitiativeChanged.AddDynamic(this, &ATurnBasedCharacter::OnInitiativeChanged);
    }
}

void ATurnBasedCharacter::DebugCombatBindings()
{
    Debug::Print(FString::Printf(TEXT("=== Debug Combat Bindings for %s ==="), *GetActorLabel()), FColor::Magenta);

    if (CombatComponent)
    {
        Debug::Print(TEXT("CombatComponent: Valid"), FColor::Green);
    }
    else
    {
        Debug::Print(TEXT("CombatComponent: NULL"), FColor::Red);
        return;
    }

    if (CombatAnimationComponent)
    {
        Debug::Print(TEXT("CombatAnimationComponent: Valid"), FColor::Green);

        // 檢查事件綁定
        if (CombatAnimationComponent->OnCombatAnimationHit.IsAlreadyBound(this, &ATurnBasedCharacter::OnCombatAnimationHit))
        {
            Debug::Print(TEXT("OnCombatAnimationHit: Bound"), FColor::Green);
        }
        else
        {
            Debug::Print(TEXT("OnCombatAnimationHit: NOT Bound"), FColor::Red);
        }

        if (CombatAnimationComponent->OnCombatAnimationCompleted.IsAlreadyBound(this, &ATurnBasedCharacter::OnCombatAnimationCompleted))
        {
            Debug::Print(TEXT("OnCombatAnimationCompleted: Bound"), FColor::Green);
        }
        else
        {
            Debug::Print(TEXT("OnCombatAnimationCompleted: NOT Bound"), FColor::Red);
        }
    }
    else
    {
        Debug::Print(TEXT("CombatAnimationComponent: NULL"), FColor::Red);
    }

    if (AnimationManager)
    {
        Debug::Print(TEXT("AnimationManager: Valid"), FColor::Green);
    }
    else
    {
        Debug::Print(TEXT("AnimationManager: NULL"), FColor::Red);
    }
}

void ATurnBasedCharacter::HandleAnimNotify(FName NotifyName)
{
    // 確保動畫管理器組件有效
    if (UAnimationManagerComponent* NewAnimationManager = FindComponentByClass<UAnimationManagerComponent>())
    {
        // 轉發通知給動畫管理器
        NewAnimationManager->HandleAnimationNotify(NotifyName);

        // 添加調試輸出
        UE_LOG(LogTemp, Warning, TEXT("角色接收到動畫通知: %s"), *NotifyName.ToString());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("找不到動畫管理器組件!"));
    }
}

void ATurnBasedCharacter::SetupHealthBar()
{
    if (HealthBarComponent && HealthBarWidgetClass)
    {
        HealthBarComponent->SetWidgetClass(HealthBarWidgetClass);

        if (UUserWidget* Widget = HealthBarComponent->GetUserWidgetObject())
        {
            HealthBarWidget = Cast<UHealthBarWidget>(Widget);
            Debug::Print(FString::Printf(TEXT("%s: Health bar widget set up"), *GetActorLabel()), FColor::Green);
        }
    }
}

void ATurnBasedCharacter::BindCombatEvents()
{
    if (IsValid(CombatComponent))
    {
        // 檢查是否已綁定 OnHealthChanged
        if (!CombatComponent->OnHealthChanged.IsAlreadyBound(this, &ATurnBasedCharacter::OnHealthChanged))
        {
            CombatComponent->OnHealthChanged.AddDynamic(this, &ATurnBasedCharacter::OnHealthChanged);
            Debug::Print(FString::Printf(TEXT("%s: Combat events bound"), *GetActorLabel()), FColor::Green);
        }

        // 初次更新血條顯示
        UpdateHealthDisplay();
    }
    else
    {
        Debug::Print(FString::Printf(TEXT("%s: CombatComponent is invalid!"), *GetActorLabel()), FColor::Red);
    }
}

void ATurnBasedCharacter::SetupAnimationManager()
{
    if (IsValid(AnimationManager))
    {
        // 安全綁定動畫事件（避免重複綁定）
        if (!AnimationManager->OnAnimationEvent.IsAlreadyBound(this, &ATurnBasedCharacter::OnAnimationHitEvent))
        {
            AnimationManager->OnAnimationEvent.AddDynamic(
                this, &ATurnBasedCharacter::OnAnimationHitEvent);

            Debug::Print(FString::Printf(TEXT("%s: Animation events bound successfully"),
                *GetActorLabel()), FColor::Green);
        }

        // 初始化動畫系統
        AnimationManager->InitializeAnimationSystem();
    }
    else
    {
        Debug::Print(FString::Printf(TEXT("%s: AnimationManager is null or invalid"),
            *GetActorLabel()), FColor::Orange);
    }
}

void ATurnBasedCharacter::SetupCombatAnimationComponent()
{
    if (IsValid(AnimationManager) && IsValid(CombatAnimationComponent) && IsValid(CombatComponent))
    {
        CombatAnimationComponent->InitializeCombatAnimation(AnimationManager, CombatComponent);

        // 安全綁定戰鬥動畫事件
        if (!CombatAnimationComponent->OnCombatAnimationHit.IsAlreadyBound(this, &ATurnBasedCharacter::OnCombatAnimationHit))
        {
            CombatAnimationComponent->OnCombatAnimationHit.AddDynamic(
                this, &ATurnBasedCharacter::OnCombatAnimationHit);
        }

        if (!CombatAnimationComponent->OnCombatAnimationCompleted.IsAlreadyBound(this, &ATurnBasedCharacter::OnCombatAnimationCompleted))
        {
            CombatAnimationComponent->OnCombatAnimationCompleted.AddDynamic(
                this, &ATurnBasedCharacter::OnCombatAnimationCompleted);
        }

        Debug::Print(FString::Printf(TEXT("%s: Combat animation events bound successfully"),
            *GetActorLabel()), FColor::Green);
    }
    else
    {
        Debug::Print(FString::Printf(TEXT("%s: Missing or invalid animation/combat components"),
            *GetActorLabel()), FColor::Orange);
    }
}

void ATurnBasedCharacter::InitializeComponents()
{
    // Initialize enhanced movement system
    if (EnhancedMovementSystem)
    {
        EnhancedMovementSystem->MaxMovementResource = 100.0f;
        EnhancedMovementSystem->CurrentMovementResource = 100.0f;
        EnhancedMovementSystem->DynamicMoveSpeed = 400.0f;
        Debug::Print(TEXT("EnhancedMovementSystem initialized"), FColor::Green);
    }

    // Bind component events
    BindComponentEvents();

    // Components will be further initialized when GridManager is set
}

void ATurnBasedCharacter::SetGridManager(AGridManager* Manager)
{
    GridManager = Manager;

    if (!GridManager)
        return;

    // Initialize grid movement component
    if (GridMovementComponent)
    {
        GridMovementComponent->InitializeGridMovement(GridManager);
    }

    // Initialize grid visual component
    if (GridVisualComponent)
    {
        GridVisualComponent->Initialize(GridManager);
    }
}

bool ATurnBasedCharacter::IsPlayerTurn() const
{
    if (!TurnSystemComponent)
        return false;

    return bIsPlayerControlled && TurnSystemComponent->IsMyTurn();
}

bool ATurnBasedCharacter::IsAlive() const
{
    if (bIsDying)
        return false;

    if (CombatComponent)
        return CombatComponent->IsAlive();

    return true;
}


// === Delegate Method Implementations ===

bool ATurnBasedCharacter::ConsumeActionPoints(int32 Amount)
{
    if (TurnSystemComponent)
    {
        return TurnSystemComponent->ConsumeActionPoints(Amount);
    }
    return false;
}

int32 ATurnBasedCharacter::GetCurrentActionPoints() const
{
    if (TurnSystemComponent)
    {
        return TurnSystemComponent->GetCurrentActionPoints();
    }
    return 0;
}

int32 ATurnBasedCharacter::GetMaxActionPoints() const
{
    if (TurnSystemComponent)
    {
        return TurnSystemComponent->GetMaxActionPoints();
    }
    return 0;
}

bool ATurnBasedCharacter::IsMyTurn() const
{
    if (TurnSystemComponent)
    {
        return TurnSystemComponent->IsMyTurn();
    }
    return false;
}

bool ATurnBasedCharacter::CanPerformAction(int32 ActionCost) const
{
    if (TurnSystemComponent)
    {
        return TurnSystemComponent->CanPerformAction(ActionCost);
    }
    return false;
}

void ATurnBasedCharacter::UpdateGridPositionFromWorld()
{
    if (GridMovementComponent)
    {
        GridMovementComponent->UpdateGridPositionFromWorld();
    }
}

void ATurnBasedCharacter::ShowMovementRange()
{
    if (GridMovementComponent)
    {
        GridMovementComponent->ShowMovementRange();
    }
}

FIntPoint ATurnBasedCharacter::GetCurrentGridPosition() const
{
    if (GridMovementComponent)
    {
        return GridMovementComponent->GetCurrentGridPosition();
    }
    return FIntPoint(0, 0);
}

void ATurnBasedCharacter::SetMovementMode(bool bDynamic)
{
    // Update character movement settings based on mode
    if (bDynamic)
    {
        // Dynamic mode settings
        GetCharacterMovement()->bOrientRotationToMovement = true;
        GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
        bUseControllerRotationYaw = false;
    }
    else
    {
        // Grid mode settings
        GetCharacterMovement()->bOrientRotationToMovement = false;
        GetCharacterMovement()->RotationRate = FRotator(0.0f, 0.0f, 0.0f);
        bUseControllerRotationYaw = true;
    }
}


void ATurnBasedCharacter::OnTurnStart()
{
    if (TurnSystemComponent)
    {
        TurnSystemComponent->OnTurnStart();
    }
}

void ATurnBasedCharacter::OnTurnEnd()
{
    if (TurnSystemComponent)
    {
        TurnSystemComponent->OnTurnEnd();
    }
}

bool ATurnBasedCharacter::MoveToGridPosition(FIntPoint TargetGridPos)
{
    if (GridMovementComponent)
    {
        return GridMovementComponent->MoveToGridPosition(TargetGridPos);
    }
    return false;
}



void ATurnBasedCharacter::OnAnimationHitEvent(EAnimationType AnimationType, FName EventName)
{

    Debug::Print(TEXT("ProcessOnAnimationHitEvent"));

    if (EventName == "AttackHit" && IsValid(PendingAttackTarget) && CombatComponent)
    {
        

        CombatComponent->ExecuteAttack(PendingAttackTarget);
        PendingAttackTarget = nullptr;
    }
}


// === Portrait System ===


UTexture2D* ATurnBasedCharacter::GetUIPortrait() const
{
    if (PortraitData.UIPortrait)
        return PortraitData.UIPortrait;

    if (PortraitData.FullPortrait)
        return PortraitData.FullPortrait;

    return GetAnyAvailablePortrait();
}

UTexture2D* ATurnBasedCharacter::GetBattlePortrait() const
{
    if (PortraitData.BattleIcon)
        return PortraitData.BattleIcon;

    return GetUIPortrait();
}

UTexture2D* ATurnBasedCharacter::GetAnyAvailablePortrait() const
{
    if (PortraitData.UIPortrait) return PortraitData.UIPortrait;
    if (PortraitData.FullPortrait) return PortraitData.FullPortrait;
    if (PortraitData.BattleIcon) return PortraitData.BattleIcon;
    if (PortraitData.DialoguePortrait) return PortraitData.DialoguePortrait;

    // Return default portrait
    static UTexture2D* DefaultPortrait = LoadObject<UTexture2D>(
        nullptr,
        TEXT("/Game/UI/Portraits/Default/Default_Portrait.Default_Portrait")
    );

    return DefaultPortrait;
}

FLinearColor ATurnBasedCharacter::GetPortraitBorderColor() const
{
    if (TeamID == 0) // Player team
        return FLinearColor(0.2f, 0.4f, 1.0f, 1.0f); // Blue
    else if (TeamID == 1) // Enemy team
        return FLinearColor(1.0f, 0.2f, 0.2f, 1.0f); // Red

    return PortraitData.BorderColor;
}

// === Combat Interface ===

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

void ATurnBasedCharacter::OnDeath_Implementation(AActor* Killer)
{
    if (bIsDying)
        return;

    bIsDying = true;

    Debug::Print(FString::Printf(TEXT("=== %s DIED ==="), *GetActorLabel()), FColor::Red, 5.0f);
    Debug::Print(FString::Printf(TEXT("Killed by: %s"),
        Killer ? *Killer->GetActorLabel() : TEXT("Unknown")), FColor::Orange);

    // 1. Cleanup character state
    CleanupCharacter();

    // 2. Play death effects
    PlayDeathEffects();

    // 3. Notify turn system
    NotifyTurnSystemOfDeath();

    // 4. Play death animation and set destruction timer
    if (DeathMontage && GetMesh() && GetMesh()->GetAnimInstance())
    {
        float MontageLength = GetMesh()->GetAnimInstance()->Montage_Play(DeathMontage);
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

        GetWorld()->GetTimerManager().SetTimer(
            DeathTimerHandle,
            this,
            &ATurnBasedCharacter::OnDeathAnimationEnd,
            DeathDestroyDelay,
            false
        );
    }
}

void ATurnBasedCharacter::OnHighlightApplied_Implementation(EHighlightType Type)
{


}

void ATurnBasedCharacter::OnHighlightRemoved_Implementation(EHighlightType Type)
{
}

TArray<UPrimitiveComponent*> ATurnBasedCharacter::GetHighlightableComponents_Implementation()
{
    TArray<UPrimitiveComponent*> Components;

    // 只高亮主要的 Mesh
    if (GetMesh())
    {
        Components.Add(GetMesh());
    }

    // 如果有武器或其他配件，可以選擇性地添加
    // if (WeaponMeshComponent && bHighlightWeapon)
    // {
    //     Components.Add(WeaponMeshComponent);
    // }

    return Components;
}

bool ATurnBasedCharacter::CanBeHighlighted_Implementation() const
{
    // 死亡的角色不能被高亮
    return !IsDying() && IsAlive();
}


void ATurnBasedCharacter::OnCombatAnimationCompleted(AActor* Attacker, AActor* Target, bool bSuccess)
{
    if (Attacker == this)
    {
        Debug::Print(FString::Printf(TEXT("Combat animation completed - Success: %s"),
            bSuccess ? TEXT("Yes") : TEXT("No")), FColor::Cyan);

        // 如果動畫失敗但我們有目標，執行直接攻擊作為回退
        if (!bSuccess && Target && CombatComponent)
        {
            Debug::Print(TEXT("Animation failed - executing fallback attack"), FColor::Yellow);
            ExecuteDirectAttack(Target);
        }
    }
}

void ATurnBasedCharacter::OnDeathAnimationEnd()
{
    Debug::Print(FString::Printf(TEXT("%s - Death animation completed, destroying actor"),
        *GetActorLabel()), FColor::Red);

    if (Controller)
    {
        Controller->UnPossess();
    }

    Destroy();
}

void ATurnBasedCharacter::NotifyTurnSystemOfDeath()
{
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
    if (DeathEffectClass)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

        GetWorld()->SpawnActor<AActor>(
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

    // Clear grid occupation
    if (GridMovementComponent)
    {
        FIntPoint CurrentPos = GridMovementComponent->GetCurrentGridPosition();
        if (GridManager)
        {
            GridManager->ClearCellOccupation(CurrentPos);
        }
    }

    // Disable collision
    SetActorEnableCollision(false);
    if (UCapsuleComponent* Capsule = GetCapsuleComponent())
    {
        Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    // Disable input
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        DisableInput(PC);
    }

    // Remove highlights
    if (USkeletalMeshComponent* MeshComp = GetMesh())
    {
        MeshComp->SetRenderCustomDepth(false);
    }

    // Hide health bar
    if (HealthBarComponent)
    {
        HealthBarComponent->SetVisibility(false);
    }

    // Clear visuals
    if (GridVisualComponent)
    {
        GridVisualComponent->ClearAllVisuals();
    }

    // Stop movement
    if (UCharacterMovementComponent* Movement = GetCharacterMovement())
    {
        Movement->StopMovementImmediately();
        Movement->DisableMovement();
    }
}

void ATurnBasedCharacter::OnHealthChanged(AActor* Character, int32 CurrentHealth, int32 MaxHealth)
{
    if (Character != this)
        return;

    Debug::Print(FString::Printf(TEXT("%s Health: %d/%d"),
        *GetActorLabel(), CurrentHealth, MaxHealth), FColor::Yellow);

    UpdateHealthDisplay();

    // Low health visual effect
    if (CurrentHealth > 0 && CurrentHealth <= MaxHealth * 0.3f)
    {
        if (USkeletalMeshComponent* MeshComp = GetMesh())
        {
            // Flash red
            MeshComp->SetVectorParameterValueOnMaterials(FName("DamageFlash"), FVector(1, 0, 0));

            // Reset after 0.2 seconds
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

void ATurnBasedCharacter::UpdateHealthDisplay()
{
    if (!CombatComponent || !HealthBarWidget)
        return;

    int32 CurrentHealth = CombatComponent->GetCurrentHealth();
    int32 MaxHealth = CombatComponent->GetMaxHealth();

    HealthBarWidget->UpdateHealth(CurrentHealth, MaxHealth);

    if (CurrentHealth <= 0)
    {
        HealthBarComponent->SetVisibility(false);
    }

    Debug::Print(FString::Printf(TEXT("%s Health Display Updated: %d/%d"),
        *GetActorLabel(), CurrentHealth, MaxHealth), FColor::Green);
}

