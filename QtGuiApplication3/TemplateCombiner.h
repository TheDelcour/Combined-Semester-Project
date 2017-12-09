#include "TemplateMatching.h"

class TemplateCombiner
{
public:
	TemplateCombiner();
	int CalculateMunchkinAttack(TemplateMatching gear1, TemplateMatching gear2, TemplateMatching ownBuffZone, TemplateMatching enemyBuffZone);
	int CalculateMonsterAttack(TemplateMatching monster, TemplateMatching ownMonsterZone, TemplateMatching enemyMonsterZone);
private:
	int GetAttackFromGear(TemplateMatching gear);
	int GetAttackFromBuffs(TemplateMatching buffs);
	int ExtractMonsterTemplateId(TemplateMatching monster);
};

