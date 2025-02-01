// Fill out your copyright notice in the Description page of Project Settings.


#include "FollowCamera.h"

AFollowCamera::AFollowCamera()
{
 	PrimaryActorTick.bCanEverTick = true;
}

void AFollowCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFollowCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

