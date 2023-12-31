// Fill out your copyright notice in the Description page of Project Settings.


#include "Blueprints/MyBall.h"

// Sets default values
AMyBall::AMyBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh"); //스테틱메쉬컴퍼넌트 생성
	StaticMesh->SetSimulatePhysics(true); // 중력을 받는다 피직스시뮬레이션

	SetRootComponent(StaticMesh);

	bReplicates = true;
	SetReplicateMovement(true);


}

// Called when the game starts or when spawned
void AMyBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

