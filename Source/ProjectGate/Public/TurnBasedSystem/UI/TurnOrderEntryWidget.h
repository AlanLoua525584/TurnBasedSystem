// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TurnOrderEntryWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTGATE_API UTurnOrderEntryWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterData(ATurnBasedCharacter* Character);

    UFUNCTION(BlueprintCallable)
    void SetHighlighted(bool bHighlight);

    //BlueprintImplementableEvent
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHighlightAnimation();

    UFUNCTION(BlueprintPure)
    ATurnBasedCharacter* GetAssociatedCharacter() const { return AssociatedCharacter; }


 

protected:
    UPROPERTY(meta = (BindWidget))
    class UImage* CharacterPortrait;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* InitiativeText;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* CharacterNameText;

    UPROPERTY(meta = (BindWidget))
    class UImage* HighlightFrame;


    UPROPERTY(meta = (BindWidget))
    class UImage* TeamColorBorder;

    UPROPERTY(meta = (BindWidget))
    class UProgressBar* HealthBar;

    UPROPERTY()
    ATurnBasedCharacter* AssociatedCharacter;
};
