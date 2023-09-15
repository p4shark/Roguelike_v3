// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

UCLASS()
class ROGUELIKE_V3_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeaponBase();
	AWeaponBase(float Dmg);
	//Static Mesh Weapon
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* WeaponMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Attack Radius ours weapon
	UPROPERTY(EditAnywhere)
	float AttackRadius;
	//Damage from Attack
	UPROPERTY(EditAnywhere)
	float Damage;

	//Type (0 — meele, 1 — range)
	UPROPERTY(EditAnywhere)
	int Type;
	UFUNCTION(BlueprintCallable)
	float GetDamage() const;
};
