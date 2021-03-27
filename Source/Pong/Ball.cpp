// Fill out your copyright notice in the Description page of Project Settings.

#include "Ball.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	if (GetLocalRole() == ROLE_Authority)
	{
		SetReplicates(true);
		SetReplicateMovement(true);
	}


	sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = sphere;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	mesh->SetupAttachment(RootComponent);
}

void ABall::BeginPlay()
{
	Super::BeginPlay();

}

void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

		if (HasAuthority())
		{

		}
}


