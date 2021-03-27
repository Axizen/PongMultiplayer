// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Ball.generated.h"

class APaddle;

UCLASS()
class PONG_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();

	void BeginPlay();

	void Tick(float DeltaTime);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Hit Response", meta = (BlueprintProtected))
	void HitPaddle(APaddle* paddle);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Hit Response", meta = (BlueprintProtected))
	void HitBoundary();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="mesh", meta=(AllowPrivateAccess="true"))
	UStaticMeshComponent* mesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "collision", meta = (AllowPrivateAccess = "true"))
	USphereComponent* sphere;
	
};
