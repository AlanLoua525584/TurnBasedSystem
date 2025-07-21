// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HighlightTypes.h"
#include "Highlightable.generated.h"

// Interface declaration (UObject wrapper)
UINTERFACE(BlueprintType)
class PROJECTGATE_API UHighlightable : public UInterface
{
    GENERATED_BODY()
};

/**
 * Interface for highlightable actors/components
 */
class PROJECTGATE_API IHighlightable
{
    GENERATED_BODY()

public:
    // 當高亮被應用時調用
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Highlight")
    void OnHighlightApplied(EHighlightType Type);

    // 當高亮被移除時調用
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Highlight")
    void OnHighlightRemoved(EHighlightType Type);

    // 獲取可以被高亮的組件
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Highlight")
    TArray<UPrimitiveComponent*> GetHighlightableComponents();

    // 是否允許高亮
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Highlight")
    bool CanBeHighlighted() const;

};