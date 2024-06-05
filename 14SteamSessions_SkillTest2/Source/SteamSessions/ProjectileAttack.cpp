// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileAttack.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "C_AIController.h"
#include "C_BasicMonster.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"


// Sets default values
AProjectileAttack::AProjectileAttack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a sphere as a simple collision representation
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(Radius);
	RootComponent = CollisionComponent;

	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectileAttack::OnOverlapBegin);


	// Use this component to drive this projectile's movement.
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovement->SetUpdatedComponent(CollisionComponent);
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	Damage = 20.0f; 
	Duration = 0.5f;

}

// Called when the game starts or when spawned
void AProjectileAttack::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AProjectileAttack::DestroyProjectile, Duration, false);

}

void AProjectileAttack::DestroyProjectile()
{
	Destroy();
}

void AProjectileAttack::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = ShootDirection * ProjectileMovement->InitialSpeed;
}

void AProjectileAttack::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		AC_BasicMonster* Monster = Cast<AC_BasicMonster>(OtherActor);
		if (Monster)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("MonsterHit")));

			Monster->SerTakeDamage(Damage);

			AC_AIController* tmpC = Cast<AC_AIController>(Monster->GetController());
			if (tmpC)
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("MTTTTTTTTTt")));

				tmpC->ServerIncreaseAggro(Cast<AC_TopDownCharacter>(GetOwner()), Damage);
			}


		}
	}


}

// Called every frame
void AProjectileAttack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

