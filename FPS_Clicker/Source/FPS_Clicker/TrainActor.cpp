// Fill out your copyright notice in the Description page of Project Settings.

//This was done by Izzy Bennett, no one else


#include "TrainActor.h"

// Sets default values
ATrainActor::ATrainActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	myLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("MyLight"));
	myLight->SetHiddenInGame(false, true);
	RootComponent = myLight;
	baseMax = 255;
}

// Called when the game starts or when spawned
void ATrainActor::BeginPlay()
{
	Super::BeginPlay();
	
	//RootComponent = myLight;
	UpdateLight();
}

// Called every frame
void ATrainActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrainActor::UpdateLight() {

	

	convertColor.R = baseColor.X;
	convertColor.G = baseColor.Y;
	convertColor.B = baseColor.Z;
	
	baseColor.X = baseColor.X + BaseRate.X;
	baseColor.Y = baseColor.Y + BaseRate.Y;
	baseColor.Z = baseColor.Z + BaseRate.Z;
	if (baseColor.X > 255) {
		baseColor.X = 0;
	}
	if (baseColor.Y > 255) {
		baseColor.Y = 0;
	}
	if (baseColor.Z > 255) {
		baseColor.Z = 0;
	}
	myLight->SetLightColor(convertColor, false);
}

