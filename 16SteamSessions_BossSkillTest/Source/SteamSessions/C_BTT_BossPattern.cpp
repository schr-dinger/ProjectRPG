
#include "C_BTT_BossPattern.h"
#include "C_AIController.h"
#include "C_TopDownCharacter.h"
#include "C_BasicMonster.h"
#include "C_AIBehaviorComponent.h"


UC_BTT_BossPattern::UC_BTT_BossPattern()
{
	NodeName = "BossPattern";

}

void UC_BTT_BossPattern::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    AC_AIController* controller = Cast<AC_AIController>(OwnerComp.GetOwner());
    UC_AIBehaviorComponent* behavior = controller->GetBehavior();

    AC_BasicMonster* monster = Cast<AC_BasicMonster>(controller->GetPawn());
    AC_TopDownCharacter* target = behavior->GetPlayer();
    AC_TopDownCharacter* target2 = behavior->GetSub1Player();
    AC_TopDownCharacter* target3 = behavior->GetSub2Player();


    if (target == nullptr)
    {
        return;
    }

    if (target2 == nullptr && target3 == nullptr)
    {
        behavior->ChangeType(EBossPatternType::Skill_1);
    }
    //if (distance < controller->GetAttackRange())
    //{
    //    behavior->ChangeType(EBehaviorType::Attack);
    //    return;
    //}

    //if (distance < controller->GetSightRange())
    //{
    behavior->ChangeType(EBehaviorType::Trace);
    return;
    //}

    //behavior->ChangeType(EBehaviorType::Patrol);


}
