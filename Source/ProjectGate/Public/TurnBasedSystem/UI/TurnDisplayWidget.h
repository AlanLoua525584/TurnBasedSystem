// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TurnBasedSystem/SimpleTurnManager.h"

#include "TurnDisplayWidget.generated.h"

//Notice GameMode
DECLARE_DELEGATE(FOnNextPhaseClicked);
DECLARE_DELEGATE(FOnEndTurnClicked);


UCLASS()

class PROJECTGATE_API UTurnDisplayWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    //�e�U���
    FOnNextPhaseClicked OnNextPhaseClicked;
    FOnEndTurnClicked OnEndTurnClicked;


    // ��s��ܪ����
    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdateTurnCount(int32 NewTurnCount);

    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdateCurrentCharacter(const FString& CharacterName);

    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdatePhase(ETurnPhase NewPhase);
   
    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdateTurnOrder(const TArray<FString>& CharacterNames, int32 CurrentIndex);

    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdateCameraMode(bool bIsFocusMode);

    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdateActionPoints(int32 CurrentAP, int32 MaxAP);

    // �@�O���
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* StaminaText;

    UPROPERTY(meta = (BindWidget))
    class UProgressBar* StaminaBar;

    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateStamina(float CurrentStamina, float MaxStamina);

protected:
    // �j�w�� UI ����r����
    UPROPERTY(meta = (BindWidget))
	class UTextBlock* TurnCountText;

    UPROPERTY(meta = (BindWidget))
	class UTextBlock* CurrentCharacterText;

    UPROPERTY(meta = (BindWidget))
	class UTextBlock* PhaseText;

    UPROPERTY(meta = (BindWidget))
    class UButton* NextPhaseButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* EndTurnButton;

    UPROPERTY(meta = (BindWidget))
    class UVerticalBox* OrderListBox;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* CameraModeText;

    // === AP ��ܤ��� ===
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ActionPointsText;

    UPROPERTY(meta = (BindWidget))
    class UProgressBar* ActionPointsBar;


    // ��l��
    virtual void NativeConstruct() override;
    virtual void NativeDestruct() override;


private:
    //���s�I���B�z
    UFUNCTION()
    void HandleNextPhaseClicked();

    UFUNCTION()
    void HandleEndTurnClicked();

};
