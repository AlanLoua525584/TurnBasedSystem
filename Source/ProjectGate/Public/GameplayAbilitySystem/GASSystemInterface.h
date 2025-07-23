// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GASSystemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGASSystemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTGATE_API IGASSystemInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

    // 獲取能力系統組件
    virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const = 0;

    // 獲取屬性集
    virtual class UProjectGateAttributeSet* GetAttributeSet() const = 0;

    // 獲取等級（用於技能等級）
    virtual int32 GetCharacterLevel() const { return 1; }

};
