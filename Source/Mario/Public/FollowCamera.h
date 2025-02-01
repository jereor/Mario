// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FollowCamera.generated.h"

UCLASS(ClassGroup=(Custom))
class MARIO_API AFollowCamera : public AActor
{
	GENERATED_BODY()

public:

protected:
	
public:	
	AFollowCamera();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
