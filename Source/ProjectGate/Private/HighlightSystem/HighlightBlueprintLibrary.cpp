// Fill out your copyright notice in the Description page of Project Settings.


#include "HighlightSystem/HighlightBlueprintLibrary.h"
#include "HighlightSystem/HighlightManager.h"
#include "Engine/World.h"
#include "Public/DebugHelper.h"

UHighlightManager* UHighlightBlueprintLibrary::GetHighlightManager(UObject* WorldContextObject)
{
    if (!WorldContextObject)
    {
        return nullptr;
    }

    UWorld* World = WorldContextObject->GetWorld();
    if (!World)
    {
        return nullptr;
    }

    return World->GetSubsystem<UHighlightManager>();
}

void UHighlightBlueprintLibrary::HighlightActor(UObject* WorldContextObject, AActor* Actor, EHighlightType Type, float Duration)
{
    if (!Actor)
    {
        Debug::Print(TEXT("HighlightActor: Actor is null"), FColor::Red);
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        Debug::Print(TEXT("HighlightActor: HighlightManager not found"), FColor::Red);
        return;
    }

    HighlightMgr->SetHighlight(Actor, Type, Duration);
}

void UHighlightBlueprintLibrary::UnhighlightActor(UObject* WorldContextObject, AActor* Actor, EHighlightType Type)
{
    if (!Actor)
    {
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return;
    }

    HighlightMgr->RemoveHighlight(Actor, Type);
}

void UHighlightBlueprintLibrary::ClearActorHighlights(UObject* WorldContextObject, AActor* Actor)
{
    if (!Actor)
    {
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return;
    }

    HighlightMgr->RemoveAllHighlights(Actor);
}

void UHighlightBlueprintLibrary::ToggleHighlight(UObject* WorldContextObject, AActor* Actor, EHighlightType Type)
{
    if (!Actor)
    {
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return;
    }

    if (HighlightMgr->HasHighlight(Actor, Type))
    {
        HighlightMgr->RemoveHighlight(Actor, Type);
    }
    else
    {
        HighlightMgr->SetHighlight(Actor, Type);
    }
}

void UHighlightBlueprintLibrary::HighlightActors(UObject* WorldContextObject, const TArray<AActor*>& Actors, EHighlightType Type, float Duration)
{
    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return;
    }

    for (AActor* Actor : Actors)
    {
        if (Actor)
        {
            HighlightMgr->SetHighlight(Actor, Type, Duration);
        }
    }
}

void UHighlightBlueprintLibrary::ClearAllHighlightsOfType(UObject* WorldContextObject, EHighlightType Type)
{
    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return;
    }

    HighlightMgr->ClearAllHighlightsOfType(Type);
}

void UHighlightBlueprintLibrary::ClearAllHighlightsInWorld(UObject* WorldContextObject)
{
    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return;
    }

    HighlightMgr->ClearAllHighlights();
}

bool UHighlightBlueprintLibrary::IsActorHighlighted(UObject* WorldContextObject, AActor* Actor, EHighlightType Type)
{
    if (!Actor)
    {
        return false;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return false;
    }

    return HighlightMgr->HasHighlight(Actor, Type);
}

TArray<EHighlightType> UHighlightBlueprintLibrary::GetActorHighlights(UObject* WorldContextObject, AActor* Actor)
{
    TArray<EHighlightType> Result;

    if (!Actor)
    {
        return Result;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return Result;
    }

    return HighlightMgr->GetActorHighlights(Actor);
}

TArray<AActor*> UHighlightBlueprintLibrary::GetActorsWithHighlight(UObject* WorldContextObject, EHighlightType Type)
{
    TArray<AActor*> Result;

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return Result;
    }

    return HighlightMgr->GetActorsWithHighlight(Type);
}

bool UHighlightBlueprintLibrary::HasAnyHighlight(UObject* WorldContextObject, AActor* Actor)
{
    if (!Actor)
    {
        return false;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return false;
    }

    TArray<EHighlightType> Highlights = HighlightMgr->GetActorHighlights(Actor);
    return Highlights.Num() > 0;
}

FHighlightConfig UHighlightBlueprintLibrary::GetHighlightConfig(UObject* WorldContextObject, EHighlightType Type)
{
    FHighlightConfig DefaultConfig;

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return DefaultConfig;
    }

    return HighlightMgr->GetHighlightConfig(Type);
}

bool UHighlightBlueprintLibrary::IsHighlightSystemAvailable(UObject* WorldContextObject)
{
    return GetHighlightManager(WorldContextObject) != nullptr;
}

void UHighlightBlueprintLibrary::FlashHighlight(UObject* WorldContextObject, AActor* Actor, EHighlightType Type, float FlashDuration)
{
    if (!Actor || FlashDuration <= 0)
    {
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return;
    }

    // 設置臨時高亮
    HighlightMgr->SetHighlight(Actor, Type, FlashDuration);
}

void UHighlightBlueprintLibrary::SwitchHighlight(UObject* WorldContextObject, AActor* Actor, EHighlightType FromType, EHighlightType ToType)
{
    if (!Actor || FromType == ToType)
    {
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager(WorldContextObject);
    if (!HighlightMgr)
    {
        return;
    }

    // 移除舊的高亮
    HighlightMgr->RemoveHighlight(Actor, FromType);

    // 添加新的高亮
    HighlightMgr->SetHighlight(Actor, ToType);

    Debug::Print(FString::Printf(TEXT("%s: Switched highlight from %d to %d"),
        *Actor->GetName(), (int32)FromType, (int32)ToType), FColor::Cyan);
}
