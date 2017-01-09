// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
	UPROPERTY(VisibleAnywhere) // Put data visible into object in unreal
		float OpenAngle = 90.0f;

	UPROPERTY(EditAnywhere) // Put data editable into object in unreal
		ATriggerVolume* PressurePlate;

	UPROPERTY(EditAnywhere) // Put data editable into object in unreal
		AActor* ActorThatOpens; // remember pawn ( poin en jeu )inherits from   actor

};
