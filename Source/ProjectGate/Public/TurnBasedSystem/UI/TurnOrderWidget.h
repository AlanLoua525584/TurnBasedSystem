// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/CanvasPanelSlot.h"
#include "EventHandlers/EventHandlerBase.h"
#include "EventHandlers/CharacterEventHandler.h"
#include "TurnOrderWidget.generated.h"


// Forward declarations
class UTurnOrderEntryWidget;
class ATurnBasedCharacter;
/**
 * TurnOrderWidget - 回合順序顯示組件
 * 負責顯示和管理回合順序UI，採用組件化設計避免God Code
 */
UCLASS()
class PROJECTGATE_API UTurnOrderWidget : public UUserWidget
{
	GENERATED_BODY()

public:

    // 初始化
    virtual void NativeConstruct() override;
    virtual void BeginDestroy() override;

    // 更新回合順序
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void UpdateTurnOrder(const TArray<AActor*>& OrderedCharacters);

    // 高亮當前角色
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void HighlightCurrentCharacter(AActor* Character);

    // 設置為下方佈局
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void SetBottomLayout(bool bEnabled = true);

    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void SetCurrentCharacterInfo(ATurnBasedCharacter* Character);


    // === 事件回調 ===

    // 綁定角色血量變化事件
    UFUNCTION()
    void OnCharacterHealthChanged(AActor* Character, int32 CurrentHealth, int32 MaxHealth);

    // 更新所有角色的 AP 信息
    UFUNCTION()
    void OnCharacterAPChanged(AActor* Character, int32 NewAP);

 


protected:
    // 綁定的 UI 元素
    UPROPERTY(meta = (BindWidget))
    class UHorizontalBox* TurnOrderContainer;


    // 新增當前角色信息顯示區域（可選）
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* CurrentCharacterNameText;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* CurrentPhaseText;

    // === 配置參數 ===

    // Entry Widget 類別
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UUserWidget> TurnOrderEntryClass;


    // 最大顯示的角色數量
    UPROPERTY(EditDefaultsOnly, Category = "UI|Config")
    int32 MaxDisplayCharacters = 6;

    // === UI 佈局配置 ===

     // Turn order UI positioning - 新增這些變數
    UPROPERTY(EditDefaultsOnly, Category = "UI Config")
    FVector2D TurnOrderPosition = FVector2D(0, 50);

    UPROPERTY(EditDefaultsOnly, Category = "UI Config")
    FAnchors TurnOrderAnchors = FAnchors(0.5f, 0.0f);

    UPROPERTY(EditDefaultsOnly, Category = "UI Config")
    FVector2D TurnOrderAlignment = FVector2D(0.5f, 0.0f);


    // === 運行時資料 ===
    // 緩存的 Entries
    UPROPERTY()
    TArray<class UTurnOrderEntryWidget*> EntryWidgets;

    // 物件池（優化用）
    UPROPERTY()
    TArray<UTurnOrderEntryWidget*> WidgetPool;


    

private:
    // 存儲已綁定的角色引用
    UPROPERTY()
    TArray<AActor*> BoundCharacters;

    // 當前回合角色
    UPROPERTY()
    ATurnBasedCharacter* CurrentCharacter = nullptr;

    // 綁定的 AP 事件
    UPROPERTY()
    TArray<AActor*> BoundAPCharacters;
	
    // 創建新的 Entry
    UTurnOrderEntryWidget* CreateEntryWidget();

    // 綁定所有角色的血量事件
    void BindCharacterHealthEvents(const TArray<AActor*>& Characters);

    void BindAllEventsWithLambda(const TArray<AActor*>& Characters);

    // 解綁事件
    void UnbindAllHealthEvents();

    void UnbindAllEvents();

    // 使用事件處理器而不是複雜的綁定邏輯
    UPROPERTY()
    TArray<UCharacterEventHandler*> EventHandlers;
};
