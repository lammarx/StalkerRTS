// Fill out your copyright notice in the Description page of Project Settings.


#include "StalkerRTS/Units/BasicUnit.h"

// Sets default values
ABasicUnit::ABasicUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

