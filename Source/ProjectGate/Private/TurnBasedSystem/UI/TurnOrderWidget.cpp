// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "EventHandlers/CharacterEventHandler.h"
#include "EventHandlers/EventHandlerBase.h"
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


void UTurnOrderWidget::BeginDestroy()
{
    UnbindAllEvents();
    Super::BeginDestroy();
}

void UTurnOrderWidget::UpdateTurnOrder(const TArray<AActor*>& OrderedCharacters)
{

    Debug::Print(FString::Printf(TEXT("=== UpdateTurnOrder 被調用，角色數量: %d ==="), OrderedCharacters.Num()), FColor::Cyan);
    if (!TurnOrderContainer)
    {
        Debug::Print(TEXT("ERROR: TurnOrderContainer is null in UpdateTurnOrder!"), FColor::Red);
        return;
    }

    // 解綁舊的事件
    UnbindAllEvents();

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
            // === 修復：完整設置角色資料 ===

            // 1. 設置基本角色資料
            Entry->SetCharacterData(Character);

            // 2. 設置回合順序號碼 - 這是缺失的關鍵調用！
            Entry->SetTurnOrderNumber(i == 0 ? 0 : i); // 當前角色顯示0，其他顯示順序

            // 3. 設置是否為當前角色 - 這也是缺失的！
            Entry->SetAsCurrentCharacter(i == 0);

            // 4. 更新 Action Points 顯示
            Entry->UpdateActionPoints(Character);

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

            Debug::Print(FString::Printf(TEXT("Entry %d 添加成功 - 順序號: %d"), i, i == 0 ? 0 : i), FColor::Green);
        }
        else
        {
            Debug::Print(FString::Printf(TEXT("ERROR: Entry %d 創建失敗"), i), FColor::Red);
        }
    }

    // 綁定所有角色的事件
    BindAllEventsWithLambda(OrderedCharacters);

    Debug::Print(FString::Printf(TEXT("Turn Order UI 更新完成 - %d 個角色，%d 個顯示的 Entry"),
        OrderedCharacters.Num(), EntryWidgets.Num()), FColor::Green);
}

void UTurnOrderWidget::HighlightCurrentCharacter(AActor* Character)
{
    // 實現高亮邏輯
    for (UTurnOrderEntryWidget* Entry : EntryWidgets)
    {
        if (Entry && Entry->GetAssociatedCharacter() == Character)
        {
            Entry->SetHighlighted(true);
        }
        else if (Entry)
        {
            Entry->SetHighlighted(false);
        }
    }
}

void UTurnOrderWidget::OnCharacterHealthChanged(AActor* Character, int32 CurrentHealth, int32 MaxHealth)
{
    Debug::Print(FString::Printf(TEXT("=== 角色血量變化: %s (%d/%d) ==="),
        Character ? *Character->GetName() : TEXT("Unknown"), CurrentHealth, MaxHealth), FColor::Orange);

    // 找到對應的 Entry Widget 並更新血量顯示
    for (UTurnOrderEntryWidget* Entry : EntryWidgets)
    {
        if (Entry && Entry->GetAssociatedCharacter() == Character)
        {
            // 立即更新該 Entry 的血量顯示
            Entry->UpdateHealthDisplay();

            Debug::Print(FString::Printf(TEXT(" 更新 %s 的血條顯示"), *Character->GetName()), FColor::Green);
            break;
        }
    }
}


void UTurnOrderWidget::OnCharacterAPChanged(AActor* Character, int32 NewAP)
{
    Debug::Print(FString::Printf(TEXT("=== 角色AP變化: %s (AP: %d) ==="),
        Character ? *Character->GetName() : TEXT("Unknown"), NewAP), FColor::Orange);

    // 找到對應的 Entry Widget 並更新 AP 顯示
    for (UTurnOrderEntryWidget* Entry : EntryWidgets)
    {
        if (Entry && Entry->GetAssociatedCharacter() == Character)
        {
            if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(Character))
            {
                Entry->UpdateActionPoints(TurnChar);
                Debug::Print(FString::Printf(TEXT(" 更新 %s 的AP顯示"), *Character->GetName()), FColor::Green);
            }
            break;
        }
    }
}

void UTurnOrderWidget::BindCharacterHealthEvents(const TArray<AActor*>& Characters)
{
    for (AActor* Actor : Characters)
    {
        if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(Actor))
        {
            if (UCombatComponent* CombatComp = Character->AccessCombatComponent())
            {
                // 檢查是否已經綁定，避免重複綁定
                if (!CombatComp->OnHealthChanged.IsAlreadyBound(this, &UTurnOrderWidget::OnCharacterHealthChanged))
                {
                    CombatComp->OnHealthChanged.AddDynamic(this, &UTurnOrderWidget::OnCharacterHealthChanged);
                    BoundCharacters.Add(Character);

                    Debug::Print(FString::Printf(TEXT(" 綁定血量事件: %s"), *Character->GetName()), FColor::Green);
                }
            }
        }
    }

    Debug::Print(FString::Printf(TEXT("血量事件綁定完成 - %d 個角色"), BoundCharacters.Num()), FColor::Cyan);
}


void UTurnOrderWidget::SetCurrentCharacterInfo(ATurnBasedCharacter* Character)
{
    if (!Character) return;

    CurrentCharacter = Character;

    // 更新當前角色名稱顯示（如果有的話）
    if (CurrentCharacterNameText)
    {
        FString CharacterName = Character->GetActorLabel();
        CurrentCharacterNameText->SetText(FText::FromString(FString::Printf(TEXT("當前: %s"), *CharacterName)));
        CurrentCharacterNameText->SetColorAndOpacity(FLinearColor::Yellow);
    }
}


void UTurnOrderWidget::SetBottomLayout(bool bEnabled)
{
    if (!TurnOrderContainer) return;

    // 調整容器樣式以適應下方佈局
    if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(TurnOrderContainer->Slot))
    {
        if (bEnabled)
        {
            // 下方中央佈局
            CanvasSlot->SetAnchors(FAnchors(0.5f, 1.0f, 0.5f, 1.0f)); // 底部中央錨點
            CanvasSlot->SetAlignment(FVector2D(0.5f, 1.0f)); // 底部對齊
            CanvasSlot->SetPosition(FVector2D(0.0f, -20.0f)); // 距離底部20像素
            CanvasSlot->SetSize(FVector2D(0.0f, 140.0f)); // 自動寬度，固定高度
        }
        else
        {
            // 原有的頂部佈局
            CanvasSlot->SetAnchors(TurnOrderAnchors);
            CanvasSlot->SetAlignment(TurnOrderAlignment);
            CanvasSlot->SetPosition(TurnOrderPosition);
        }
    }
}

void UTurnOrderWidget::BindAllEventsWithLambda(const TArray<AActor*>& Characters)
{
    Debug::Print(TEXT("=== 使用事件處理器綁定角色事件 ==="), FColor::Cyan);

    // 清理舊的處理器
    for (UCharacterEventHandler* Handler : EventHandlers)
    {
        if (Handler)
        {
            Handler->ConditionalBeginDestroy();
        }
    }
    EventHandlers.Empty();

    // 為每個角色創建處理器
    for (AActor* Actor : Characters)
    {
        if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(Actor))
        {
            // 創建處理器
            UCharacterEventHandler* Handler = NewObject<UCharacterEventHandler>(this);
            Handler->Initialize(this, Character);
            Handler->BindEvents();

            EventHandlers.Add(Handler);

            Debug::Print(FString::Printf(TEXT(" 創建事件處理器: %s"), *Character->GetName()), FColor::Green);
        }
    }

    Debug::Print(FString::Printf(TEXT("=== 事件綁定完成 - %d 個處理器 ==="), EventHandlers.Num()), FColor::Green);
}

void UTurnOrderWidget::UnbindAllEvents()
{
    Debug::Print(TEXT("=== 清理所有事件處理器 ==="), FColor::Yellow);

    // 處理器會在銷毀時自動解綁
    for (UCharacterEventHandler* Handler : EventHandlers)
    {
        if (Handler)
        {
            Handler->ConditionalBeginDestroy();
        }
    }
    EventHandlers.Empty();

    Debug::Print(TEXT("=== 所有事件已清理 ==="), FColor::Green);
}


void UTurnOrderWidget::UnbindAllHealthEvents()
{
    for (AActor* Actor : BoundCharacters)
    {
        if (IsValid(Actor))
        {
            if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(Actor))
            {
                if (UCombatComponent* CombatComp = Character->AccessCombatComponent())
                {
                    CombatComp->OnHealthChanged.RemoveDynamic(this, &UTurnOrderWidget::OnCharacterHealthChanged);
                }
            }
        }
    }

    BoundCharacters.Empty();
    Debug::Print(TEXT("所有血量事件已解綁"), FColor::Yellow);
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
