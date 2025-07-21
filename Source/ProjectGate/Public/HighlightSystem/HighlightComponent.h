// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HighlightSystem/HighlightTypes.h"
#include "HighlightComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHighlightStateChanged, EHighlightType, Type, bool, bIsHighlighted);

/**
 * 組件化的高亮管理器
 * 可以附加到任何 Actor 上，提供便捷的高亮功能
 */


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UHighlightComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHighlightComponent();


    // === 基本高亮功能 ===
    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void HighlightActor(EHighlightType Type, float Duration = -1.0f);

    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void UnhighlightActor(EHighlightType Type);

    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void ClearAllHighlights();

    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void ToggleHighlight(EHighlightType Type);

    // === 查詢功能 ===
    UFUNCTION(BlueprintPure, Category = "Highlight")
    bool IsHighlighted(EHighlightType Type) const;

    UFUNCTION(BlueprintPure, Category = "Highlight")
    TArray<EHighlightType> GetActiveHighlights() const;

    UFUNCTION(BlueprintPure, Category = "Highlight")
    bool HasAnyHighlight() const;

    // === 自動高亮設置 ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Highlight")
    bool bAutoHighlightOnHover = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Highlight")
    bool bAutoHighlightWhenSelected = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Highlight")
    bool bAutoRemoveHoverOnMouseLeave = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Highlight", meta = (EditCondition = "bAutoHighlightOnHover"))
    EHighlightType HoverHighlightType = EHighlightType::Hover;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Highlight", meta = (EditCondition = "bAutoHighlightWhenSelected"))
    EHighlightType SelectionHighlightType = EHighlightType::Selected;

    // === 高亮覆蓋設置 ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Highlight Settings")
    bool bCanBeHighlighted = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Highlight Settings")
    TArray<UPrimitiveComponent*> CustomHighlightComponents;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Highlight Settings")
    bool bIncludeChildComponents = true;

    // === 事件 ===
    UPROPERTY(BlueprintAssignable, Category = "Highlight Events")
    FOnHighlightStateChanged OnHighlightChanged;

    // === 批量操作支持 ===
    UFUNCTION(BlueprintCallable, Category = "Highlight", meta = (CallInEditor = "true"))
    void RefreshHighlightComponents();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

    // 內部方法
    void SetupAutoHighlight();
    void CleanupAutoHighlight();
    TArray<UPrimitiveComponent*> GetHighlightableComponents() const;

    // 鼠標事件處理
    UFUNCTION()
    void OnMouseBegin(UPrimitiveComponent* TouchedComponent);

    UFUNCTION()
    void OnMouseEnd(UPrimitiveComponent* TouchedComponent);

    UFUNCTION()
    void OnActorClicked(AActor* TouchedActor, FKey ButtonPressed);

    UFUNCTION()
    void OnActorSelected();

    UFUNCTION()
    void OnActorDeselected();

private:


    // 緩存的高亮管理器引用
    UPROPERTY()
    class UHighlightManager* CachedHighlightManager;

    // 當前活躍的高亮
    TSet<EHighlightType> ActiveHighlights;

    // 組件綁定狀態
    bool bEventsBound = false;

    // 獲取高亮管理器
    UHighlightManager* GetHighlightManager() const;
	
};
