// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatSystem/CombatStats.h"

#include "CombatModeComponent.generated.h"

class ATurnBasedCharacter;
class UCombatComponent;
class UCombatDisplayWidget;
struct FDamageResult;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackModeChanged, bool, bIsInAttackMode);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))

class PROJECTGATE_API UCombatModeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatModeComponent();


    void Initialize(APlayerController* InOwnerController);

  
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void EnterAttackMode();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void ExitAttackMode();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void ToggleAttackMode();


    void ProcessAttackClick();

    void ShowAttackPreview(AActor* Target);

    UFUNCTION(BlueprintPure, Category = "Combat")
    bool IsInAttackMode() const { return bIsInAttackMode; }


    UPROPERTY(BlueprintAssignable, Category = "Combat")
    FOnAttackModeChanged OnAttackModeChanged;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:	
  
    bool bIsInAttackMode = false;
    bool bAutoExitAttackMode = true;

    UPROPERTY()
    AActor* LastHighlightedTarget = nullptr;

 
    UPROPERTY()
    APlayerController* OwnerController = nullptr;

    UPROPERTY()
    UCombatDisplayWidget* CombatDisplayWidget = nullptr;


    void UpdateAttackTargetHighlight();
    bool GetCharacterUnderCursor(AActor*& OutCharacter);
    ATurnBasedCharacter* GetControlledTurnCharacter() const;

    UFUNCTION()
    void OnCombatResultReceived(AActor* Attacker, AActor* Target, const FDamageResult& Result);
		
};
