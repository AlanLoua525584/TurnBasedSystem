// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Components/HorizontalBox.h"
#include "Public/DebugHelper.h"

void UTurnOrderWidget::NativeConstruct()
{
    Super::NativeConstruct();

    Debug::Print(TEXT("=== TurnOrderWidget NativeConstruct 調試 ==="), FColor::Yellow);

    // 檢查 TurnOrderContainer
    if (TurnOrderContainer)
    {
        Debug::Print(TEXT("TurnOrderContainer 已正確綁定"), FColor::Green);
    }
    else
    {
        Debug::Print(TEXT("ERROR: TurnOrderContainer is null! 檢查 Blueprint 中的變數綁定"), FColor::Red);
        return; // 如果沒有容器，就不要繼續
    }

    // 檢查 TurnOrderEntryClass
    if (TurnOrderEntryClass)
    {
        Debug::Print(FString::Printf(TEXT("TurnOrderEntryClass: %s"), *TurnOrderEntryClass->GetName()), FColor::Green);

        // 預先創建一些 Entry Widget 到對象池
        for (int32 i = 0; i < 10; i++)
        {
            UTurnOrderEntryWidget* NewEntry = CreateWidget<UTurnOrderEntryWidget>(this, TurnOrderEntryClass);
            if (NewEntry)
            {
                NewEntry->SetVisibility(ESlateVisibility::Collapsed);
                WidgetPool.Add(NewEntry);
                Debug::Print(FString::Printf(TEXT("創建 Entry Widget %d 成功"), i + 1), FColor::Green);
            }
            else
            {
                Debug::Print(FString::Printf(TEXT("創建 Entry Widget %d 失敗"), i + 1), FColor::Red);
                break;
            }
        }

        Debug::Print(FString::Printf(TEXT("對象池創建完成，共 %d 個 Entry"), WidgetPool.Num()), FColor::Green);
    }
    else
    {
        Debug::Print(TEXT("ERROR: TurnOrderEntryClass is null! 請在 Blueprint 中設置此屬性"), FColor::Red);
    }
}

void UTurnOrderWidget::UpdateTurnOrder(const TArray<AActor*>& OrderedCharacters)
{

    Debug::Print(FString::Printf(TEXT("=== UpdateTurnOrder 被調用，角色數量: %d ==="), OrderedCharacters.Num()), FColor::Cyan);
    if (!TurnOrderContainer)
    {
        Debug::Print(TEXT("ERROR: TurnOrderContainer is null in UpdateTurnOrder!"), FColor::Red);
        return;
    }

    // 清除現有顯示
    TurnOrderContainer->ClearChildren();
    EntryWidgets.Empty();

    // 為每個角色創建或重用 Entry
    for (int32 i = 0; i < OrderedCharacters.Num(); i++)
    {
        ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(OrderedCharacters[i]);
        if (!Character)
        {
            Debug::Print(FString::Printf(TEXT("WARNING: 角色 %d 轉換失敗"), i), FColor::Orange);
            continue;
        }

        Debug::Print(FString::Printf(TEXT("處理角色 %d: %s"), i, *Character->GetName()), FColor::White);

        // 從對象池獲取或創建新的 Entry
        UTurnOrderEntryWidget* Entry = nullptr;
        if (WidgetPool.Num() > 0)
        {
            Entry = WidgetPool.Pop();
            Entry->SetVisibility(ESlateVisibility::Visible);
            Debug::Print(TEXT("從對象池獲取 Entry"), FColor::Green);
        }
        else
        {
            Entry = CreateEntryWidget();
            Debug::Print(TEXT("創建新的 Entry"), FColor::Yellow);
        }

        if (Entry)
        {
            // 設置角色資料
            Entry->SetCharacterData(Character);

            // 添加到容器
            TurnOrderContainer->AddChild(Entry);
            EntryWidgets.Add(Entry);

            // 第一個角色特殊處理（當前回合）
            if (i == 0)
            {
                Entry->SetRenderScale(FVector2D(1.2f, 1.2f));
                Debug::Print(TEXT("設置當前角色縮放"), FColor::Green);
            }
            else
            {
                Entry->SetRenderScale(FVector2D(1.0f, 1.0f));
            }

            Debug::Print(FString::Printf(TEXT("Entry %d 添加成功"), i), FColor::Green);
        }
        else
        {
            Debug::Print(FString::Printf(TEXT("ERROR: Entry %d 創建失敗"), i), FColor::Red);
        }
    }

    Debug::Print(FString::Printf(TEXT("Turn Order UI 更新完成 - %d 個角色，%d 個顯示的 Entry"),
        OrderedCharacters.Num(), EntryWidgets.Num()), FColor::Green);
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
