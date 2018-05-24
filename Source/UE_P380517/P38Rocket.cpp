// Fill out your copyright notice in the Description page of Project Settings.

#include "P38Rocket.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"


// Sets default values
AP38Rocket::AP38Rocket()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX"));
	RootComponent = Box;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ROTCKET"));
	Body->SetupAttachment(Box);
	Body->SetRelativeRotation(FRotator(-90.0f, 0, 0));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Body(TEXT("StaticMesh'/Game/Mesh/SM_Rocket.SM_Rocket'"));
	if (SM_Body.Succeeded())
	{
		Body->SetStaticMesh(SM_Body.Object);
	}

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(Box);

	Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
	Movement->InitialSpeed = 1000.0f;
	Movement->MaxSpeed = 1000.0f;
	Movement->ProjectileGravityScale = 0.0f;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> P_Explosion(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (P_Explosion.Succeeded())
	{
		Explosion = P_Explosion.Object;
	}

	static ConstructorHelpers::FObjectFinder<USoundBase> S_ExplosionSound(TEXT("SoundCue'/Game/StarterContent/Audio/Explosion_Cue.Explosion_Cue'"));
	if (S_ExplosionSound.Succeeded())
	{
		ExplosionSound = S_ExplosionSound.Object;
	}
}

// Called when the game starts or when spawned
void AP38Rocket::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(TimerHandle, this, &AP38Rocket::Timer, 3.0f, false, 3.0f);

	GetWorldTimerManager().ClearTimer(TimerHandle);

	Box->OnComponentBeginOverlap.AddDynamic(this, &AP38Rocket::BeginOverlap);

	SetLifeSpan(3.0f);
}

// Called every frame
void AP38Rocket::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AP38Rocket::Timer()
{

	Destroy();
}

void AP38Rocket::BeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{/*
	if (Cast<APawn>(OtherActor) == nullptr)
	{*/
		//UGameplayStatics::SpawnEmitterAtLocation();
		//UGameplayStatics::SpawnSoundAtLocation()
		if (Cast<APawn>(OtherActor) == nullptr)
		{
			UE_LOG(LogClass, Warning, TEXT("Overlap %s"), *OtherActor->GetName());
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion, GetActorTransform(), true);

			UGameplayStatics::SpawnSoundAtLocation(GetWorld(), ExplosionSound, GetActorTransform().GetLocation());

			Destroy();
		}
	/*}*/
}
