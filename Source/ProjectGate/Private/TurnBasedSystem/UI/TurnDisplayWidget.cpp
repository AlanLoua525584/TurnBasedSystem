// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/ProgressBar.h"
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

void UTurnDisplayWidget::UpdateCameraMode(bool bIsFocusMode)
{
	if (CameraModeText)
	{
		FString ModeText = bIsFocusMode ? TEXT("FOCUS MODE") : TEXT("FREE CAMERA");
		FSlateColor ModeColor = bIsFocusMode ?
			FSlateColor(FLinearColor::Yellow) :
			FSlateColor(FLinearColor::Red);

		CameraModeText->SetText(FText::FromString(ModeText));
		CameraModeText->SetColorAndOpacity(ModeColor);
	}

}

void UTurnDisplayWidget::UpdateActionPoints(int32 CurrentAP, int32 MaxAP)
{
	// ��s��r���
	if (ActionPointsText)
	{
		FString APString = FString::Printf(TEXT("AP: %d / %d"), CurrentAP, MaxAP);
		ActionPointsText->SetText(FText::FromString(APString));

		// �ھڳѾlAP�����C��
		FSlateColor TextColor;
		if (CurrentAP <= 0)
		{
			TextColor = FSlateColor(FLinearColor::Red);  // �LAP - ����
		}
		else if (CurrentAP <= MaxAP * 0.3f)
		{
			TextColor = FSlateColor(FLinearColor::Yellow);  // �CAP - ����
		}
		else
		{
			TextColor = FSlateColor(FLinearColor::Green);  // �R��AP - ���
		}

		ActionPointsText->SetColorAndOpacity(TextColor);
	}

	// ��s�i�ױ�
	if (ActionPointsBar && MaxAP > 0)
	{
		float Percent = (float)CurrentAP / (float)MaxAP;
		ActionPointsBar->SetPercent(Percent);

		//�ھڦʤ�����ܶi�ױ��C��
		FLinearColor BarColor;
		if (Percent <= 0.0f)
		{
			BarColor = FLinearColor::Red;
		}
		else if (Percent <= 0.3f)
		{
			BarColor = FLinearColor::Yellow;
		}
		else
		{
			BarColor = FLinearColor::Green;
		}
		ActionPointsBar->SetFillColorAndOpacity(BarColor);
	}

}

void UTurnDisplayWidget::UpdateStamina(float CurrentStamina, float MaxStamina)
{
	if (StaminaText)
	{
		FString StaminaString = FString::Printf(TEXT("Stamina: %.0f / %.0f"), CurrentStamina, MaxStamina);
		StaminaText->SetText(FText::FromString(StaminaString));
	}

	if (StaminaBar && MaxStamina > 0)
	{
		float Percent = CurrentStamina / MaxStamina;
		StaminaBar->SetPercent(Percent);

		// �ھڦʤ�������C��
		FLinearColor BarColor = FMath::Lerp(
			FLinearColor::Red,
			FLinearColor::Green,
			Percent
		);
		StaminaBar->SetFillColorAndOpacity(BarColor);
	}


}

