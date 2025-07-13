// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Animation/AnimMontage.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AnimationManagerComponent.generated.h"

// 添加前置声明
struct FGameplayTag;

// 動畫類型枚舉
UENUM(BlueprintType)
enum class EAnimationType : uint8
{
    None            UMETA(DisplayName = "None"),
    MeleeAttack     UMETA(DisplayName = "Melee Attack"),
    RangedAttack    UMETA(DisplayName = "Ranged Attack"),
    CastSpell       UMETA(DisplayName = "Cast Spell"),
    TakeDamage      UMETA(DisplayName = "Take Damage"),
    Death           UMETA(DisplayName = "Death"),
    Dodge           UMETA(DisplayName = "Dodge"),
    Block           UMETA(DisplayName = "Block"),
    SpecialAbility  UMETA(DisplayName = "Special Ability")
};

// 動畫配置結構
USTRUCT(BlueprintType)
struct FAnimationConfig : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAnimationType AnimationType = EAnimationType::None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UAnimMontage* AnimMontage = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PlayRate = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BlendInTime = 0.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BlendOutTime = 0.25f;

    // 動畫事件觸發時間（0-1之間的比例）
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float EventTriggerTime = 0.5f;

    // 是否需要面向目標
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bRequiresFacingTarget = true;

    // GAS 整合用的標籤
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag AnimationTag;
};

// 動畫播放請求
USTRUCT(BlueprintType)
struct FAnimationRequest
{
    GENERATED_BODY()

    UPROPERTY()
    EAnimationType AnimationType = EAnimationType::None;

    UPROPERTY()
    AActor* TargetActor = nullptr;

    UPROPERTY()
    FVector TargetLocation = FVector::ZeroVector;

    // 動畫完成後的回調
    TFunction<void()> OnComplete;

    // 動畫事件觸發時的回調
    TFunction<void()> OnEventTrigger;
};

// 委託
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationStarted, EAnimationType, AnimationType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationCompleted, EAnimationType, AnimationType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationInterrupted, EAnimationType, AnimationType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimationEvent, EAnimationType, AnimationType, FName, EventName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimNotifySignature, EAnimationType, AnimationType, FName, NotifyName);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UAnimationManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAnimationManagerComponent();

    // === 初始化 ===
    UFUNCTION(BlueprintCallable, Category = "Animation")
    void InitializeAnimationSystem();

    // === 主要功能 ===

     // 檢查是否有指定的動畫配置
    UFUNCTION(BlueprintPure, Category = "Animation")
    bool HasAnimation(EAnimationType AnimationType) const;


    // 播放動畫
    UFUNCTION(BlueprintCallable, Category = "Animation")
    bool PlayAnimation(EAnimationType AnimationType, AActor* Target = nullptr);

    // 播放動畫（帶完整請求）
    bool PlayAnimationWithRequest(const FAnimationRequest& Request);

    // 停止當前動畫
    UFUNCTION(BlueprintCallable, Category = "Animation")
    void StopCurrentAnimation(float BlendOutTime = 0.25f);

    // 檢查是否正在播放動畫
    UFUNCTION(BlueprintPure, Category = "Animation")
    bool IsPlayingAnimation() const { return CurrentAnimationType != EAnimationType::None; }

    // 獲取當前動畫類型
    UFUNCTION(BlueprintPure, Category = "Animation")
    EAnimationType GetCurrentAnimationType() const { return CurrentAnimationType; }

    // === GAS 整合介面 ===

    // 通過 GameplayTag 播放動畫
    UFUNCTION(BlueprintCallable, Category = "Animation|GAS", meta = (CallInEditor = "true"))
    bool PlayAnimationByTag(FGameplayTag AnimationTag, AActor* Target = nullptr);

    // 註冊 GAS 動畫映射
    UFUNCTION(BlueprintCallable, Category = "Animation|GAS")
    void RegisterGASAnimation(FGameplayTag Tag, EAnimationType AnimationType);

    // === 配置 ===

    // 動畫配置表
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation|Config")
    UDataTable* AnimationConfigTable;

    // 單獨的動畫配置（如果不使用DataTable）
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation|Config")
    TMap<EAnimationType, FAnimationConfig> AnimationConfigs;

    // === 事件 ===

    UPROPERTY(BlueprintAssignable, Category = "Animation|Events")
    FOnAnimationStarted OnAnimationStarted;

    UPROPERTY(BlueprintAssignable, Category = "Animation|Events")
    FOnAnimationCompleted OnAnimationCompleted;

    UPROPERTY(BlueprintAssignable, Category = "Animation|Events")
    FOnAnimationInterrupted OnAnimationInterrupted;

    UPROPERTY(BlueprintAssignable, Category = "Animation|Events")
    FOnAnimationEvent OnAnimationEvent;

    UPROPERTY(BlueprintAssignable)
    FOnAnimNotifySignature OnAnimNotify;


    // === Animation Notify 處理 ===

    // 由 AnimNotify 調用
    UFUNCTION(BlueprintCallable, Category = "Animation")
    void HandleAnimationNotify(FName NotifyName);

 


protected:
	// Called when the game starts
	virtual void BeginPlay() override;


private:
    // 當前播放的動畫類型
    UPROPERTY()
    EAnimationType CurrentAnimationType = EAnimationType::None;

    // 當前動畫請求
    FAnimationRequest CurrentRequest;

    // 動畫計時器
    FTimerHandle AnimationTimerHandle;
    FTimerHandle EventTimerHandle;

    // GAS 標籤映射
    TMap<FGameplayTag, EAnimationType> GASAnimationMap;

    // 內部函數
    void LoadAnimationConfigs();
    FAnimationConfig* GetAnimationConfig(EAnimationType AnimationType);
    void OnMontageCompleted(UAnimMontage* Montage, bool bInterrupted);
    void FaceTarget(AActor* Target);
    void TriggerAnimationEvent();


    // 動畫播放相關函數
    bool PlayAnimMontage(const FAnimationRequest& Request, FAnimationConfig* Config, ACharacter* Character);

    bool PlayFallbackAnimation(const FAnimationRequest& Request, FAnimationConfig* Config);

    float GetFallbackAnimationDuration(EAnimationType AnimationType) const;



    // Montage 委託
    FOnMontageEnded MontageEndedDelegate;
};
