// Fill out your copyright notice in the Description page of Project Settings.

#include "PongGameMode.h"
#include "Net/UnrealNetwork.h"

void APongGameMode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//Define all properties that are replicated
	DOREPLIFETIME(APongGameMode, m_playerOneScore);
	DOREPLIFETIME(APongGameMode, m_playerTwoScore);
}
