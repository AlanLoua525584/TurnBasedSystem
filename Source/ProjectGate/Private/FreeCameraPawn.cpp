// Fill out your copyright notice in the Description page of Project Settings.

// FreeCameraPawn.cpp
#include "FreeCameraPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "Public/DebugHelper.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SphereComponent.h"
#include "Engine/GameViewportClient.h" 

AFreeCameraPawn::AFreeCameraPawn()
{
    PrimaryActorTick.bCanEverTick = true;

    // 創建碰撞組件作為根組件
    USphereComponent* CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->InitSphereRadius(50.0f);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    RootComponent = CollisionComponent;

    // 創建彈簧臂組件
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArmComponent->SetupAttachment(RootComponent);
    SpringArmComponent->TargetArmLength = 800.0f;
    SpringArmComponent->bDoCollisionTest = false;
    SpringArmComponent->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
    SpringArmComponent->bUsePawnControlRotation = true;
    SpringArmComponent->bInheritPitch = true;
    SpringArmComponent->bInheritYaw = true;
    SpringArmComponent->bInheritRoll = false;

    // 創建相機組件
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);

    // 創建移動組件
    UFloatingPawnMovement* MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
    MovementComponent->MaxSpeed = BaseMoveSpeed;
    MovementComponent->Acceleration = 2000.0f;
    MovementComponent->Deceleration = 4000.0f;

    // 設置 Pawn 使用控制器旋轉
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;
}

void AFreeCameraPawn::BeginPlay()
{
    Super::BeginPlay();

    Debug::Print(TEXT("Free Camera Pawn Activated"), FColor::Cyan);

    // 設置初始位置
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        PC->SetViewTarget(this);
    }
}

void AFreeCameraPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 處理邊緣滾動
    if (bEnableEdgeScrolling && !bIsRightMousePressed)
    {
        HandleEdgeScrolling(DeltaTime);
    }

    // 更新平滑移動
    UpdateMovement(DeltaTime);

    // 跟隨目標
    if (FollowTarget)
    {
        FVector TargetLocation = FollowTarget->GetActorLocation();
        FVector CurrentLocation = GetActorLocation();
        FVector NewLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, 2.0f);
        SetActorLocation(NewLocation);
    }

    // 應用邊界限制
    if (bUseBounds)
    {
        FVector CurrentLocation = GetActorLocation();
        CurrentLocation.X = FMath::Clamp(CurrentLocation.X, MinBounds.X, MaxBounds.X);
        CurrentLocation.Y = FMath::Clamp(CurrentLocation.Y, MinBounds.Y, MaxBounds.Y);
        CurrentLocation.Z = FMath::Clamp(CurrentLocation.Z, MinBounds.Z, MaxBounds.Z);
        SetActorLocation(CurrentLocation);
    }
}

void AFreeCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // 移動輸入
    PlayerInputComponent->BindAxis("MoveForward", this, &AFreeCameraPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AFreeCameraPawn::MoveRight);
    PlayerInputComponent->BindAxis("MoveUp", this, &AFreeCameraPawn::MoveUp);

    // 旋轉輸入（滑鼠）
    PlayerInputComponent->BindAxis("Turn", this, &AFreeCameraPawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &AFreeCameraPawn::AddControllerPitchInput);

    // 旋轉輸入（鍵盤）
    PlayerInputComponent->BindAxis("TurnRate", this, &AFreeCameraPawn::TurnAtRate);
    PlayerInputComponent->BindAxis("LookUpRate", this, &AFreeCameraPawn::LookUpAtRate);

    // 縮放輸入
    PlayerInputComponent->BindAxis("Zoom", this, &AFreeCameraPawn::Zoom);
    PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AFreeCameraPawn::ZoomIn);
    PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &AFreeCameraPawn::ZoomOut);

    // 修飾鍵
    PlayerInputComponent->BindAction("Shift", IE_Pressed, this, &AFreeCameraPawn::OnShiftPressed);
    PlayerInputComponent->BindAction("Shift", IE_Released, this, &AFreeCameraPawn::OnShiftReleased);

    // 滑鼠按鈕
    PlayerInputComponent->BindAction("RightMouseButton", IE_Pressed, this, &AFreeCameraPawn::OnRightMousePressed);
    PlayerInputComponent->BindAction("RightMouseButton", IE_Released, this, &AFreeCameraPawn::OnRightMouseReleased);
}

void AFreeCameraPawn::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        // 獲取相機的前向向量（忽略 Pitch）
        FRotator Rotation = SpringArmComponent->GetComponentRotation();
        Rotation.Pitch = 0.0f;
        FVector Direction = Rotation.Vector();

        TargetVelocity += Direction * Value;
    }
}

void AFreeCameraPawn::MoveRight(float Value)
{
    if (Value != 0.0f)
    {
        // 獲取相機的右向向量
        FRotator Rotation = SpringArmComponent->GetComponentRotation();
        FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);

        TargetVelocity += Direction * Value;
    }
}

void AFreeCameraPawn::MoveUp(float Value)
{
    if (Value != 0.0f)
    {
        TargetVelocity += FVector::UpVector * Value;
    }
}

void AFreeCameraPawn::UpdateMovement(float DeltaTime)
{
    // 標準化目標速度
    if (!TargetVelocity.IsNearlyZero())
    {
        TargetVelocity.Normalize();
        float MoveSpeed = bIsShiftPressed ? FastMoveSpeed : BaseMoveSpeed;
        TargetVelocity *= MoveSpeed;
    }

    // 平滑插值到目標速度
    CurrentVelocity = FMath::VInterpTo(CurrentVelocity, TargetVelocity, DeltaTime, MovementSmoothness);

    // 應用移動
    if (!CurrentVelocity.IsNearlyZero())
    {
        FVector NewLocation = GetActorLocation() + CurrentVelocity * DeltaTime;
        SetActorLocation(NewLocation);
    }

    // 重置目標速度
    TargetVelocity = FVector::ZeroVector;
}

void AFreeCameraPawn::TurnAtRate(float Rate)
{
    if (!bIsRightMousePressed && FMath::Abs(Rate) > 0.0f)
    {
        AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
    }
}

void AFreeCameraPawn::LookUpAtRate(float Rate)
{
    if (!bIsRightMousePressed && FMath::Abs(Rate) > 0.0f)
    {
        AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
    }
}

void AFreeCameraPawn::AddControllerYawInput(float Val)
{
    if (Val != 0.0f && bIsRightMousePressed)
    {
        // 直接修改 SpringArm 的旋轉
        FRotator NewRotation = SpringArmComponent->GetRelativeRotation();
        NewRotation.Yaw += Val;
        SpringArmComponent->SetRelativeRotation(NewRotation);
    }
}

void AFreeCameraPawn::AddControllerPitchInput(float Val)
{
    if (Val != 0.0f && bIsRightMousePressed)
    {
        // 直接修改 SpringArm 的旋轉，並限制俯仰角
        FRotator NewRotation = SpringArmComponent->GetRelativeRotation();
        NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch + Val, -80.0f, -10.0f);
        SpringArmComponent->SetRelativeRotation(NewRotation);
    }
}

void AFreeCameraPawn::OnRightMousePressed()
{
    bIsRightMousePressed = true;

    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        PC->bShowMouseCursor = false;
        PC->SetInputMode(FInputModeGameOnly());
    }
}

void AFreeCameraPawn::OnRightMouseReleased()
{
    bIsRightMousePressed = false;

    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        PC->bShowMouseCursor = true;
        FInputModeGameAndUI InputMode;
        InputMode.SetHideCursorDuringCapture(false);
        PC->SetInputMode(InputMode);
    }
}

void AFreeCameraPawn::Zoom(float Value)
{
    if (Value != 0.0f && SpringArmComponent)
    {
        float NewLength = SpringArmComponent->TargetArmLength - (Value * ZoomSpeed);
        SpringArmComponent->TargetArmLength = FMath::Clamp(NewLength, MinZoomLength, MaxZoomLength);
    }
}

void AFreeCameraPawn::ZoomIn()
{
    Zoom(1.0f);
}

void AFreeCameraPawn::ZoomOut()
{
    Zoom(-1.0f);
}

void AFreeCameraPawn::HandleEdgeScrolling(float DeltaTime)
{
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (!PC) return;

    FVector2D MousePosition;
    FVector2D ViewportSize;

    if (PC->GetMousePosition(MousePosition.X, MousePosition.Y) &&
        PC->GetLocalPlayer() &&
        PC->GetLocalPlayer()->ViewportClient)
    {
        PC->GetLocalPlayer()->ViewportClient->GetViewportSize(ViewportSize);

        FVector MoveDirection = FVector::ZeroVector;

        // 檢查邊緣
        if (MousePosition.X <= EdgeScrollBorder)
        {
            float ScrollStrength = 1.0f - (MousePosition.X / EdgeScrollBorder);
            TargetVelocity -= SpringArmComponent->GetRightVector() * ScrollStrength;
        }
        else if (MousePosition.X >= ViewportSize.X - EdgeScrollBorder)
        {
            float ScrollStrength = (MousePosition.X - (ViewportSize.X - EdgeScrollBorder)) / EdgeScrollBorder;
            TargetVelocity += SpringArmComponent->GetRightVector() * ScrollStrength;
        }

        if (MousePosition.Y <= EdgeScrollBorder)
        {
            float ScrollStrength = 1.0f - (MousePosition.Y / EdgeScrollBorder);
            FRotator Rotation = SpringArmComponent->GetComponentRotation();
            Rotation.Pitch = 0.0f;
            TargetVelocity += Rotation.Vector() * ScrollStrength;
        }
        else if (MousePosition.Y >= ViewportSize.Y - EdgeScrollBorder)
        {
            float ScrollStrength = (MousePosition.Y - (ViewportSize.Y - EdgeScrollBorder)) / EdgeScrollBorder;
            FRotator Rotation = SpringArmComponent->GetComponentRotation();
            Rotation.Pitch = 0.0f;
            TargetVelocity -= Rotation.Vector() * ScrollStrength;
        }
    }
}

void AFreeCameraPawn::FocusOnActor(AActor* TargetActor, float Distance)
{
    if (!TargetActor) return;

    FVector TargetLocation = TargetActor->GetActorLocation();

    // 計算相機應該在的位置
    FRotator CurrentRotation = SpringArmComponent->GetRelativeRotation();
    FVector CameraOffset = CurrentRotation.Vector() * -Distance;
    FVector NewLocation = TargetLocation + CameraOffset;

    // 平滑移動到新位置
    SetActorLocation(NewLocation);
    SpringArmComponent->TargetArmLength = Distance;

    Debug::Print(FString::Printf(TEXT("Camera focused on %s"),
        *TargetActor->GetActorLabel()), FColor::Green);
}

void AFreeCameraPawn::SetFollowTarget(AActor* TargetActor)
{
    FollowTarget = TargetActor;
    if (FollowTarget)
    {
        Debug::Print(FString::Printf(TEXT("Camera following %s"),
            *FollowTarget->GetActorLabel()), FColor::Green);
    }
}

void AFreeCameraPawn::ClearFollowTarget()
{
    FollowTarget = nullptr;
    Debug::Print(TEXT("Camera follow target cleared"), FColor::Yellow);
}

FVector AFreeCameraPawn::GetCameraLocation() const
{
    return CameraComponent ? CameraComponent->GetComponentLocation() : GetActorLocation();
}

FRotator AFreeCameraPawn::GetCameraRotation() const
{
    return CameraComponent ? CameraComponent->GetComponentRotation() : GetActorRotation();
}

void AFreeCameraPawn::SetMovementBounds(FVector InMinBounds, FVector InMaxBounds)
{
    bUseBounds = true;
    MinBounds = InMinBounds;
    MaxBounds = InMaxBounds;

    Debug::Print(FString::Printf(TEXT("Camera bounds set: Min(%s) Max(%s)"),
        *MinBounds.ToString(), *MaxBounds.ToString()), FColor::Yellow);
}