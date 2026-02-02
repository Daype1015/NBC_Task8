// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinItem.h"
#include "Engine/World.h"
#include "SpartaGameState.h"

ACoinItem::ACoinItem()
{
	PointValue = 0;
	ItemType = "DefaultCoin";
}

void ACoinItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);

	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (TObjectPtr<UWorld> World = GetWorld())
		{
			if (TObjectPtr<ASpartaGameState> NowGameState = World->GetGameState<ASpartaGameState>())
			{
				NowGameState->AddScore(PointValue);
				NowGameState->OnCoinCollected();
			}
		}
		DestroyItem();
	}
}
