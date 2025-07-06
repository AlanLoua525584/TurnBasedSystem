// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatSystem/HealthPointBarWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Public/DebugHelper.h"


void UHealthBarWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // 設置初始樣式
    if (HealthBar)
    {
        HealthBar->SetFillColorAndOpacity(FLinearColor::Red);
    }

    if (HealthBarBackground)
    {
        HealthBarBackground->SetColorAndOpacity(FLinearColor(0.1f, 0.1f, 0.1f, 0.8f));
    }
}

void UHealthBarWidget::UpdateHealth(int32 CurrentHealth, int32 MaxHealth)
{

    if (MaxHealth <= 0) return;

    float HealthPercent = (float)CurrentHealth / (float)MaxHealth;
    // 更新進度條
    if (HealthBar)
    {
        HealthBar->SetPercent(HealthPercent);
        UpdateHealthBarColor(HealthPercent);
    }

    // 更新文字
    if (HealthText)
    {
        FString HealthString = FString::Printf(TEXT("%d/%d"), CurrentHealth, MaxHealth);
        HealthText->SetText(FText::FromString(HealthString));

        // 血量低時文字變紅
        FSlateColor TextColor = HealthPercent > 0.3f ?
            FSlateColor(FLinearColor::White) :
            FSlateColor(FLinearColor::Red);
        HealthText->SetColorAndOpacity(TextColor);
    }
}

void UHealthBarWidget::SetHealthBarColor(FLinearColor NewColor)
{
    if (HealthBar)
    {
        HealthBar->SetFillColorAndOpacity(NewColor);
    }
}



void UHealthBarWidget::UpdateHealthBarColor(float HealthPercent)
{
    if (!HealthBar) return;

    FLinearColor BarColor;

    if (HealthPercent > 0.6f)
    {
        // 綠色 (健康)
        BarColor = FLinearColor::Green;
    }
    else if (HealthPercent > 0.3f)
    {
        // 黃色 (警告)
        BarColor = FLinearColor::Yellow;
    }
    else
    {
        // 紅色 (危險)
        BarColor = FLinearColor::Red;
    }

    HealthBar->SetFillColorAndOpacity(BarColor);
}
