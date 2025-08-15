// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/BasicPlayerPawn.h"

// Sets default values
ABasicPlayerPawn::ABasicPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

