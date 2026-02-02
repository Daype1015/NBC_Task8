// Fill out your copyright notice in the Description page of Project Settings.


#include "AKeyItem.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AAKeyItem::AAKeyItem()
{
	PrimaryActorTick.bCanEverTick = false;
	ItemType = "Key";
}

// Called when the game starts or when spawned
void AAKeyItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAKeyItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAKeyItem::OnItemOverlap(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	UKismetSystemLibrary::PrintString(GetWorld(), TEXT("Key Collected!"), true, false, FColor::Blue, 2.0f, GetItemType());
}
void AAKeyItem::OnItemEndOverlap(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{

}
void AAKeyItem::ActivateItem(AActor* Activator)
{
	UKismetSystemLibrary::PrintString(GetWorld(), TEXT("Key used to unlock the door!"), true, false, FColor::Blue, 2.0f, GetItemType());
	Destroy();
}
FName AAKeyItem::GetItemType() const
{
	return ItemType;
}

