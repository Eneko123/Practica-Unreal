// Fill out your copyright notice in the Description page of Project Settings.


#include "ClaseCpp.h"

// Sets default values
AClaseCpp::AClaseCpp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(SceneRoot);

	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	Light->SetupAttachment(SceneRoot);

	Light->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	Light->SetIntensity(5000.0f);
}

// Called when the game starts or when spawned
void AClaseCpp::BeginPlay()
{
	Super::BeginPlay();
	int number = 5;
	UE_LOG(LogTemp, Warning, TEXT("--------------------------------------------------------------------------------------------------------------------------------------Number: %d"), number);
}

// Called every frame
void AClaseCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}