// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"

#include "CPP_BombillaFlotante.generated.h"

UCLASS()
class PIII_ANE02_API ACPP_BombillaFlotante : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_BombillaFlotante();

	UPROPERTY(EditAnywhere, Category = "BombillaFlotante")
	TObjectPtr<USceneComponent> SceneRoot;

	UPROPERTY(EditAnywhere, Category = "BombillaFlotante")
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(EditAnywhere, Category = "BombillaFlotante")
	TObjectPtr<UPointLightComponent> Light;

	/*UPROPERTY(EditAnywhere, Category = "BombillaFlotante")
	PrimaryActorTick.bCanEverTick = true;*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
