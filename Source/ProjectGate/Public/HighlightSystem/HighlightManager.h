// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "HighlightSystem/HighlightTypes.h"
#include "HighlightManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHighlightChanged, AActor*, Actor, EHighlightType, Type);


UCLASS()
class PROJECTGATE_API UHighlightManager : public UWorldSubsystem
{
	GENERATED_BODY()

public:
    // === Subsystem Overrides ===
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // === 核心功能 ===
    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void SetHighlight(AActor* Actor, EHighlightType Type, float Duration = -1.0f);

    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void RemoveHighlight(AActor* Actor, EHighlightType Type);

    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void RemoveAllHighlights(AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void ClearAllHighlightsOfType(EHighlightType Type);

    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void ClearAllHighlights();

    // === 查詢功能 ===
    UFUNCTION(BlueprintPure, Category = "Highlight")
    bool HasHighlight(AActor* Actor, EHighlightType Type) const;

    UFUNCTION(BlueprintPure, Category = "Highlight")
    TArray<EHighlightType> GetActorHighlights(AActor* Actor) const;

    UFUNCTION(BlueprintPure, Category = "Highlight")
    TArray<AActor*> GetActorsWithHighlight(EHighlightType Type) const;

    // === 配置 ===
    UFUNCTION(BlueprintCallable, Category = "Highlight")
    void LoadHighlightConfigs(UDataTable* ConfigTable);

    UFUNCTION(BlueprintPure, Category = "Highlight")
    FHighlightConfig GetHighlightConfig(EHighlightType Type) const;

    // === 事件 ===
    UPROPERTY(BlueprintAssignable, Category = "Highlight")
    FOnHighlightChanged OnHighlightApplied;

    UPROPERTY(BlueprintAssignable, Category = "Highlight")
    FOnHighlightChanged OnHighlightRemoved;

protected:
    // 內部數據結構

    TMap<AActor*, TArray<FHighlightState>> ActiveHighlights;
    TMap<EHighlightType, FHighlightConfig> HighlightConfigs;

    // 內部方法
    void ApplyHighlightInternal(AActor* Actor, const FHighlightConfig& Config);
    void RemoveHighlightInternal(AActor* Actor);
    void UpdateHighlightVisuals(AActor* Actor);
    FHighlightConfig* GetActiveHighlightConfig(AActor* Actor);
    void TickHighlights();

    // 定時器
    FTimerHandle HighlightTickTimer;

    // 默認配置
    void InitializeDefaultConfigs();
	
};
