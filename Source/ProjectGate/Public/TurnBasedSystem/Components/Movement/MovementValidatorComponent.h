// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Math/IntPoint.h"
#include "MovementValidatorComponent.generated.h"

// 移動驗證結果
USTRUCT(BlueprintType)
struct FMovementValidationResult
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    bool bIsValid = false;

    UPROPERTY(BlueprintReadOnly)
    FString Reason;

    UPROPERTY(BlueprintReadOnly)
    int32 RequiredAP = 0;

    UPROPERTY(BlueprintReadOnly)
    TArray<FIntPoint> Path;
};

// 移動驗證規則接口
UINTERFACE(MinimalAPI, Blueprintable)
class UMovementRule : public UInterface
{
    GENERATED_BODY()
};

class PROJECTGATE_API IMovementRule
{
    GENERATED_BODY()

public:
    virtual bool ValidateMovement(const FIntPoint& From, const FIntPoint& To, FString& OutReason) const = 0;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UMovementValidatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovementValidatorComponent();

    // === 核心驗證功能 ===

    // 驗證移動請求
    UFUNCTION(BlueprintCallable, Category = "Movement Validation")
    FMovementValidationResult ValidateMovement(FIntPoint FromPos, FIntPoint ToPos);

    // 驗證格子是否可用
    UFUNCTION(BlueprintCallable, Category = "Movement Validation")
    bool ValidateGridCell(FIntPoint GridPos, FString& OutReason);

    // 添加自定義驗證規則
    UFUNCTION(BlueprintCallable, Category = "Movement Validation")
    void AddValidationRule(TScriptInterface<IMovementRule> Rule);

    // === 配置 ===

    // 是否檢查AP
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Validation Config")
    bool bCheckActionPoints = true;

    // 是否檢查回合
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Validation Config")
    bool bCheckTurn = true;

    // 是否檢查路徑
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Validation Config")
    bool bCheckPath = true;

    // 是否允許對角線移動
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Validation Config")
    bool bAllowDiagonalMovement = false;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;


private:
    // 緩存的組件引用
    UPROPERTY()
    class AGridManager* GridManager;

    UPROPERTY()
    class UGridPathfindingComponent* PathfindingComponent;

    UPROPERTY()
    class UTurnSystemComponent* TurnSystemComponent;

    // 自定義驗證規則
    UPROPERTY()
    TArray<TScriptInterface<IMovementRule>> ValidationRules;

    // 內部驗證函數
    bool ValidateBasicRequirements(FIntPoint FromPos, FIntPoint ToPos, FString& OutReason);
    bool ValidateTurnAndAP(int32 RequiredAP, FString& OutReason);
    bool ValidateDestination(FIntPoint ToPos, FString& OutReason);
    bool ValidatePath(FIntPoint FromPos, FIntPoint ToPos, TArray<FIntPoint>& OutPath, FString& OutReason);
		
};
