// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnbasedSystem/Components/Camera/CameraControlComponent.h"
#include "FreeCameraPawn.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Public/DebugHelper.h"

UCameraControlComponent::UCameraControlComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UCameraControlComponent::BeginPlay()
{
    Super::BeginPlay();

    // 獲取Owner Controller
    OwnerController = Cast<APlayerController>(GetOwner());
    if (!OwnerController)
    {
        Debug::Print(TEXT("ERROR: CameraControlComponent owner is not a PlayerController!"), FColor::Red);
        return;
    }

    // 延遲初始化，確保所有系統都已準備好
    GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
        {
            InitializeCameraSystem(OwnerController);
        });
}

void UCameraControlComponent::InitializeCameraSystem(APlayerController* InOwnerController)
{
    OwnerController = InOwnerController;
    SetupCamera();

    Debug::Print(TEXT("CameraControlComponent initialized"), FColor::Green);
}

void UCameraControlComponent::SetupCamera()
{
    // 查找或創建 FreeCameraPawn
    TArray<AActor*> FoundPawns;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFreeCameraPawn::StaticClass(), FoundPawns);

    if (FoundPawns.Num() > 0)
    {
        FreeCameraPawn = Cast<AFreeCameraPawn>(FoundPawns[0]);
        Debug::Print(TEXT("Found existing FreeCameraPawn"), FColor::Green);
    }
    else
    {
        // 創建新的 FreeCameraPawn
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = OwnerController;

        FreeCameraPawn = GetWorld()->SpawnActor<AFreeCameraPawn>(
            AFreeCameraPawn::StaticClass(),
            FVector(0, 0, 1000),
            FRotator(-45, 0, 0),
            SpawnParams
        );

        Debug::Print(TEXT("Created new FreeCameraPawn"), FColor::Green);
    }

    if (FreeCameraPawn)
    {
        // 保存初始相機狀態
        SavedCameraRotation = OwnerController->GetControlRotation();
        SavedCameraLocation = FreeCameraPawn->GetActorLocation();

        SafeSetViewTarget(FreeCameraPawn);
        Debug::Print(TEXT("Camera system initialized"), FColor::Green);
    }
    else
    {
        Debug::Print(TEXT("Failed to create camera pawn!"), FColor::Red);
    }
}

void UCameraControlComponent::SwitchToFreeCamera()
{
    if (!bIsInDynamicMode) return; // 已經在網格模式

    bIsInDynamicMode = false;

    // 保存當前角色相機狀態
    if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(OwnerController->GetPawn()))
    {
        if (TurnChar->CameraBoom)
        {
            SavedCameraRotation = TurnChar->CameraBoom->GetComponentRotation();
            SavedArmLength = TurnChar->CameraBoom->TargetArmLength;
        }
    }

    // 切換到自由相機
    if (FreeCameraPawn && OwnerController)
    {
        // 計算自由相機位置
        if (ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(OwnerController->GetPawn()))
        {
            FVector CharLocation = CurrentCharacter->GetActorLocation();
            FVector CameraOffset = SavedCameraRotation.Vector() * -SavedArmLength;
            CameraOffset.Z = FMath::Max(CameraOffset.Z, 200.0f);

            FreeCameraPawn->SetActorLocation(CharLocation + CameraOffset);

            if (USpringArmComponent* FreeCameraArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
            {
                FreeCameraArm->SetWorldRotation(SavedCameraRotation);
                FreeCameraArm->TargetArmLength = SavedArmLength;
            }
        }

        SafeSetViewTarget(FreeCameraPawn);
        OwnerController->SetControlRotation(SavedCameraRotation);
    }

    Debug::Print(TEXT("Switched to Grid Mode (Free Camera)"), FColor::Yellow);
    OnCameraModeChanged.Broadcast(bIsInDynamicMode);
}

void UCameraControlComponent::SwitchToDynamicMode()
{
    if (bIsInDynamicMode) return; // 已經在動態模式

    bIsInDynamicMode = true;

    // 保存自由相機狀態
    SavedCameraRotation = OwnerController->GetControlRotation();
    if (FreeCameraPawn)
    {
        SavedCameraLocation = FreeCameraPawn->GetActorLocation();
        if (USpringArmComponent* FreeCameraArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
        {
            SavedArmLength = FreeCameraArm->TargetArmLength;
        }
    }

    // 切換到角色第三人稱相機
    if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(OwnerController->GetPawn()))
    {
        if (TurnChar->CameraBoom)
        {
            TurnChar->CameraBoom->bUsePawnControlRotation = true;
            TurnChar->CameraBoom->SetWorldRotation(SavedCameraRotation);

            // 確保角色不會跟隨攝像機旋轉
            TurnChar->bUseControllerRotationYaw = false;
            TurnChar->bUseControllerRotationPitch = false;
            TurnChar->bUseControllerRotationRoll = false;
        }

        SafeSetViewTarget(TurnChar);
        OwnerController->SetControlRotation(SavedCameraRotation);
    }

    Debug::Print(TEXT("Switched to Dynamic Mode (Character Camera)"), FColor::Green);
    OnCameraModeChanged.Broadcast(bIsInDynamicMode);
}

void UCameraControlComponent::ToggleCameraMode()
{
    // 防止過於頻繁切換
    float CurrentTime = GetWorld()->GetTimeSeconds();
    if (CurrentTime - LastToggleTime < ToggleCooldown)
    {
        return;
    }
    LastToggleTime = CurrentTime;

    if (bIsInDynamicMode)
    {
        SwitchToFreeCamera();
    }
    else
    {
        SwitchToDynamicMode();
    }
}

void UCameraControlComponent::OnCameraMove(const FInputActionValue& Value)
{
    // 這個功能暫時保留在主控制器中，因為需要訪問更多組件
    Debug::Print(TEXT("CameraMove - TODO: Implement in component"), FColor::Yellow);
}

void UCameraControlComponent::OnCameraRotate(const FInputActionValue& Value)
{
    if (!OwnerController) return;

    FVector2D RotateVector = Value.Get<FVector2D>();

    if (bIsInDynamicMode)
    {
        // 動態模式下的角色相機旋轉
        OwnerController->AddYawInput(RotateVector.X * MouseSensitivity);
        OwnerController->AddPitchInput(RotateVector.Y * MouseSensitivity);

        // 同步旋轉到角色的 CameraBoom
        if (ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(OwnerController->GetPawn()))
        {
            if (TurnCharacter->CameraBoom)
            {
                TurnCharacter->CameraBoom->SetWorldRotation(OwnerController->GetControlRotation());
            }
        }
    }
    else
    {
        // 自由相機模式
        if (FreeCameraPawn)
        {
            if (USpringArmComponent* SpringArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
            {
                FRotator NewRotation = SpringArm->GetRelativeRotation();
                NewRotation.Yaw += RotateVector.X * MouseSensitivity;
                NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch - RotateVector.Y * MouseSensitivity, -80.0f, -10.0f);
                SpringArm->SetRelativeRotation(NewRotation);

                OwnerController->SetControlRotation(SpringArm->GetComponentRotation());
            }
        }
    }
}

void UCameraControlComponent::OnCameraZoom(const FInputActionValue& Value)
{
    if (!OwnerController) return;

    float ZoomValue = Value.Get<float>();

    if (bIsInDynamicMode)
    {
        // 動態模式：調整角色相機
        if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(OwnerController->GetPawn()))
        {
            if (TurnChar->CameraBoom)
            {
                float NewLength = TurnChar->CameraBoom->TargetArmLength - (ZoomValue * ZoomSpeed);
                TurnChar->CameraBoom->TargetArmLength = FMath::Clamp(NewLength, MinZoomLength, MaxZoomLength);
            }
        }
    }
    else
    {
        // 網格模式：調整自由相機
        if (FreeCameraPawn)
        {
            if (USpringArmComponent* SpringArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
            {
                float NewLength = SpringArm->TargetArmLength - (ZoomValue * ZoomSpeed);
                SpringArm->TargetArmLength = FMath::Clamp(NewLength, MinZoomLength, MaxZoomLength);
            }
        }
    }
}

void UCameraControlComponent::FocusOnCurrentTurnCharacter()
{
    // 從 OwnerController 獲取當前角色
    if (!OwnerController) return;
    APawn* ControlledPawn = OwnerController->GetPawn();
    if (!ControlledPawn) return;

    FocusOnActor(ControlledPawn, 800.0f);
}

void UCameraControlComponent::SetDynamicMode(bool bDynamic)
{
    bIsInDynamicMode = bDynamic;
    OnCameraModeChanged.Broadcast(bIsInDynamicMode);
}

AFreeCameraPawn* UCameraControlComponent::GetFreeCameraPawn() const
{
    return FreeCameraPawn;
}

void UCameraControlComponent::FocusOnActor(AActor* TargetActor, float Distance)
{
    if (!TargetActor || !FreeCameraPawn) return;

    // 保持當前旋轉
    FRotator CurrentRotation = OwnerController->GetControlRotation();

    FreeCameraPawn->FocusOnActor(TargetActor, Distance);

    // 恢復旋轉
    OwnerController->SetControlRotation(CurrentRotation);

    Debug::Print(FString::Printf(TEXT("Camera focused on %s"),
        *TargetActor->GetActorLabel()), FColor::Green);
}

void UCameraControlComponent::OnTurnChangedCamera(AActor* NewTurnCharacter, bool bIsPlayerControlled)
{
    if (!NewTurnCharacter || !FreeCameraPawn)
    {
        Debug::Print(TEXT("ERROR: Missing character or FreeCameraPawn"), FColor::Red);
        return;
    }

    // 保存當前旋轉
    FRotator SavedRotation = OwnerController->GetControlRotation();

    // 退出動態模式（強制回到網格模式）
    if (bIsInDynamicMode)
    {
        bIsInDynamicMode = false;
        Debug::Print(TEXT("Exiting Dynamic Mode due to turn change"), FColor::Yellow);
    }

    // 強制使用自由相機模式
    SwitchToFreeCamera();

    // 聚焦到新角色
    FreeCameraPawn->FocusOnActor(NewTurnCharacter, 800.0f);

    // 保持旋轉
    OwnerController->SetControlRotation(SavedRotation);

    Debug::Print(FString::Printf(TEXT("Camera switched to %s"),
        *NewTurnCharacter->GetActorLabel()), FColor::Green);

    // 廣播相機模式變更
    OnCameraModeChanged.Broadcast(false); // false = Grid Mode
}

FVector UCameraControlComponent::GetCameraLocation() const
{
    if (bIsInDynamicMode)
    {
        if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(OwnerController->GetPawn()))
        {
            if (TurnChar->FollowCamera)
            {
                return TurnChar->FollowCamera->GetComponentLocation();
            }
        }
    }
    else
    {
        if (FreeCameraPawn)
        {
            return FreeCameraPawn->GetCameraLocation();
        }
    }

    return FVector::ZeroVector;
}

FRotator UCameraControlComponent::GetCameraRotation() const
{
    if (OwnerController)
    {
        return OwnerController->GetControlRotation();
    }

    return FRotator::ZeroRotator;
}





void UCameraControlComponent::SafeSetViewTarget(AActor* NewViewTarget)
{
    if (!OwnerController || !NewViewTarget) return;

    // 保存當前旋轉
    FRotator PreservedRotation = OwnerController->GetControlRotation();

    // 如果旋轉接近零，使用保存的旋轉
    if (FMath::Abs(PreservedRotation.Pitch) < 5.0f &&
        FMath::Abs(PreservedRotation.Yaw) < 5.0f)
    {
        PreservedRotation = SavedCameraRotation.IsZero() ?
            FRotator(-45.0f, 0.0f, 0.0f) : SavedCameraRotation;

        Debug::Print(TEXT("WARNING: Preventing zero rotation in SafeSetViewTarget"), FColor::Red);
    }

    // 執行視角切換
    OwnerController->SetViewTarget(NewViewTarget);

    // 立即恢復旋轉
    OwnerController->SetControlRotation(PreservedRotation);

    // 如果是 FreeCameraPawn，確保其 SpringArm 也有正確旋轉
    if (NewViewTarget == FreeCameraPawn && FreeCameraPawn)
    {
        if (USpringArmComponent* SpringArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
        {
            SpringArm->SetRelativeRotation(PreservedRotation);
        }
    }
}

void UCameraControlComponent::UpdateCameraMovement(float DeltaTime)
{
    // 這個功能暫時保留在主控制器中
    // 因為需要處理輸入狀態和速度計算
    return;
}
