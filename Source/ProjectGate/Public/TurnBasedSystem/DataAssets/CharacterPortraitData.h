// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Texture2D.h"
#include "CharacterPortraitData.generated.h"


USTRUCT(BlueprintType)
struct PROJECTGATE_API FPortraitData
{
    GENERATED_BODY()

    FPortraitData()
        : FullPortrait(nullptr)
        , UIPortrait(nullptr)
        , BattleIcon(nullptr)
        , DialoguePortrait(nullptr)
        , BorderColor(FLinearColor(0.5f, 0.5f, 0.5f, 1.0f))
        , FrameStyle(0)
    {
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portrait|Main")
    UTexture2D* FullPortrait;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portrait|UI")
    UTexture2D* UIPortrait;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portrait|Battle")
    UTexture2D* BattleIcon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portrait|Dialogue")
    UTexture2D* DialoguePortrait;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portrait|Style")
    FLinearColor BorderColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portrait|Style", meta = (ClampMin = "0", ClampMax = "2"))
    int32 FrameStyle;

    UTexture2D* GetPortraitForContext(bool bIsUI = true) const
    {
        if (bIsUI && UIPortrait)
            return UIPortrait;
        if (FullPortrait)
            return FullPortrait;
        if (BattleIcon)
            return BattleIcon;
        if (DialoguePortrait)
            return DialoguePortrait;
        return nullptr;
    }
};



UCLASS(BlueprintType)
class PROJECTGATE_API UCharacterPortraitData : public UDataAsset
{
    GENERATED_BODY()



public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portrait")
    UTexture2D* PortraitTexture;
};
