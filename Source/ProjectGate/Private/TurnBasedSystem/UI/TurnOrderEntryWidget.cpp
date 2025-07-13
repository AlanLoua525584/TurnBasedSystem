// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"


void UTurnOrderEntryWidget::SetCharacterData(ATurnBasedCharacter* Character)
{
    if (!Character) return;

    AssociatedCharacter = Character;
    AssociatedCharacter = Character;

    // 設置頭像 - 使用新的結構
    if (UTexture2D* Portrait = Character->GetUIPortrait())
    {
        CharacterPortrait->SetBrushFromTexture(Portrait);
    }

    // 設置先攻值文字
    if (Character->AccessCombatComponent())
    {
        int32 Initiative = Character->CurrentInitiative;
        InitiativeText->SetText(FText::AsNumber(Initiative));
    }

    // 使用角色的邊框顏色
    FLinearColor BorderColor = Character->GetPortraitBorderColor();

    /*
    // 如果有邊框組件，設置顏色
    if (CharacterBorder)  // 需要在.h中添加這個組件
    {
        CharacterBorder->SetBrushColor(BorderColor);
    }

    */

    /*待後續增加
    // 根據框架類型設置特殊效果
    switch (Character->PortraitData.FrameStyle)
    {
    case 1: // 精英
        PlayEliteFrameAnimation();
        break;
    case 2: // Boss
        PlayBossFrameAnimation();
        break;
    default: // 普通
        // 不需要特殊效果
        break;
    }
    */

}
