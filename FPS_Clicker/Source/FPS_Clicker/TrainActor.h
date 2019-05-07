// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"	
#include "Runtime/Core/Public/Math/UnrealMathUtility.h"
#include "TrainActor.generated.h"

UCLASS()
class FPS_CLICKER_API ATrainActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrainActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector baseColor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector BaseRate;

	float baseMax;

	//UPointLightComponent myLight;
	class UPointLightComponent* myLight;

	UFUNCTION(BluePrintCallable)
	void UpdateLight();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FLinearColor convertColor;
};
