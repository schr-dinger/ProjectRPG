// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Attack.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "C_AIController.h"
#include "C_BasicMonster.h"
#include "C_TopDownCharacter.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
AC_Attack::AC_Attack()
{
    PrimaryActorTick.bCanEverTick = true;

    collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
    collider->SetCapsuleSize(Radius, HalfHeight);
    collider->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    RootComponent = collider;

    // 충돌 이벤트 바인딩
    collider->OnComponentBeginOverlap.AddDynamic(this, &AC_Attack::OnOverlapBegin);

    Damage = 20.0f; // 기본 피해량 설정
    Duration = 0.5f; // 공격 지속 시간 설정

}

void AC_Attack::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != this)
    {
        if (isMonster)
        {
            AC_TopDownCharacter* Player = Cast<AC_TopDownCharacter>(OtherActor);
            if (Player)
            {
                GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("PlayerHit")));

                Player->TakeDamage(Damage);

            }

        }
        else
        {
            AC_BasicMonster* Monster = Cast<AC_BasicMonster>(OtherActor);
            if (Monster)
            {
                GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("MonsterHit")));

                Monster->SerTakeDamage(Damage);

                AC_AIController* tmpC = Cast<AC_AIController>(Monster->GetController());
                if (tmpC)
                {
                    tmpC->ServerIncreaseAggro(Cast<AC_TopDownCharacter>(GetOwner()), Damage);
                }


            }

        }
    }

}

// Called when the game starts or when spawned
void AC_Attack::BeginPlay()
{
	Super::BeginPlay();
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AC_Attack::DestroySlash, Duration, false);

}

// Called every frame
void AC_Attack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (isOnCoolDown)
    {
        time += DeltaTime;

        if (time > CoolTime)
        {
            time = 0.0f;
            isOnCoolDown = false;
        }
    }


}

void AC_Attack::DestroySlash()
{
    Destroy();
}

