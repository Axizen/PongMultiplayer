// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Boundary.generated.h"

class APongGameMode;

UCLASS()
class PONG_API ABoundary : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoundary();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="boundary type", meta=(BlueprintProtected))
	bool isGoal = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "boundary type", meta = (BlueprintProtected))
	bool isLeftGoal;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	APongGameMode* gameModeRef;

private:
	UPROPERTY(VisibleAnywhere,Category="Collision")
	UBoxComponent* bounds;
	
};
