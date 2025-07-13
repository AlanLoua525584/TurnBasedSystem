// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/AttackHitNotify.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"

void UAttackHitNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
    if (MeshComp && MeshComp->GetOwner())
    {
        if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(MeshComp->GetOwner()))
        {
            UE_LOG(LogTemp, Warning, TEXT("攻擊命中通知觸發"));
            Character->HandleAnimNotify("AttackHit");
        }
    }
}
