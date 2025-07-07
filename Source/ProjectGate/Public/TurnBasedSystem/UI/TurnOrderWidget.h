// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TurnOrderWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTGATE_API UTurnOrderWidget : public UUserWidget
{
	GENERATED_BODY()

public:

    // 初始化
    virtual void NativeConstruct() override;

    // 更新回合順序
    UFUNCTION(BlueprintCallable)
    void UpdateTurnOrder(const TArray<AActor*>& OrderedCharacters);

    // 高亮當前角色
    UFUNCTION(BlueprintCallable)
    void HighlightCurrentCharacter(AActor* Character);

protected:
    // 綁定的 UI 元素
    UPROPERTY(meta = (BindWidget))
    class UHorizontalBox* TurnOrderContainer;

    // Entry Widget 類別
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UUserWidget> TurnOrderEntryClass;

    // 緩存的 Entries
    UPROPERTY()
    TArray<class UTurnOrderEntryWidget*> EntryWidgets;

    // 創建新的 Entry
    UTurnOrderEntryWidget* CreateEntryWidget();

    // 物件池（優化用）
    UPROPERTY()
    TArray<UTurnOrderEntryWidget*> WidgetPool;
	
};
