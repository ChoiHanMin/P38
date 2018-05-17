// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "P38Pawn.generated.h"

UCLASS()
class UE_P380517_API AP38Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AP38Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	 // private에서 밖에서 볼 수 있는 명령어 UPROPERTY(VisibleAnywhere, BlueprintReadWrite,  meta = (AlowPrivateAcess = "true"))
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* Box;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Body;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Left;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Right;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UFloatingPawnMovement* Movement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UArrowComponent* Arrow;

	UFUNCTION()
		void ActorRotate(UStaticMeshComponent* Mesh);

	UFUNCTION()
		void MoveForward(float Value);

	UFUNCTION()
		void Turn(float Value);

	UFUNCTION()
		void Fire();

	//블루프린트 사용 하는 첫번째 방법
	class UClass* Rocket;

	//블루프린트 사용 하는 두번째 방법
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class TSubclassOf<class AP38Rocket> RocketBlueprint;
};
