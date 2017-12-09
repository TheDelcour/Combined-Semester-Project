#include "Monster.h"

class TemplateCombiner1
{
public:
	TemplateCombiner1();
	int CalculateMunchkinAttack(TemplateMatching gear1, TemplateMatching gear2, TemplateMatching ownBuffZone, TemplateMatching enemyBuffZone);
	int CalculateMonsterAttack(Monster monster, TemplateMatching ownMonsterZone, TemplateMatching enemyMonsterZone);
private:
	int GetAttackFromGear(TemplateMatching gear);
	int GetAttackFromBuffs(TemplateMatching buffs);
};

