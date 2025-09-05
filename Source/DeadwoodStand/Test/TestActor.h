// © 2025 Chiefs Design. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class DEADWOODSTAND_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	

	ATestActor();

protected:

	virtual void BeginPlay() override;

	

public:	

	virtual void Tick(float DeltaTime) override;

};
