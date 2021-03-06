// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallBase.h"
#include "PlayerPawn.generated.h"

UCLASS()
class GRAVBALL_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	APawn* Player;
	FVector LineTraceEnd() const;
	
	UPROPERTY(EditAnywhere)
	float ReachDistance = 150.f;
	// Called every frame
	void SpawnBall();
	FHitResult GetReachableObject() const;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABallBase> Ball;

};
