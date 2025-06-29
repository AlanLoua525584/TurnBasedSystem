// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TurnBasedSystem/SimpleTurnManager.h"

#include "TurnDisplayWidget.generated.h"

//Notice GameMode
DECLARE_DELEGATE(FOnNextPhaseClicked);
DECLARE_DELEGATE(FOnEndTurnClicked);


UCLASS()

class PROJECTGATE_API UTurnDisplayWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    //委託實例
    FOnNextPhaseClicked OnNextPhaseClicked;
    FOnEndTurnClicked OnEndTurnClicked;


    // 更新顯示的函數
    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdateTurnCount(int32 NewTurnCount);

    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdateCurrentCharacter(const FString& CharacterName);

    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdatePhase(ETurnPhase NewPhase);
   
    UFUNCTION(BlueprintCallable, Category = "Turn Display")
    void UpdateTurnOrder(const TArray<FString>& CharacterNames, int32 CurrentIndex);


protected:
    // 綁定到 UI 的文字元件
    UPROPERTY(meta = (BindWidget))
	class UTextBlock* TurnCountText;

    UPROPERTY(meta = (BindWidget))
	class UTextBlock* CurrentCharacterText;

    UPROPERTY(meta = (BindWidget))
	class UTextBlock* PhaseText;

    UPROPERTY(meta = (BindWidget))
    class UButton* NextPhaseButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* EndTurnButton;

    UPROPERTY(meta = (BindWidget))
    class UVerticalBox* OrderListBox;


    // 初始化
    virtual void NativeConstruct() override;
    virtual void NativeDestruct() override;


private:
    //按鈕點擊處理
    UFUNCTION()
    void HandleNextPhaseClicked();

    UFUNCTION()
    void HandleEndTurnClicked();

};
