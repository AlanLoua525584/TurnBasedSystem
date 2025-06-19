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

	// ��l�����

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

	//�j�w���s�ƥ�
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
		PhaseColor = FSlateColor(FLinearColor(0.2f,0.4f,1.0f));// �Ŧ�
		break;

	case ETurnPhase::MainPhase:
		PhaseName = TEXT("MAIN PHASE");
		PhaseColor = FSlateColor(FLinearColor(0.2f, 1.0f, 0.2f)); // ���
		break;
	case ETurnPhase::TurnEnd:
		PhaseName = TEXT("TURN END");
		PhaseColor = FSlateColor(FLinearColor(1.0f, 0.5f, 0.0f)); // ���
		break;

	default:
		PhaseName = TEXT("UNKNOWN PHASE");
		PhaseColor = FSlateColor(FLinearColor::White); // �զ�
		break;
	}

	PhaseText->SetText(FText::FromString(PhaseName));
	PhaseText->SetColorAndOpacity(PhaseColor);
}

void UTurnDisplayWidget::UpdateTurnOrder(const TArray<FString>& CharacterNames, int32 CurrentIndex)
{
	if (!OrderListBox)return;

	// �M�ŦC��
	OrderListBox->ClearChildren();

	// ���C�Ө���Ыؤ�r����
	for (int32 i = 0; i < CharacterNames.Num(); i++)
	{
		UTextBlock* CharacterText = NewObject<UTextBlock>(this); 

		if (CharacterText)
		{
			//�]�w��r
			FString DisplayText = CharacterNames[i];

			//��e����S�O�аO
			if (i == CurrentIndex)
			{
				DisplayText = FString::Printf(TEXT("-> %s <-"), *CharacterNames[i]);
				CharacterText->SetColorAndOpacity(FSlateColor(FLinearColor::Yellow)); // ��e����ζ���
			
			    //�]�w�r��j�p
				FSlateFontInfo FontInfo = CharacterText->GetFont();
				FontInfo.Size = 16;
				CharacterText->SetFont(FontInfo);
			}
			else
			{
				//���Ӧ^�X��ܶ��Ǹ��X
				int32 TurnsUntil = (i - CurrentIndex + CharacterNames.Num()) % CharacterNames.Num();
				if (TurnsUntil > 0)
				{
					DisplayText = FString::Printf(TEXT("%d. %s"), TurnsUntil, *CharacterNames[i]);
				}

				//��L�������

				CharacterText->SetColorAndOpacity(FSlateColor(FLinearColor::White)); // ��L����Υզ�

				//�]�w�r��j�p
				FSlateFontInfo FontInfo = CharacterText->GetFont();
				FontInfo.Size = 14;
				CharacterText->SetFont(FontInfo);
			}

			CharacterText->SetText(FText::FromString(DisplayText));

			// �[�J��VerticalBox

			UVerticalBoxSlot* NewSlot = OrderListBox->AddChildToVerticalBox(CharacterText);
			if (NewSlot)
			{
				NewSlot->SetPadding(FMargin(5.0f, 2.0f));
				NewSlot->SetHorizontalAlignment(HAlign_Center);
			}

		}
	}
}

