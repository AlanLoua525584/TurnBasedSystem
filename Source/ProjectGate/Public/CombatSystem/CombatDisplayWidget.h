// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CombatSystem/CombatStats.h"
#include "CombatDisplayWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTGATE_API UCombatDisplayWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    // === 攻擊預覽功能 ===
    UFUNCTION(BlueprintCallable, Category = "Combat Display")
    void ShowDamagePreview(int32 PreviewDamage, bool bIsCritical);

    UFUNCTION(BlueprintCallable, Category = "Combat Display")
    void HideDamagePreview();

    // === 攻擊模式顯示 ===
    UFUNCTION(BlueprintCallable, Category = "Combat Display")
    void SetAttackModeActive(bool bActive);

    // === 目標資訊顯示 ===
    UFUNCTION(BlueprintCallable, Category = "Combat Display")
    void ShowTargetInfo(AActor* Target, bool bCanAttack);

    UFUNCTION(BlueprintCallable, Category = "Combat Display")
    void HideTargetInfo();

    // === 戰鬥結果顯示 ===
    UFUNCTION(BlueprintCallable, Category = "Combat Display")
    void ShowCombatResult(const FDamageResult& DamageResult);

    void UpdateTargetHealthDisplay(AActor* Target);

protected:
    // === UI 元件綁定 ===

    // 攻擊模式指示器
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* AttackModeText;

    UPROPERTY(meta = (BindWidget))
    class UImage* AttackModeIcon;

    // 傷害預覽面板
    UPROPERTY(meta = (BindWidget))
    class UCanvasPanel* DamagePreviewPanel;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* PreviewDamageText;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* PreviewCriticalText;

    // 目標資訊面板
    UPROPERTY(meta = (BindWidget))
    class UCanvasPanel* TargetInfoPanel;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TargetNameText;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TargetHealthText;

    UPROPERTY(meta = (BindWidget))
    class UProgressBar* TargetHealthBar;

    UPROPERTY(meta = (BindWidget))
    class UImage* TargetStatusIcon;

    // 戰鬥日誌
    UPROPERTY(meta = (BindWidget))
    class UScrollBox* CombatLogBox;

    virtual void NativeConstruct() override;

private:
    void AddCombatLogEntry(const FString& Message, const FLinearColor& Color);
  
};
