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

    // �ЫظI���ե�@���ڲե�
    USphereComponent* CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->InitSphereRadius(50.0f);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    RootComponent = CollisionComponent;

    // �Ыؼu®�u�ե�
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArmComponent->SetupAttachment(RootComponent);
    SpringArmComponent->TargetArmLength = 800.0f;
    SpringArmComponent->bDoCollisionTest = false;
    SpringArmComponent->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
    SpringArmComponent->bUsePawnControlRotation = true;
    SpringArmComponent->bInheritPitch = true;
    SpringArmComponent->bInheritYaw = true;
    SpringArmComponent->bInheritRoll = false;

    // �Ыج۾��ե�
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);

    // �Ыز��ʲե�
    UFloatingPawnMovement* MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
    MovementComponent->MaxSpeed = BaseMoveSpeed;
    MovementComponent->Acceleration = 2000.0f;
    MovementComponent->Deceleration = 4000.0f;

    // �]�m Pawn �ϥα������
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;
}

void AFreeCameraPawn::BeginPlay()
{
    Super::BeginPlay();

    Debug::Print(TEXT("Free Camera Pawn Activated"), FColor::Cyan);

    // �]�m��l��m
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        PC->SetViewTarget(this);
    }
}

void AFreeCameraPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // �B�z��t�u��
    if (bEnableEdgeScrolling && !bIsRightMousePressed)
    {
        HandleEdgeScrolling(DeltaTime);
    }

    // ��s���Ʋ���
    UpdateMovement(DeltaTime);

    // ���H�ؼ�
    if (FollowTarget)
    {
        FVector TargetLocation = FollowTarget->GetActorLocation();
        FVector CurrentLocation = GetActorLocation();
        FVector NewLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, 2.0f);
        SetActorLocation(NewLocation);
    }

    // ������ɭ���
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

    // ���ʿ�J
    PlayerInputComponent->BindAxis("MoveForward", this, &AFreeCameraPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AFreeCameraPawn::MoveRight);
    PlayerInputComponent->BindAxis("MoveUp", this, &AFreeCameraPawn::MoveUp);

    // �����J�]�ƹ��^
    PlayerInputComponent->BindAxis("Turn", this, &AFreeCameraPawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &AFreeCameraPawn::AddControllerPitchInput);

    // �����J�]��L�^
    PlayerInputComponent->BindAxis("TurnRate", this, &AFreeCameraPawn::TurnAtRate);
    PlayerInputComponent->BindAxis("LookUpRate", this, &AFreeCameraPawn::LookUpAtRate);

    // �Y���J
    PlayerInputComponent->BindAxis("Zoom", this, &AFreeCameraPawn::Zoom);
    PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AFreeCameraPawn::ZoomIn);
    PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &AFreeCameraPawn::ZoomOut);

    // �׹���
    PlayerInputComponent->BindAction("Shift", IE_Pressed, this, &AFreeCameraPawn::OnShiftPressed);
    PlayerInputComponent->BindAction("Shift", IE_Released, this, &AFreeCameraPawn::OnShiftReleased);

    // �ƹ����s
    PlayerInputComponent->BindAction("RightMouseButton", IE_Pressed, this, &AFreeCameraPawn::OnRightMousePressed);
    PlayerInputComponent->BindAction("RightMouseButton", IE_Released, this, &AFreeCameraPawn::OnRightMouseReleased);
}

void AFreeCameraPawn::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        // ����۾����e�V�V�q�]���� Pitch�^
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
        // ����۾����k�V�V�q
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
    // �зǤƥؼгt��
    if (!TargetVelocity.IsNearlyZero())
    {
        TargetVelocity.Normalize();
        float MoveSpeed = bIsShiftPressed ? FastMoveSpeed : BaseMoveSpeed;
        TargetVelocity *= MoveSpeed;
    }

    // ���ƴ��Ȩ�ؼгt��
    CurrentVelocity = FMath::VInterpTo(CurrentVelocity, TargetVelocity, DeltaTime, MovementSmoothness);

    // ���β���
    if (!CurrentVelocity.IsNearlyZero())
    {
        FVector NewLocation = GetActorLocation() + CurrentVelocity * DeltaTime;
        SetActorLocation(NewLocation);
    }

    // ���m�ؼгt��
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
        // �����ק� SpringArm ������
        FRotator NewRotation = SpringArmComponent->GetRelativeRotation();
        NewRotation.Yaw += Val;
        SpringArmComponent->SetRelativeRotation(NewRotation);
    }
}

void AFreeCameraPawn::AddControllerPitchInput(float Val)
{
    if (Val != 0.0f && bIsRightMousePressed)
    {
        // �����ק� SpringArm ������A�í��������
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

        // �ˬd��t
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

    // �p��۾����Ӧb����m
    FRotator CurrentRotation = SpringArmComponent->GetRelativeRotation();
    FVector CameraOffset = CurrentRotation.Vector() * -Distance;
    FVector NewLocation = TargetLocation + CameraOffset;

    // ���Ʋ��ʨ�s��m
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