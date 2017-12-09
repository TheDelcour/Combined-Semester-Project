#include "TemplateCombiner.h"


TemplateCombiner::TemplateCombiner()
{
}

int TemplateCombiner::GetAttackFromGear(TemplateMatching gear){
	int attack = 0;
	for (int i = 0; i < 16; i++)
	{
		if (gear.temp[i]) {
			switch (i) {
			case 0: attack += 3; break;
			case 1: attack += 2; break;
			}
		}
	}
	return attack;
}

int TemplateCombiner::GetAttackFromBuffs(TemplateMatching buffs){
	int attack = 0;
	for (int i = 0; i < 16; i++)
	{
		if (buffs.temp[i]) {
			switch (i) {
			case 0: attack += 3; break;
			case 1: attack -= 3; break;
			case 2: attack -= 5; break;
			}
		}
	}
	return attack;
}

int TemplateCombiner::ExtractMonsterTemplateId(TemplateMatching monster) {
	for (int i = 0; i < 16; i++)
	{
		if (monster.temp[i])
			return monster.temp[1];
	}
	return -1;
}

int TemplateCombiner::CalculateMunchkinAttack(TemplateMatching gear1, TemplateMatching gear2, TemplateMatching ownBuffZone, TemplateMatching enemyBuffZone){
	return GetAttackFromGear(gear1) + GetAttackFromGear(gear2) + GetAttackFromBuffs(ownBuffZone) + GetAttackFromBuffs(enemyBuffZone);
}

int TemplateCombiner::CalculateMonsterAttack(TemplateMatching monster, TemplateMatching ownMonsterZone, TemplateMatching enemyMonsterZone) {
	//Monster mob = Monster(ExtractMonsterTemplateId(monster));
	//Monster er en klasse der tager en int som constructor parameter. Baseret på denne int sættes vores monster klasses stats = navn, gif, attack, badStuff text.
	// return mob.attack + GetAttackFromBuffs(ownMonsterZone) + GetAttackFromBuffs(enemyBuffZone);
	// Det kan overvejes om instantiering af monster, skal laves udenfor dette kald, og selve monster variablen skal med ind som paramter
			// I så fald flyttes ExtractMonsterTemplateId funktionen et andet sted hen.


	return -1;
}