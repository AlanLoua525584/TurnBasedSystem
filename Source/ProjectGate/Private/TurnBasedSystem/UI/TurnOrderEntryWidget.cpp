// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatInterface.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Public/DebugHelper.h"


void UTurnOrderEntryWidget::SetCharacterData(ATurnBasedCharacter* Character)
{
    if (!Character) return;

    AssociatedCharacter = Character;

    if (CharacterPortrait)
    {
        UTexture2D* Portrait = Character->GetUIPortrait();
        if (Portrait)
        {
            CharacterPortrait->SetBrushFromTexture(Portrait);
            CharacterPortrait->SetDesiredSizeOverride(FVector2D(64.0f, 64.0f));
            Debug::Print(FString::Printf(TEXT(" 頭像載入成功: %s"), *Portrait->GetName()), FColor::Green);
        }
        else
        {
            Debug::Print(FString::Printf(TEXT(" 頭像載入失敗: %s"), *Character->GetName()), FColor::Red);

            // 設置預設顏色
            FSlateBrush Brush;
            Brush.TintColor = Character->GetPortraitBorderColor();
            Brush.DrawAs = ESlateBrushDrawType::RoundedBox;
            CharacterPortrait->SetBrush(Brush);
            CharacterPortrait->SetDesiredSizeOverride(FVector2D(64.0f, 64.0f)); 
        }
    }


    //血條
    if (HealthBar && Character->AccessCombatComponent())
    {
        const FCombatStats& Stats = Character->AccessCombatComponent()->GetStats();
        float HealthPercent = (float)Stats.CurrentHealth / (float)Stats.MaxHealth;
        HealthBar->SetPercent(HealthPercent);


        FLinearColor HealthColor;
        if (HealthPercent > 0.6f)
            HealthColor = FLinearColor(0.0f, 1.0f, 0.0f); // Green
        else if (HealthPercent > 0.3f)
            HealthColor = FLinearColor(1.0f, 1.0f, 0.0f); // Yellow
        else
            HealthColor = FLinearColor(1.0f, 0.0f, 0.0f); // Red

        HealthBar->SetFillColorAndOpacity(HealthColor);
    }


    if (InitiativeText)
    {
        int32 Initiative = Character->CurrentInitiative;
        InitiativeText->SetText(FText::AsNumber(Initiative));

        // 設置小字體
        FSlateFontInfo FontInfo = InitiativeText->GetFont();
        FontInfo.Size = 10;
        InitiativeText->SetFont(FontInfo);
    }

  
    if (CharacterNameText)
    {
        CharacterNameText->SetText(FText::FromString(Character->GetActorLabel()));
    }


    if (TeamColorBorder)
    {
        FLinearColor BorderColor = Character->GetPortraitBorderColor();
        TeamColorBorder->SetColorAndOpacity(BorderColor);
    }


    // === 新增：AP 設置 ===
    UpdateActionPoints(Character);

    // SetEffectwithTeam
    if (Character->TeamID == 1) //  敵人
    {
        // Add Enmey Effect
    }

}

void UTurnOrderEntryWidget::SetHighlighted(bool bHighlight)
{
    if (HighlightFrame)
    {
        HighlightFrame->SetVisibility(bHighlight ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
    }

    
    if (TeamColorBorder && AssociatedCharacter)
    {
        FLinearColor BorderColor = AssociatedCharacter->GetPortraitBorderColor();
        if (bHighlight)
        {
            BorderColor *= 1.5f; // Brightness
            BorderColor.A = 1.0f;
        }
        TeamColorBorder->SetColorAndOpacity(BorderColor);
    }
}

void UTurnOrderEntryWidget::UpdateHealthDisplay()
{
    if (!AssociatedCharacter || !HealthBar) return;

    if (UCombatComponent* CombatComp = AssociatedCharacter->AccessCombatComponent())
    {
        const FCombatStats& Stats = CombatComp->GetStats();
        float HealthPercent = (float)Stats.CurrentHealth / (float)Stats.MaxHealth;

        // 更新血條百分比
        HealthBar->SetPercent(HealthPercent);

        // 更新血條顏色（即時反映血量變化）
        FLinearColor HealthColor;
        if (HealthPercent > 0.8f)
            HealthColor = FLinearColor(0.0f, 1.0f, 0.0f, 1.0f);      // 深綠
        else if (HealthPercent > 0.6f)
            HealthColor = FLinearColor(0.5f, 1.0f, 0.0f, 1.0f);      // 淺綠
        else if (HealthPercent > 0.4f)
            HealthColor = FLinearColor(1.0f, 1.0f, 0.0f, 1.0f);      // 黃色
        else if (HealthPercent > 0.2f)
            HealthColor = FLinearColor(1.0f, 0.5f, 0.0f, 1.0f);      // 橙色
        else
            HealthColor = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);      // 紅色

        HealthBar->SetFillColorAndOpacity(HealthColor);

        // 如果血量為0，可以添加死亡效果
        if (Stats.CurrentHealth <= 0)
        {
            // 設置半透明效果表示死亡
            SetRenderOpacity(0.5f);

            // 或者添加死亡標記
            if (CharacterNameText)
            {
                CharacterNameText->SetColorAndOpacity(FLinearColor::Red);
            }
        }
        else
        {
            // 恢復正常顯示
            SetRenderOpacity(1.0f);
            if (CharacterNameText)
            {
                CharacterNameText->SetColorAndOpacity(FLinearColor::White);
            }
        }

        Debug::Print(FString::Printf(TEXT("血量更新: %s -> %.1f%% (%d/%d)"),
            *AssociatedCharacter->GetName(), HealthPercent * 100, Stats.CurrentHealth, Stats.MaxHealth), FColor::Green);
    }
}

void UTurnOrderEntryWidget::UpdateActionPoints(ATurnBasedCharacter* Character)
{
    if (!Character || !Character->GetTurnSystemComponent()) return;

    UTurnSystemComponent* TurnSystem = Character->GetTurnSystemComponent();
    int32 CurrentAP = TurnSystem->GetCurrentActionPoints();
    int32 MaxAP = TurnSystem->GetMaxActionPoints();

    // 更新 AP 文字
    if (ActionPointsText)
    {
        ActionPointsText->SetText(FText::FromString(FString::Printf(TEXT("AP:%d"), CurrentAP)));

        // AP 文字顏色
        FLinearColor APColor = CurrentAP > 0 ? FLinearColor::White : FLinearColor::Red;
        ActionPointsText->SetColorAndOpacity(APColor);
    }

    // 更新 AP 進度條（大小在 Blueprint 中設置）
    if (ActionPointsBar && MaxAP > 0)
    {
        float APPercent = (float)CurrentAP / (float)MaxAP;
        ActionPointsBar->SetPercent(APPercent);

        // AP 條顏色
        FLinearColor APBarColor = APPercent > 0.5f ?
            FLinearColor(0.0f, 0.8f, 1.0f) :
            (APPercent > 0.0f ? FLinearColor::Yellow : FLinearColor::Red);
        ActionPointsBar->SetFillColorAndOpacity(APBarColor);
    }
}

void UTurnOrderEntryWidget::SetAsCurrentCharacter(bool bIsCurrent)
{
    bIsCurrentCharacter = bIsCurrent;

    // 當前角色指示器
    if (CurrentCharacterIndicator)
    {
        CurrentCharacterIndicator->SetVisibility(
            bIsCurrent ? ESlateVisibility::Visible : ESlateVisibility::Hidden
        );

        if (bIsCurrent)
        {
            // 金色三角形指示器
            CurrentCharacterIndicator->SetColorAndOpacity(FLinearColor(1.0f, 0.8f, 0.0f, 1.0f));
        }
    }

    // 整體卡片效果
    if (bIsCurrent)
    {
        // 當前角色：發光邊框 + 放大
        SetRenderScale(FVector2D(1.15f, 1.15f));

        if (TeamColorBorder)
        {
            FLinearColor GlowColor = FLinearColor(1.0f, 0.8f, 0.0f, 0.8f);
            TeamColorBorder->SetColorAndOpacity(GlowColor);
        }
    }
    else
    {
        // 其他角色：正常大小
        SetRenderScale(FVector2D(1.0f, 1.0f));

        if (TeamColorBorder && AssociatedCharacter)
        {
            FLinearColor NormalColor = AssociatedCharacter->GetPortraitBorderColor();
            NormalColor.A = 0.6f; // 半透明
            TeamColorBorder->SetColorAndOpacity(NormalColor);
        }
    }
}

void UTurnOrderEntryWidget::UpdateAllCharacterInfo()
{
    if (!AssociatedCharacter) return;

    // 更新血量
    UpdateHealthDisplay();

    // 更新 AP
    UpdateActionPoints(AssociatedCharacter);
}

void UTurnOrderEntryWidget::SetTurnOrderNumber(int32 Number)
{
    if (TurnOrderNumber)
    {
        if (Number == 0)
        {
            // 當前角色不顯示數字
            TurnOrderNumber->SetVisibility(ESlateVisibility::Hidden);
        }
        else
        {
            TurnOrderNumber->SetText(FText::AsNumber(Number));
            TurnOrderNumber->SetVisibility(ESlateVisibility::Visible);

            // 小字體
            FSlateFontInfo FontInfo = TurnOrderNumber->GetFont();
            FontInfo.Size = 12;
            TurnOrderNumber->SetFont(FontInfo);
        }
    }
}
