// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Components/HorizontalBox.h"


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
{ // 清空當前顯示
    TurnOrderContainer->ClearChildren();
    EntryWidgets.Empty();

    // 為每個角色創建或重用 Entry
    for (int32 i = 0; i < OrderedCharacters.Num(); i++)
    {
        ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(OrderedCharacters[i]);
        if (!Character) continue;

        // 從池中取得或創建新的
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

            // 第一個角色特殊處理（當前回合）
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

}


void UTurnOrderWidget::HighlightCurrentCharacter(AActor* Character)
{
}

UTurnOrderEntryWidget* UTurnOrderWidget::CreateEntryWidget()
{
	return nullptr;
}
