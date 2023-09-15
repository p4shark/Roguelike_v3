// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCPPCharacter.h"

// Sets default values
AMainCPPCharacter::AMainCPPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCPPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCPPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMainCPPCharacter::SetHealth(float t)
{
	Health = t;
}

// Called to bind functionality to input
void AMainCPPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

