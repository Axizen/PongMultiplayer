// Fill out your copyright notice in the Description page of Project Settings.

#include "Paddle.h"


// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = collider;

	paddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	paddleMesh->SetupAttachment(RootComponent);
}




