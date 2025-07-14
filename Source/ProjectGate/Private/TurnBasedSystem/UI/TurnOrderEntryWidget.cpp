// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
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
    AssociatedCharacter = Character;


    if (CharacterPortrait)
    {
        if (UTexture2D* Portrait = Character->GetUIPortrait())
        {
            CharacterPortrait->SetBrushFromTexture(Portrait);
        }
    }


    if (Character->AccessCombatComponent())
    {
        int32 Initiative = Character->CurrentInitiative;
        InitiativeText->SetText(FText::AsNumber(Initiative));
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

    // SetEffectwithTeam
    if (Character->TeamID == 1) //  ¼Ä¤H
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
