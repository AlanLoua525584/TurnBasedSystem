// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatSystem/CombatDisplayWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/CanvasPanel.h"
#include "Components/ProgressBar.h"
#include "Components/ScrollBox.h"
#include "Components/ScrollBoxSlot.h"
#include "CombatSystem/CombatComponent.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Public/DebugHelper.h"

void UCombatDisplayWidget::NativeConstruct()
{
    Super::NativeConstruct();

    Debug::Print(TEXT("=== CombatDisplayWidget NativeConstruct ==="), FColor::Yellow);

    // 檢查所有關鍵 Widget
    Debug::Print(FString::Printf(TEXT("AttackModeText: %s"),
        AttackModeText ? TEXT("OK") : TEXT("NULL")), FColor::Cyan);
    Debug::Print(FString::Printf(TEXT("AttackModeIcon: %s"),
        AttackModeIcon ? TEXT("OK") : TEXT("NULL")), FColor::Cyan);
    Debug::Print(FString::Printf(TEXT("CombatLogBox: %s"),
        CombatLogBox ? TEXT("OK") : TEXT("NULL")), FColor::Cyan);


    // 初始隱藏預覽面板
    if (DamagePreviewPanel)
    {
        DamagePreviewPanel->SetVisibility(ESlateVisibility::Hidden);
    }

    if (TargetInfoPanel)
    {
        TargetInfoPanel->SetVisibility(ESlateVisibility::Hidden);
    }

    // 初始化攻擊模式顯示
    SetAttackModeActive(false);
}


void UCombatDisplayWidget::ShowDamagePreview(int32 PreviewDamage, bool bIsCritical)
{
    if (!DamagePreviewPanel) return;

    DamagePreviewPanel->SetVisibility(ESlateVisibility::Visible);

    if (PreviewDamageText)
    {
        FString DamageString = FString::Printf(TEXT("%d"), PreviewDamage);
        PreviewDamageText->SetText(FText::FromString(DamageString));

        // 暴擊時使用不同顏色
        FSlateColor DamageColor = bIsCritical ?
            FSlateColor(FLinearColor(1.0f, 0.5f, 0.0f)) :  // 橙色
            FSlateColor(FLinearColor(1.0f, 1.0f, 1.0f));   // 白色

        PreviewDamageText->SetColorAndOpacity(DamageColor);
    }

    if (PreviewCriticalText)
    {
        PreviewCriticalText->SetVisibility(
            bIsCritical ? ESlateVisibility::Visible : ESlateVisibility::Hidden
        );
    }
}

void UCombatDisplayWidget::HideDamagePreview()
{
    if (DamagePreviewPanel)
    {
        DamagePreviewPanel->SetVisibility(ESlateVisibility::Hidden);
    }
}

void UCombatDisplayWidget::SetAttackModeActive(bool bActive)
{
    Debug::Print(FString::Printf(TEXT("SetAttackModeActive called: %s"),
        bActive ? TEXT("TRUE") : TEXT("FALSE")), FColor::Cyan);


    if (AttackModeText)
    {
        FString ModeText = bActive ? TEXT("ATTACK MODE") : TEXT("");
        AttackModeText->SetText(FText::FromString(ModeText));
        Debug::Print(TEXT("AttackModeText updated"), FColor::Green);
    }
    else
    {
        Debug::Print(TEXT("AttackModeText is NULL!"), FColor::Red);
    }


    if (AttackModeIcon)
    {
        AttackModeIcon->SetVisibility(
            bActive ? ESlateVisibility::Visible : ESlateVisibility::Hidden
        );
        Debug::Print(TEXT("AttackModeIcon visibility updated"), FColor::Green);
    }
    else
    {
        Debug::Print(TEXT("AttackModeIcon is NULL!"), FColor::Red);
    }
}

void UCombatDisplayWidget::ShowTargetInfo(AActor* Target, bool bCanAttack)
{
    if (!Target || !TargetInfoPanel) return;

    TargetInfoPanel->SetVisibility(ESlateVisibility::Visible);

    // 顯示目標名稱
    if (TargetNameText)
    {
        FString TargetName = Target->GetActorLabel();
        TargetNameText->SetText(FText::FromString(TargetName));

        // 可攻擊目標用紅色，不可攻擊用灰色
        FSlateColor NameColor = bCanAttack ?
            FSlateColor(FLinearColor(1.0f, 0.2f, 0.2f)) :
            FSlateColor(FLinearColor(0.5f, 0.5f, 0.5f));
        TargetNameText->SetColorAndOpacity(NameColor);
    }

    // 更新生命值顯示
    UpdateTargetHealthDisplay(Target);

    // 設置狀態圖標
    if (TargetStatusIcon)
    {
        // 根據是否可攻擊顯示不同圖標
        TargetStatusIcon->SetColorAndOpacity(
            bCanAttack ? FLinearColor::Red : FLinearColor::Gray
        );
    }
}

void UCombatDisplayWidget::HideTargetInfo()
{
    if (TargetInfoPanel)
    {
        TargetInfoPanel->SetVisibility(ESlateVisibility::Hidden);
    }
}

void UCombatDisplayWidget::ShowCombatResult(const FDamageResult& DamageResult)
{
    Debug::Print(TEXT("ShowCombatResult called"), FColor::Magenta);

    if (!CombatLogBox)
    {
        Debug::Print(TEXT("CombatLogBox is NULL!"), FColor::Red);
        return;
    }


    if (!DamageResult.Target || !DamageResult.Attacker) return;

    // 創建戰鬥日誌訊息
    FString LogMessage = FString::Printf(
        TEXT("%s attacks %s for %d damage%s"),
        *DamageResult.Attacker->GetActorLabel(),
        *DamageResult.Target->GetActorLabel(),
        DamageResult.FinalDamage,
        DamageResult.bIsCritical ? TEXT(" (CRITICAL!)") : TEXT("")
    );

    // 選擇顏色
    FLinearColor LogColor = DamageResult.bIsCritical ?
        FLinearColor(1.0f, 0.5f, 0.0f) :  // 橙色
        FLinearColor(1.0f, 0.8f, 0.8f);   // 淺紅色

    AddCombatLogEntry(LogMessage, LogColor);

}


void UCombatDisplayWidget::AddCombatLogEntry(const FString& Message, const FLinearColor& Color)
{
    if (!CombatLogBox) return;

    // 創建新的文字元件
    UTextBlock* LogEntry = NewObject<UTextBlock>(this);
    if (LogEntry)
    {
        LogEntry->SetText(FText::FromString(Message));
        LogEntry->SetColorAndOpacity(FSlateColor(Color));

        // 設置字體
        FSlateFontInfo FontInfo = LogEntry->GetFont();
        FontInfo.Size = 12;
        LogEntry->SetFont(FontInfo);

        // 加入到 ScrollBox
        CombatLogBox->AddChild(LogEntry);

        // 自動滾動到底部
        CombatLogBox->ScrollToEnd();

        // 限制日誌數量（保留最近 20 條）
        if (CombatLogBox->GetChildrenCount() > 20)
        {
            CombatLogBox->RemoveChildAt(0);
        }
    }
}

void UCombatDisplayWidget::UpdateTargetHealthDisplay(AActor* Target)
{
    if (!Target) return;

    UCombatComponent* CombatComp = Target->FindComponentByClass<UCombatComponent>();
    if (!CombatComp) return;

    int32 CurrentHealth = CombatComp->GetCurrentHealth();
    int32 MaxHealth = CombatComp->GetMaxHealth();
    float HealthPercent = CombatComp->GetHealthPercent();

    if (TargetHealthText)
    {
        FString HealthString = FString::Printf(TEXT("%d / %d"), CurrentHealth, MaxHealth);
        TargetHealthText->SetText(FText::FromString(HealthString));
    }

    if (TargetHealthBar)
    {
        TargetHealthBar->SetPercent(HealthPercent);

        // 根據血量改變顏色
        FLinearColor HealthColor;
        if (HealthPercent > 0.6f)
            HealthColor = FLinearColor::Green;
        else if (HealthPercent > 0.3f)
            HealthColor = FLinearColor::Yellow;
        else
            HealthColor = FLinearColor::Red;

        TargetHealthBar->SetFillColorAndOpacity(HealthColor);
    }
}
