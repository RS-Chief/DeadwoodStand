// © 2025 Chiefs Design. All Rights Reserved.

#include "TestActor.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("TestActor BeginPlay"));
	
}

void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

