// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TurnBasedSystem/DataAssets/CharacterPortraitData.h"
#include "GameFramework/Actor.h"
#include "CombatSystem/CombatInterface.h"
#include "TurnBasedCharacter.generated.h"

// Forward declarations
class USpringArmComponent;
class UCameraComponent;
class UGridVisualComponent;
class UGridMovementComponent;
class UTurnSystemComponent;
class UEnhancedMovementSystem;
class UCombatComponent;
class UWidgetComponent;
class UHealthBarWidget;
class AGridManager;

enum class EAnimationType : uint8;
class UAnimationManagerComponent;
class UCombatAnimationComponent;


// Delegates for backward compatibility
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTurnOrderChangedSignature, int32, NewInitiative);



/**
 * Base class for all turn-based characters
 * Acts as a container for various gameplay components
 */
UCLASS()
class PROJECTGATE_API ATurnBasedCharacter : public ACharacter, public ICombatInterface
{
    GENERATED_BODY()

public:


    // Sets default values for this character's properties
    ATurnBasedCharacter();

    // === Core Properties ===

     // Team identification
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Team")
    int32 TeamID = 0;  // 0 = Player, 1 = Enemy

    // Player control flag
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Control")
    bool bIsPlayerControlled = false;

    // Portrait system
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|UI")
    FPortraitData PortraitData;

    // === Backward Compatibility Properties ===
  // Current initiative (forwarded from TurnSystemComponent)
    UPROPERTY(BlueprintReadWrite, Category = "Turn Order")
    int32 CurrentInitiative = 0;

    UPROPERTY(BlueprintAssignable, Category = "Turn System|TurnOrder")
    FTurnOrderChangedSignature OnTurnOrderChanged;

    UFUNCTION()
    void OnAnimationHitEvent(EAnimationType AnimationType, FName EventName);

    UFUNCTION()
    void OnCombatAnimationHit(AActor* Attacker, AActor* Target);

    UFUNCTION()
    void OnCombatAnimationCompleted(AActor* Attacker, AActor* Target, bool bSuccess);



    // === Portrait Helpers ===

    UFUNCTION(BlueprintCallable, Category = "UI")
    UTexture2D* GetUIPortrait() const;

    UFUNCTION(BlueprintCallable, Category = "UI")
    UTexture2D* GetBattlePortrait() const;

    UFUNCTION(BlueprintCallable, Category = "UI")
    UTexture2D* GetAnyAvailablePortrait() const;

    UFUNCTION(BlueprintCallable, Category = "UI")
    FLinearColor GetPortraitBorderColor() const;

    // === Component Getters ===

    UFUNCTION(BlueprintPure, Category = "Components")
    UGridMovementComponent* GetGridMovementComponent() const { return GridMovementComponent; }

    UFUNCTION(BlueprintPure, Category = "Components")
    UTurnSystemComponent* GetTurnSystemComponent() const { return TurnSystemComponent; }


    UFUNCTION(BlueprintPure, Category = "Components")
    UCombatComponent* AccessCombatComponent() const { return CombatComponent; }

    UFUNCTION(BlueprintPure, Category = "Components")
    UEnhancedMovementSystem* GetEnhancedMovementSystem() const { return EnhancedMovementSystem; }

    UFUNCTION(BlueprintPure, Category = "Components")
    UGridVisualComponent* GetGridVisualComponent() const { return GridVisualComponent; }

    // Turn System delegates
    UFUNCTION(BlueprintCallable, Category = "Turn System")
    bool ConsumeActionPoints(int32 Amount);

    UFUNCTION(BlueprintPure, Category = "Turn System")
    int32 GetCurrentActionPoints() const;

    UFUNCTION(BlueprintPure, Category = "Turn System")
    int32 GetMaxActionPoints() const;

    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool IsMyTurn() const;

    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool CanPerformAction(int32 ActionCost) const;

    // Grid System delegates
    UFUNCTION(BlueprintCallable, Category = "Grid System")
    void UpdateGridPositionFromWorld();

    UFUNCTION(BlueprintCallable, Category = "Grid System")
    void ShowMovementRange();

    UFUNCTION(BlueprintPure, Category = "Grid System")
    FIntPoint GetCurrentGridPosition() const;

    UFUNCTION(BlueprintPure, Category = "Grid System")
    AGridManager* GetGridManager() const { return GridManager; }

    // Movement mode control
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void SetMovementMode(bool bDynamic);

   
    // Turn System integration methods
    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void OnTurnStart();

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void OnTurnEnd();

    // Grid movement integration methods
    UFUNCTION(BlueprintCallable, Category = "Grid Movement")
    bool MoveToGridPosition(FIntPoint TargetGridPos);



    // === Utility Functions ===


    UFUNCTION(BlueprintPure, Category = "Character")
    FString GetCharacterDisplayName() const
    {
        return GetActorLabel().IsEmpty() ? GetName() : GetActorLabel();
    }

    UFUNCTION(BlueprintPure, Category = "Character")
    bool IsPlayerTurn() const;

    UFUNCTION(BlueprintPure, Category = "Character")
    bool IsAlive() const;

    UFUNCTION(BlueprintCallable, Category = "Character")
    void SetGridManager(AGridManager* Manager);

    // === Combat Interface Implementation ===

    virtual bool CanBeAttacked_Implementation() const override;
    virtual UCombatComponent* GetCombatComponent_Implementation() const override;
    virtual void OnDamageReceived_Implementation(const FDamageResult& DamageResult) override;
    virtual void OnDeath_Implementation(AActor* Killer) override;

    // === Camera Components ===

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* FollowCamera;

    //==Getter

    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool IsDying() const { return bIsDying; }


    UFUNCTION(BlueprintCallable, Category = "Combat")
    void ExecuteAnimatedAttack(AActor* Target);

    // 執行直接攻擊（無動畫回退方案）
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void ExecuteDirectAttack(AActor* Target);

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaTime) override;


    // === Core Components ===

    // Grid movement handling
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UGridMovementComponent* GridMovementComponent;

    // Turn system management
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UTurnSystemComponent* TurnSystemComponent;

    // Combat handling
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCombatComponent* CombatComponent;

    // Enhanced movement for dynamic mode
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UEnhancedMovementSystem* EnhancedMovementSystem;

    // Grid visualization
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UGridVisualComponent* GridVisualComponent;

    // === UI Components ===

    // Health bar widget component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
    UWidgetComponent* HealthBarComponent;

    // ===Animation Components==
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UAnimationManagerComponent* AnimationManager;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UCombatAnimationComponent* CombatAnimationComponent;



    // Health bar widget class
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UHealthBarWidget> HealthBarWidgetClass;

    // Health bar widget instance
    UPROPERTY()
    UHealthBarWidget* HealthBarWidget;

    // === Death System ===

    UPROPERTY(EditDefaultsOnly, Category = "Combat|Death")
    class UAnimMontage* DeathMontage;

    UPROPERTY(EditDefaultsOnly, Category = "Combat|Death")
    TSubclassOf<class AActor> DeathEffectClass;

    UPROPERTY(EditDefaultsOnly, Category = "Combat|Death")
    float DeathDestroyDelay = 3.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Combat|Death")
    bool bIsDying = false;

    

private:
    // Grid manager reference
    UPROPERTY()
    AGridManager* GridManager;

    // Death handling
    FTimerHandle DeathTimerHandle;

    UFUNCTION()
    void OnDeathAnimationEnd();

    void NotifyTurnSystemOfDeath();
    void PlayDeathEffects();
    void CleanupCharacter();

    // Health change callback
    UFUNCTION()
    void OnHealthChanged(AActor* Character, int32 CurrentHealth, int32 MaxHealth);

    // Update health display
    void UpdateHealthDisplay();

    // Setup components
    void InitializeComponents();
    void SetupCameraComponents();

    // 處理 Initiative 變化
    UFUNCTION()
    void OnInitiativeChanged(int32 NewInitiative);

    // Event binding methods
    void BindComponentEvents();

    UPROPERTY()
    AActor* PendingAttackTarget;

    //Debug
    void DebugCombatBindings();


public:
    UFUNCTION(BlueprintPure, Category = "Animation")
    UAnimationManagerComponent* GetAnimationManager() const { return AnimationManager; }

    UFUNCTION(BlueprintPure, Category = "Animation")
    UCombatAnimationComponent* GetCombatAnimationComponent() const { return CombatAnimationComponent; }

    UFUNCTION(BlueprintCallable, Category = "Animation")
    virtual void HandleAnimNotify(FName NotifyName);

    //安全設置函數
    void SetupHealthBar();

    void BindCombatEvents();

    void SetupAnimationManager();

    void SetupCombatAnimationComponent();

};