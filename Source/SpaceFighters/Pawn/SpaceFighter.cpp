// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceFighter.h"

// Sets default values
ASpaceFighter::ASpaceFighter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpaceFighter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceFighter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpaceFighter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASpaceFighter::OnDead()
{

}
