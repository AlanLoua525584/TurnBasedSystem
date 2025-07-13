// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimationComponents/AnimationManagerComponent.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UAnimationManagerComponent::UAnimationManagerComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void UAnimationManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	InitializeAnimationSystem();
}

void UAnimationManagerComponent::InitializeAnimationSystem()
{
    // 從 DataTable 載入配置
    if (AnimationConfigTable)
    {
        const FString ContextString(TEXT("Animation Config Loading"));
        TArray<FAnimationConfig*> AllRows;
        AnimationConfigTable->GetAllRows<FAnimationConfig>(ContextString, AllRows);

        for (FAnimationConfig* Row : AllRows)
        {
            if (Row && Row->AnimationType != EAnimationType::None)
            {
                AnimationConfigs.Add(Row->AnimationType, *Row);

                // 詳細載入日誌
                FString MontageInfo = Row->AnimMontage ?
                    FString::Printf(TEXT("Has Montage: %s"), *Row->AnimMontage->GetName()) :
                    TEXT("No Montage");

                Debug::Print(FString::Printf(TEXT("Loaded animation config: %s - %s"),
                    *UEnum::GetValueAsString(Row->AnimationType), *MontageInfo), FColor::Green);
            }
        }

        Debug::Print(FString::Printf(TEXT("Successfully loaded %d animation configs from DataTable"),
            AnimationConfigs.Num()), FColor::Green);
    }
    else
    {
        Debug::Print(TEXT("ERROR: AnimationConfigTable is null!"), FColor::Red);
    }
}



void UAnimationManagerComponent::LoadAnimationConfigs()
{
    // 從 DataTable 載入配置
    if (AnimationConfigTable)
    {
        const FString ContextString(TEXT("Animation Config Loading"));
        TArray<FAnimationConfig*> AllRows;
        AnimationConfigTable->GetAllRows<FAnimationConfig>(ContextString, AllRows);

        for (FAnimationConfig* Row : AllRows)
        {
            if (Row && Row->AnimationType != EAnimationType::None)
            {
                AnimationConfigs.Add(Row->AnimationType, *Row);
            }
        }

        Debug::Print(FString::Printf(TEXT("Loaded %d animation configs from DataTable"),
            AnimationConfigs.Num()), FColor::Green);
    }
}

bool UAnimationManagerComponent::HasAnimation(EAnimationType AnimationType) const
{
    // 檢查配置表中是否有這個動畫
    const FAnimationConfig* Config = AnimationConfigs.Find(AnimationType);
    return Config && Config->AnimMontage != nullptr;
}

bool UAnimationManagerComponent::PlayAnimation(EAnimationType AnimationType, AActor* Target)
{
    FAnimationRequest Request;
    Request.AnimationType = AnimationType;
    Request.TargetActor = Target;

    // 添加調試信息
    Debug::Print(FString::Printf(TEXT("Attempting to play animation: %s"),
        *UEnum::GetValueAsString(AnimationType)), FColor::Cyan);


    return PlayAnimationWithRequest(Request);
}

bool UAnimationManagerComponent::PlayAnimationWithRequest(const FAnimationRequest& Request)
{
    // 檢查是否正在播放動畫
    if (IsPlayingAnimation())
    {
        Debug::Print(TEXT("Animation already playing, interrupting..."), FColor::Yellow);
        StopCurrentAnimation(0.1f);
    }

    // 獲取動畫配置
    FAnimationConfig* Config = GetAnimationConfig(Request.AnimationType);
    if (!Config)
    {
        Debug::Print(FString::Printf(TEXT("No animation config found for type: %s"),
            *UEnum::GetValueAsString(Request.AnimationType)), FColor::Red);
        return false;
    }

    Debug::Print(FString::Printf(TEXT("Found config for %s"),
        *UEnum::GetValueAsString(Request.AnimationType)), FColor::Cyan);

    // 獲取角色和動畫實例
    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character)
    {
        Debug::Print(TEXT("Owner is not a Character"), FColor::Red);
        return false;
    }

    if (!Character->GetMesh())
    {
        Debug::Print(TEXT("Character has no SkeletalMeshComponent"), FColor::Red);
        return false;
    }

    UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance();
    if (!AnimInstance)
    {
        Debug::Print(TEXT("Character has no AnimInstance"), FColor::Red);
        return false;
    }

    // 面向目標
    if (Config->bRequiresFacingTarget && Request.TargetActor)
    {
        FaceTarget(Request.TargetActor);
    }

    // 如果有 AnimMontage，正常播放
    if (Config->AnimMontage)
    {
        Debug::Print(FString::Printf(TEXT("Playing AnimMontage: %s"),
            *Config->AnimMontage->GetName()), FColor::Green);
        return PlayAnimMontage(Request, Config, Character);
    }
    else
    {
        Debug::Print(FString::Printf(TEXT("No AnimMontage for %s - using fallback"),
            *UEnum::GetValueAsString(Request.AnimationType)), FColor::Yellow);
        // 沒有 AnimMontage 時的回退方案
        return PlayFallbackAnimation(Request, Config);
    }
}

void UAnimationManagerComponent::StopCurrentAnimation(float BlendOutTime)
{
    if (!IsPlayingAnimation())
        return;

    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (Character && Character->GetMesh() && Character->GetMesh()->GetAnimInstance())
    {
        UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance();

        // 停止所有 Montage
        AnimInstance->Montage_Stop(BlendOutTime);

        // 清除計時器
        GetWorld()->GetTimerManager().ClearTimer(AnimationTimerHandle);
        GetWorld()->GetTimerManager().ClearTimer(EventTimerHandle);

        // 廣播中斷事件
        OnAnimationInterrupted.Broadcast(CurrentAnimationType);

        // 重置狀態
        CurrentAnimationType = EAnimationType::None;
        CurrentRequest = FAnimationRequest();
    }
}

bool UAnimationManagerComponent::PlayAnimationByTag(FGameplayTag AnimationTag, AActor* Target)
{
    if (!AnimationTag.IsValid())
        return false;

    // 查找對應的動畫類型
    EAnimationType* AnimType = GASAnimationMap.Find(AnimationTag);
    if (!AnimType)
    {
        Debug::Print(FString::Printf(TEXT("No animation mapped for tag: %s"),
            *AnimationTag.ToString()), FColor::Red);
        return false;
    }

    return PlayAnimation(*AnimType, Target);
}

void UAnimationManagerComponent::RegisterGASAnimation(FGameplayTag Tag, EAnimationType AnimationType)
{
    if (Tag.IsValid())
    {
        GASAnimationMap.Add(Tag, AnimationType);
        Debug::Print(FString::Printf(TEXT("Registered GAS animation: %s -> %s"),
            *Tag.ToString(), *UEnum::GetValueAsString(AnimationType)), FColor::Cyan);
    }
}


void UAnimationManagerComponent::HandleAnimationNotify(FName NotifyName)
{
    // 廣播動畫事件
    OnAnimationEvent.Broadcast(CurrentAnimationType, NotifyName);

    // 特定通知處理
    if (NotifyName == "Hit" || NotifyName == "AttackHit")
    {
        TriggerAnimationEvent();
    }
}


FAnimationConfig* UAnimationManagerComponent::GetAnimationConfig(EAnimationType AnimationType)
{
    return AnimationConfigs.Find(AnimationType);
}

void UAnimationManagerComponent::OnMontageCompleted(UAnimMontage* Montage, bool bInterrupted)
{
    if (!bInterrupted)
    {
        // 執行完成回調
        if (CurrentRequest.OnComplete)
        {
            CurrentRequest.OnComplete();
        }

        // 廣播完成事件
        OnAnimationCompleted.Broadcast(CurrentAnimationType);
    }

    // 重置狀態
    CurrentAnimationType = EAnimationType::None;
    CurrentRequest = FAnimationRequest();

    // 清除計時器
    GetWorld()->GetTimerManager().ClearTimer(EventTimerHandle);
}

void UAnimationManagerComponent::FaceTarget(AActor* Target)
{
    if (!Target)
        return;

    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character)
        return;

    // 計算面向目標的旋轉
    FVector Direction = Target->GetActorLocation() - Character->GetActorLocation();
    Direction.Z = 0;
    Direction.Normalize();

    FRotator NewRotation = Direction.Rotation();
    Character->SetActorRotation(NewRotation);
}

void UAnimationManagerComponent::TriggerAnimationEvent()
{
    Debug::Print(TEXT("=== TriggerAnimationEvent Called ==="), FColor::Magenta);

    // 執行事件回調
    if (CurrentRequest.OnEventTrigger)
    {
        Debug::Print(TEXT("Executing OnEventTrigger callback"), FColor::Green);
        CurrentRequest.OnEventTrigger();
    }
    else
    {
        Debug::Print(TEXT("WARNING: No OnEventTrigger callback set"), FColor::Red);
    }

    // 廣播事件
    Debug::Print(FString::Printf(TEXT("Broadcasting AnimationEvent: %s, EventName: EventTrigger"),
        *UEnum::GetValueAsString(CurrentAnimationType)), FColor::Cyan);

    OnAnimationEvent.Broadcast(CurrentAnimationType, "EventTrigger");
}

bool UAnimationManagerComponent::PlayAnimMontage(const FAnimationRequest& Request, FAnimationConfig* Config, ACharacter* Character)
{
    UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance();

    if (!Config->AnimMontage)
    {
        Debug::Print(TEXT("Config->AnimMontage is null in PlayAnimMontage"), FColor::Red);
        return false;
    }

    // 檢查 AnimMontage 是否有效
    if (!IsValid(Config->AnimMontage))
    {
        Debug::Print(FString::Printf(TEXT("AnimMontage is not valid: %s"),
            *Config->AnimMontage->GetName()), FColor::Red);
        return false;
    }

    Debug::Print(FString::Printf(TEXT("Attempting to play montage: %s on character: %s"),
        *Config->AnimMontage->GetName(), *Character->GetName()), FColor::Cyan);

    // 播放動畫
    float MontageLength = AnimInstance->Montage_Play(
        Config->AnimMontage,
        Config->PlayRate,
        EMontagePlayReturnType::MontageLength,
        0.0f,
        true
    );

    Debug::Print(FString::Printf(TEXT("Montage_Play returned length: %.2f"), MontageLength), FColor::White);

    if (MontageLength > 0)
    {
        // 保存當前請求
        CurrentRequest = Request;
        CurrentAnimationType = Request.AnimationType;

        // 設置結束回調
        AnimInstance->Montage_SetEndDelegate(MontageEndedDelegate, Config->AnimMontage);

        // 設置事件觸發計時器
        if (Config->EventTriggerTime > 0)
        {
            float EventTime = MontageLength * Config->EventTriggerTime;
            GetWorld()->GetTimerManager().SetTimer(
                EventTimerHandle,
                this,
                &UAnimationManagerComponent::TriggerAnimationEvent,
                EventTime,
                false
            );

            Debug::Print(FString::Printf(TEXT("Set event trigger timer for %.2f seconds"), EventTime), FColor::Cyan);
        }

        // 廣播開始事件
        OnAnimationStarted.Broadcast(CurrentAnimationType);

        Debug::Print(FString::Printf(TEXT("Successfully started animation: %s (%.2f seconds)"),
            *UEnum::GetValueAsString(CurrentAnimationType), MontageLength), FColor::Green);

        return true;
    }
    else
    {
        Debug::Print(TEXT("Montage_Play failed - returned 0 length"), FColor::Red);
        return false;
    }
}

bool UAnimationManagerComponent::PlayFallbackAnimation(const FAnimationRequest& Request, FAnimationConfig* Config)
{
    Debug::Print(FString::Printf(TEXT("No AnimMontage for %s - using fallback animation"),
        *UEnum::GetValueAsString(Request.AnimationType)), FColor::Yellow);

    // 保存當前請求
    CurrentRequest = Request;
    CurrentAnimationType = Request.AnimationType;

    // 廣播開始事件
    OnAnimationStarted.Broadcast(CurrentAnimationType);

    // 模擬動畫時長（根據動畫類型決定）
    float FallbackDuration = GetFallbackAnimationDuration(Request.AnimationType);

    // 設置事件觸發計時器
    if (Config->EventTriggerTime > 0)
    {
        float EventTime = FallbackDuration * Config->EventTriggerTime;
        GetWorld()->GetTimerManager().SetTimer(
            EventTimerHandle,
            this,
            &UAnimationManagerComponent::TriggerAnimationEvent,
            EventTime,
            false
        );
    }

    // 設置動畫完成計時器
    GetWorld()->GetTimerManager().SetTimer(
        AnimationTimerHandle,
        [this]()
        {
            OnAnimationCompleted.Broadcast(CurrentAnimationType);
            // 重置狀態
            CurrentAnimationType = EAnimationType::None;
            CurrentRequest = FAnimationRequest();
        },
        FallbackDuration,
        false
    );

    Debug::Print(FString::Printf(TEXT("Fallback animation started: %s (%.2f seconds)"),
        *UEnum::GetValueAsString(CurrentAnimationType), FallbackDuration), FColor::Green);

    return true;
}

float UAnimationManagerComponent::GetFallbackAnimationDuration(EAnimationType AnimationType) const
{
    // 根據動畫類型返回合適的持續時間
    switch (AnimationType)
    {
    case EAnimationType::MeleeAttack:
        return 1.0f;
    case EAnimationType::RangedAttack:
        return 0.8f;
    case EAnimationType::TakeDamage:
        return 0.5f;
    case EAnimationType::Death:
        return 2.0f;
    case EAnimationType::Block:
        return 0.6f;
    case EAnimationType::Dodge:
        return 0.7f;
    default:
        return 1.0f;
    }
}

