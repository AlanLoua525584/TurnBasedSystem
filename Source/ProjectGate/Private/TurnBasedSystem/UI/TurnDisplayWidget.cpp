// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Public/DebugHelper.h"


void UTurnDisplayWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// 初始化顯示

	if (TurnCountText)
	{
		TurnCountText->SetText(FText::FromString("0"));
	}

	if (CurrentCharacterText)
	{
		CurrentCharacterText->SetText(FText::FromString("None"));
	}

	if (PhaseText)
	{
		PhaseText->SetText(FText::FromString("Waiting"));
	}

	//綁定按鈕事件
	if (NextPhaseButton)
	{
		NextPhaseButton->OnClicked.AddDynamic(this, &UTurnDisplayWidget::HandleNextPhaseClicked);
	}

	if (EndTurnButton)
	{
		EndTurnButton->OnClicked.AddDynamic(this, &UTurnDisplayWidget::HandleEndTurnClicked);
	}

}

void UTurnDisplayWidget::NativeDestruct()
{
	//Clean Binding
	if (NextPhaseButton)
	{
		NextPhaseButton->OnClicked.RemoveDynamic(this, &UTurnDisplayWidget::HandleNextPhaseClicked);
	}

	if (EndTurnButton)
	{
		EndTurnButton->OnClicked.RemoveDynamic(this, &UTurnDisplayWidget::HandleEndTurnClicked);
	}

	Super::NativeDestruct();
}

void UTurnDisplayWidget::HandleNextPhaseClicked()
{
	Debug::Print(TEXT("Next Phase Button Clicked"), FColor::Cyan);
	OnNextPhaseClicked.ExecuteIfBound();
}

void UTurnDisplayWidget::HandleEndTurnClicked()
{
	Debug::Print(TEXT("End Turn Button Clicked"), FColor::Orange);
	OnEndTurnClicked.ExecuteIfBound();
}



void UTurnDisplayWidget::UpdateTurnCount(int32 NewTurnCount)
{
	if (TurnCountText)
	{
		TurnCountText->SetText(FText::AsNumber(NewTurnCount));
	}

}

void UTurnDisplayWidget::UpdateCurrentCharacter(const FString& CharacterName)
{
	if (CurrentCharacterText)
	{
		CurrentCharacterText->SetText(FText::FromString(CharacterName));
	}
}

void UTurnDisplayWidget::UpdatePhase(ETurnPhase NewPhase)
{
	if (!PhaseText) return;

	FString PhaseName;
	FSlateColor PhaseColor;

	switch (NewPhase)
	{
	case ETurnPhase::TurnStart:
		PhaseName = TEXT("TURN START");
		PhaseColor = FSlateColor(FLinearColor(0.2f,0.4f,1.0f));// 藍色
		break;

	case ETurnPhase::MainPhase:
		PhaseName = TEXT("MAIN PHASE");
		PhaseColor = FSlateColor(FLinearColor(0.2f, 1.0f, 0.2f)); // 綠色
		break;
	case ETurnPhase::TurnEnd:
		PhaseName = TEXT("TURN END");
		PhaseColor = FSlateColor(FLinearColor(1.0f, 0.5f, 0.0f)); // 橙色
		break;

	default:
		PhaseName = TEXT("UNKNOWN PHASE");
		PhaseColor = FSlateColor(FLinearColor::White); // 白色
		break;
	}

	PhaseText->SetText(FText::FromString(PhaseName));
	PhaseText->SetColorAndOpacity(PhaseColor);
}

void UTurnDisplayWidget::UpdateTurnOrder(const TArray<FString>& CharacterNames, int32 CurrentIndex)
{
	if (!OrderListBox)return;

	// 清空列表
	OrderListBox->ClearChildren();

	// 為每個角色創建文字元件
	for (int32 i = 0; i < CharacterNames.Num(); i++)
	{
		UTextBlock* CharacterText = NewObject<UTextBlock>(this); 

		if (CharacterText)
		{
			//設定文字
			FString DisplayText = CharacterNames[i];

			//當前角色特別標記
			if (i == CurrentIndex)
			{
				DisplayText = FString::Printf(TEXT("-> %s <-"), *CharacterNames[i]);
				CharacterText->SetColorAndOpacity(FSlateColor(FLinearColor::Yellow)); // 當前角色用黃色
			
			    //設定字體大小
				FSlateFontInfo FontInfo = CharacterText->GetFont();
				FontInfo.Size = 16;
				CharacterText->SetFont(FontInfo);
			}
			else
			{
				//未來回合顯示順序號碼
				int32 TurnsUntil = (i - CurrentIndex + CharacterNames.Num()) % CharacterNames.Num();
				if (TurnsUntil > 0)
				{
					DisplayText = FString::Printf(TEXT("%d. %s"), TurnsUntil, *CharacterNames[i]);
				}

				//其他角色顯示

				CharacterText->SetColorAndOpacity(FSlateColor(FLinearColor::White)); // 其他角色用白色

				//設定字體大小
				FSlateFontInfo FontInfo = CharacterText->GetFont();
				FontInfo.Size = 14;
				CharacterText->SetFont(FontInfo);
			}

			CharacterText->SetText(FText::FromString(DisplayText));

			// 加入到VerticalBox

			UVerticalBoxSlot* NewSlot = OrderListBox->AddChildToVerticalBox(CharacterText);
			if (NewSlot)
			{
				NewSlot->SetPadding(FMargin(5.0f, 2.0f));
				NewSlot->SetHorizontalAlignment(HAlign_Center);
			}

		}
	}
}

