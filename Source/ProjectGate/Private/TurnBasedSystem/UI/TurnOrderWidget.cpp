// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Components/HorizontalBox.h"
#include "Public/DebugHelper.h"

void UTurnOrderWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // 預先創建一些 Entry Widget 到池中
    for (int32 i = 0; i < 10; i++)
    {
        if (TurnOrderEntryClass)
        {
            UTurnOrderEntryWidget* NewEntry = CreateWidget<UTurnOrderEntryWidget>(
                this, TurnOrderEntryClass);
            if (NewEntry)
            {
                NewEntry->SetVisibility(ESlateVisibility::Collapsed);
                WidgetPool.Add(NewEntry);
            }
        }
    }
}

void UTurnOrderWidget::UpdateTurnOrder(const TArray<AActor*>& OrderedCharacters)
{ 
    TurnOrderContainer->ClearChildren();
    EntryWidgets.Empty();

   
    for (int32 i = 0; i < OrderedCharacters.Num(); i++)
    {
        ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(OrderedCharacters[i]);
        if (!Character) continue;

        UTurnOrderEntryWidget* Entry = nullptr;
        if (WidgetPool.Num() > 0)
        {
            Entry = WidgetPool.Pop();
            Entry->SetVisibility(ESlateVisibility::Visible);
        }
        else
        {
            Entry = CreateEntryWidget();
        }

        if (Entry)
        {
            // 設置數據
            Entry->SetCharacterData(Character);

            // 添加到容器
            TurnOrderContainer->AddChild(Entry);
            EntryWidgets.Add(Entry);

        
            if (i == 0)
            {
                Entry->SetRenderScale(FVector2D(1.2f, 1.2f));
                
            }
            else
            {
                Entry->SetRenderScale(FVector2D(1.0f, 1.0f));
            }
        }

    }
    Debug::Print(FString::Printf(TEXT("Turn Order UI Updated - %d characters"), OrderedCharacters.Num()), FColor::Green);
}


void UTurnOrderWidget::HighlightCurrentCharacter(AActor* Character)
{

}

UTurnOrderEntryWidget* UTurnOrderWidget::CreateEntryWidget()
{
    if (!TurnOrderEntryClass)
    {
        Debug::Print(TEXT("TurnOrderEntryClass is null!"), FColor::Red);
        return nullptr;
    }

    UTurnOrderEntryWidget* NewEntry = CreateWidget<UTurnOrderEntryWidget>(this, TurnOrderEntryClass);
    if (NewEntry)
    {
        NewEntry->SetVisibility(ESlateVisibility::Visible);
    }

    return NewEntry;
}
