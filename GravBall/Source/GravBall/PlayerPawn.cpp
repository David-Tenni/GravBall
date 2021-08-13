// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	Player = GetWorld()->GetFirstPlayerController()->GetPawn();

}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerPawn::SpawnBall()
{
	if(Ball)
	{
		FHitResult Hit = GetReachableObject();
		FRotator TempRotation = Hit.ImpactPoint.Rotation();
		FVector TempLocation = FVector(Hit.ImpactPoint.X, Hit.ImpactPoint.Y, Hit.ImpactPoint.Z);
		GetWorld()->SpawnActor<AActor>(Ball*, TempLocation, TempRotation);
	}
}
FHitResult APlayerPawn::GetReachableObject() const
{
	FVector PlayerViewLocation = Player->GetActorLocation();

	FHitResult Hit;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());
	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		PlayerViewLocation,
		LineTraceEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), TraceParams
	);

	AActor* ActorHit = Hit.GetActor();
	if (ActorHit) {
		UE_LOG(LogTemp, Log, TEXT("Actor within reach is: %s"), *(ActorHit->GetName()));
	}
	return Hit;
}
FVector APlayerPawn::LineTraceEnd() const
{

	FVector PlayerViewLocation = Player->GetActorLocation();
	FRotator PlayerViewRotation = Player->GetActorRotation();
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewLocation, OUT PlayerViewRotation);
	FVector LineTraceDirection = PlayerViewRotation.Vector();
	return PlayerViewLocation + PlayerViewRotation.Vector() * ReachDistance;
}