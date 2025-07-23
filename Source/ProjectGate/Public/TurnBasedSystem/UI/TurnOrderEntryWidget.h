// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "TurnOrderEntryWidget.generated.h"

// Forward declarations
class ATurnBasedCharacter;
/**
  * TurnOrderEntryWidget - 回合順序中單個角色的顯示條目
 * 負責顯示角色的頭像、血量、AP 等信息
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

    UFUNCTION(BlueprintCallable, Category = "UI")
    void SetAsCurrentCharacter(bool bIsCurrent);


    UFUNCTION(BlueprintCallable, Category = "UI")
    void SetTurnOrderNumber(int32 Number);

    //BlueprintImplementableEvent不需要實作
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHighlightAnimation();

    // 更新血量顯示
    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateHealthDisplay();

    // AP 相關方法
    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateActionPoints(ATurnBasedCharacter* Character);


    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateAllCharacterInfo();

    //Getter函數
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

    // 新增 AP 相關組件（需要在 Blueprint 中添加）
    UPROPERTY(meta = (BindWidget))
    class UProgressBar* ActionPointsBar;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ActionPointsText;

    // 當前角色指示器
    UPROPERTY(meta = (BindWidget))
    class UImage* CurrentCharacterIndicator;

    // 回合順序數字
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TurnOrderNumber;

    //數據成員
    UPROPERTY()
    ATurnBasedCharacter* AssociatedCharacter;


private:
    // 當前角色狀態
    bool bIsCurrentCharacter = false;
};
