// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/CanvasPanelSlot.h"
#include "UIManagerComponent.generated.h"


// Forward declarations
class UCombatDisplayWidget;
class UTurnOrderWidget;
class UHealthBarWidget;
class AGridPlayerController;
class UCanvasPanelSlot;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UUIManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUIManagerComponent();

	void Initialize(APlayerController* InOwnerController);

	// UI Manage
	void CreateCombatUI();
	void CreateTurnOrderUI();

	// Create all UI elements
	UFUNCTION(BlueprintCallable, Category = "UI")
	void CreateAllUI();

	// UI Asscess
	UFUNCTION(BlueprintPure, Category = "UI")
	UCombatDisplayWidget* GetCombatDisplayWidget() const { return CombatDisplayWidget; }


    // Get turn order widget
    UFUNCTION(BlueprintPure, Category = "UI")
    UTurnOrderWidget* GetTurnOrderWidget() const { return TurnOrderWidget; }

    // === UI Update Functions ===

    // Update combat UI with new data
    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateCombatUI(AActor* Target, bool bCanAttack);

    // Update turn order display
    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateTurnOrderUI(const TArray<AActor*>& TurnOrder, int32 CurrentIndex);

    // Show damage preview
    UFUNCTION(BlueprintCallable, Category = "UI")
    void ShowDamagePreview(int32 Damage, bool bIsCritical);

    // Hide damage preview
    UFUNCTION(BlueprintCallable, Category = "UI")
    void HideDamagePreview();

    // Show combat result
    UFUNCTION(BlueprintCallable, Category = "UI")
    void ShowCombatResult(const struct FDamageResult& Result);

    // === UI State Management ===

    // Set attack mode UI state
    UFUNCTION(BlueprintCallable, Category = "UI")
    void SetAttackModeActive(bool bActive);

    // Hide all combat UI elements
    UFUNCTION(BlueprintCallable, Category = "UI")
    void HideCombatUI();

    // Destroy all UI widgets
    UFUNCTION(BlueprintCallable, Category = "UI")
    void DestroyAllUI();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    // Called when the component is destroyed
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
 
    UPROPERTY()
    UCombatDisplayWidget* CombatDisplayWidget = nullptr;

    UPROPERTY()
    UTurnOrderWidget* TurnOrderWidget = nullptr;

    // === Widget Classes ===

    // Combat display widget class
 
    UPROPERTY(EditAnywhere, Category = "UI Classes")
    TSubclassOf<UCombatDisplayWidget> CombatDisplayWidgetClass;

    UPROPERTY(EditAnywhere, Category = "UI Classes")
    TSubclassOf<UTurnOrderWidget> TurnOrderWidgetClass;
		
    // === References ===

    // GetController
    UPROPERTY()
    APlayerController* OwnerController = nullptr;

    // === Configuration ===

   // UI layer priorities
    UPROPERTY(EditDefaultsOnly, Category = "UI|Config")
    int32 CombatUILayer = 5;

    UPROPERTY(EditDefaultsOnly, Category = "UI|Config")
    int32 TurnOrderUILayer = 2;

    // Turn order UI positioning
    UPROPERTY(EditDefaultsOnly, Category = "UI|Config")
    FVector2D TurnOrderPosition = FVector2D(0, 50);

    UPROPERTY(EditDefaultsOnly, Category = "UI|Config")
    FAnchors TurnOrderAnchors;

    UPROPERTY(EditDefaultsOnly, Category = "UI|Config")
    FVector2D TurnOrderAlignment = FVector2D(0.5f, 0.0f);

    // === Helper Functions ===

    // Validate widget creation conditions
    bool CanCreateWidgets() const;

    // Setup turn order widget positioning
    void SetupTurnOrderPosition();

    // Get widget class from game mode if not set
    void TryGetWidgetClassesFromGameMode();


};
