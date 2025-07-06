// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HealthPointBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTGATE_API UHealthBarWidget : public UUserWidget
{
	GENERATED_BODY()


public:
    // 更新血量顯示
    UFUNCTION(BlueprintCallable, Category = "Health")
    void UpdateHealth(int32 CurrentHealth, int32 MaxHealth);

    // 設置血條顏色
    UFUNCTION(BlueprintCallable, Category = "Health")
    void SetHealthBarColor(FLinearColor NewColor);

protected:
    UPROPERTY(meta = (BindWidget))
    class UProgressBar* HealthBar;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* HealthText;

    UPROPERTY(meta = (BindWidget))
    class UImage* HealthBarBackground;

    virtual void NativeConstruct() override;

private:
    void UpdateHealthBarColor(float HealthPercent);
	
};
