// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HighlightSystem/Highlightable.h"
#include "HighlightBlueprintLibrary.generated.h"

/**
 * Blueprint 友好的高亮系統函數庫
 * 提供簡單易用的高亮功能接口
 */
UCLASS()
class PROJECTGATE_API UHighlightBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

    // === 基本高亮操作 ===

        /**
         * 為 Actor 設置高亮
         * @param WorldContextObject 世界上下文
         * @param Actor 要高亮的 Actor
         * @param Type 高亮類型
         * @param Duration 持續時間（-1 為永久）
         */
    UFUNCTION(BlueprintCallable, Category = "Highlight", meta = (WorldContext = "WorldContextObject", DisplayName = "Set Highlight"))
    static void HighlightActor(UObject* WorldContextObject, AActor* Actor, EHighlightType Type, float Duration = -1.0f);

    /**
     * 移除 Actor 的特定高亮
     */
    UFUNCTION(BlueprintCallable, Category = "Highlight", meta = (WorldContext = "WorldContextObject", DisplayName = "Remove Highlight"))
    static void UnhighlightActor(UObject* WorldContextObject, AActor* Actor, EHighlightType Type);

    /**
     * 清除 Actor 的所有高亮
     */
    UFUNCTION(BlueprintCallable, Category = "Highlight", meta = (WorldContext = "WorldContextObject", DisplayName = "Clear All Highlights"))
    static void ClearActorHighlights(UObject* WorldContextObject, AActor* Actor);

    /**
     * 切換 Actor 的高亮狀態
     */
    UFUNCTION(BlueprintCallable, Category = "Highlight", meta = (WorldContext = "WorldContextObject", DisplayName = "Toggle Highlight"))
    static void ToggleHighlight(UObject* WorldContextObject, AActor* Actor, EHighlightType Type);

    // === 批量操作 ===

    /**
     * 為多個 Actor 設置相同的高亮
     */
    UFUNCTION(BlueprintCallable, Category = "Highlight|Batch", meta = (WorldContext = "WorldContextObject", DisplayName = "Highlight Multiple Actors"))
    static void HighlightActors(UObject* WorldContextObject, const TArray<AActor*>& Actors, EHighlightType Type, float Duration = -1.0f);

    /**
     * 清除特定類型的所有高亮
     */
    UFUNCTION(BlueprintCallable, Category = "Highlight|Batch", meta = (WorldContext = "WorldContextObject", DisplayName = "Clear All Highlights Of Type"))
    static void ClearAllHighlightsOfType(UObject* WorldContextObject, EHighlightType Type);

    /**
     * 清除世界中的所有高亮
     */
    UFUNCTION(BlueprintCallable, Category = "Highlight|Batch", meta = (WorldContext = "WorldContextObject", DisplayName = "Clear All Highlights In World"))
    static void ClearAllHighlightsInWorld(UObject* WorldContextObject);

    // === 查詢功能 ===

    /**
     * 檢查 Actor 是否有特定類型的高亮
     */
    UFUNCTION(BlueprintPure, Category = "Highlight|Query", meta = (WorldContext = "WorldContextObject", DisplayName = "Is Actor Highlighted"))
    static bool IsActorHighlighted(UObject* WorldContextObject, AActor* Actor, EHighlightType Type);

    /**
     * 獲取 Actor 的所有高亮類型
     */
    UFUNCTION(BlueprintPure, Category = "Highlight|Query", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Actor Highlights"))
    static TArray<EHighlightType> GetActorHighlights(UObject* WorldContextObject, AActor* Actor);

    /**
     * 獲取具有特定高亮類型的所有 Actor
     */
    UFUNCTION(BlueprintPure, Category = "Highlight|Query", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Actors With Highlight"))
    static TArray<AActor*> GetActorsWithHighlight(UObject* WorldContextObject, EHighlightType Type);

    /**
     * 檢查 Actor 是否有任何高亮
     */
    UFUNCTION(BlueprintPure, Category = "Highlight|Query", meta = (WorldContext = "WorldContextObject", DisplayName = "Has Any Highlight"))
    static bool HasAnyHighlight(UObject* WorldContextObject, AActor* Actor);

    // === 配置和設置 ===

    /**
     * 獲取高亮配置信息
     */
    UFUNCTION(BlueprintPure, Category = "Highlight|Config", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Highlight Config"))
    static FHighlightConfig GetHighlightConfig(UObject* WorldContextObject, EHighlightType Type);

    /**
     * 檢查高亮系統是否可用
     */
    UFUNCTION(BlueprintPure, Category = "Highlight|Config", meta = (WorldContext = "WorldContextObject", DisplayName = "Is Highlight System Available"))
    static bool IsHighlightSystemAvailable(UObject* WorldContextObject);

    // === 實用工具 ===

    /**
     * 創建臨時高亮效果（自動消失）
     */
    UFUNCTION(BlueprintCallable, Category = "Highlight|Utils", meta = (WorldContext = "WorldContextObject", DisplayName = "Flash Highlight"))
    static void FlashHighlight(UObject* WorldContextObject, AActor* Actor, EHighlightType Type, float FlashDuration = 0.5f);

    /**
     * 在兩種高亮類型之間切換
     */
    UFUNCTION(BlueprintCallable, Category = "Highlight|Utils", meta = (WorldContext = "WorldContextObject", DisplayName = "Switch Highlight"))
    static void SwitchHighlight(UObject* WorldContextObject, AActor* Actor, EHighlightType FromType, EHighlightType ToType);

private:
    // 輔助函數：獲取高亮管理器
    static class UHighlightManager* GetHighlightManager(UObject* WorldContextObject);

};
