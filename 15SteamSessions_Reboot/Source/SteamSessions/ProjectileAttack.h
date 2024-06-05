// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileAttack.generated.h"

UCLASS()
class STEAMSESSIONS_API AProjectileAttack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileAttack();

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Function to initialize the projectile's velocity in the shoot direction.
	void FireInDirection(const FVector& ShootDirection);

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	


	// Projectile movement component
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UProjectileMovementComponent* ProjectileMovement;

	// Collision component
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USphereComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius = 15.0f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage;

	// 공격 지속 시간
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

private:
	FTimerHandle TimerHandle;
	
	void DestroyProjectile();

};
