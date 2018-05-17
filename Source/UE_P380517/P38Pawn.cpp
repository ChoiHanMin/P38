// Fill out your copyright notice in the Description page of Project Settings.

#include "P38Pawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "P38Rocket.h"
#include "Components/ArrowComponent.h"


// Sets default values
AP38Pawn::AP38Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX"));
	RootComponent = Box;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Body->SetupAttachment(Box);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Body(TEXT("StaticMesh'/Game/mesh/SM_P38_Body.SM_P38_Body'"));
	if (SM_Body.Succeeded())
	{
		Body->SetStaticMesh(SM_Body.Object);
	}

	Left = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LEFT"));
	Left->SetupAttachment(Body);

	Right = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RIGHT"));
	Right->SetupAttachment(Body);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Propellor(TEXT("StaticMesh'/Game/mesh/SM_P38_Propeller.SM_P38_Propeller'"));
	if (SM_Propellor.Succeeded())
	{
		Left->SetStaticMesh(SM_Propellor.Object);
		Right->SetStaticMesh(SM_Propellor.Object);
	}

	Left->SetRelativeLocation(FVector(37, 21, 0.8f));
	Right->SetRelativeLocation(FVector(37, -21, 0.8f));


	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	Movement->MaxSpeed = 0.0f;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Box);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(Box);
	Arrow->SetRelativeLocation(FVector(80.0f, 0, 0));

	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_Rocket(TEXT("Blueprint'/Game/Blueprint/BP_Rocket.BP_Rocket'"));
	if (BP_Rocket.Succeeded())
	{
		Rocket = Cast<UClass>(BP_Rocket.Object->GeneratedClass);
	}
}

// Called when the game starts or when spawned
void AP38Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP38Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ActorRotate(Left);
	ActorRotate(Right);
}

// Called to bind functionality to input
void AP38Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AP38Pawn::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AP38Pawn::Turn);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AP38Pawn::Fire);
}

void AP38Pawn::ActorRotate(UStaticMeshComponent * Mesh)
{
	float DeltaSecond = UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
	Mesh->AddLocalRotation(FRotator(0, 0, 360 * DeltaSecond));
}

void AP38Pawn::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
		AddActorLocalRotation(FRotator(60 * Value * DeltaTime, 0, 0));
	}
}

void AP38Pawn::Turn(float Value)
{
	if (Value != 0.0f)
	{
		float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
		AddActorLocalRotation(FRotator(0, 0, 60 * Value * DeltaTime));
	}
}

void AP38Pawn::Fire()
{
	GetWorld()->SpawnActor<AP38Rocket>(RocketBlueprint, Arrow->GetComponentLocation(), Arrow->GetComponentRotation());
}

