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

 

protected:
    UPROPERTY(meta = (BindWidget))
    class UImage* CharacterPortrait;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* InitiativeText;

    UPROPERTY(meta = (BindWidget))
    class UImage* HighlightFrame;

    UPROPERTY()
    ATurnBasedCharacter* AssociatedCharacter;
};
