// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

class ABall;
class UGameHud;

/**
 * 
 */
UCLASS()
class PONG_API APongGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	//Required network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreasePlayerOneScore();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreasePlayerTwoScore();

	UFUNCTION( BlueprintImplementableEvent, BlueprintCallable, Category = "Logic")
	void SpawnNewBall();

	UPROPERTY(BlueprintReadWrite, Category = "References")
	ABall* m_ballRef;

protected:
	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	UGameHud* m_gameHudRef;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float m_direction=-1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float m_ballSpeed=1400.0f;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int m_playerOneScore=0;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int m_playerTwoScore=0;

	//The maximum number of points needed to win
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int m_MaxScore = 10;
};
