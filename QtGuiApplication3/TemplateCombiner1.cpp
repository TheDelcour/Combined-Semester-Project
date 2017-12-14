#include "TemplateCombiner1.h"

TemplateCombiner1::TemplateCombiner1()
{
}

int TemplateCombiner1::GetAttackFromGear(TemplateMatching gear){
	int attack = 0;
	for (int i = 0; i < 16; i++)
	{
		if (gear.temp[i]) {
			switch (i) {
			case 2: attack += 1; break;
			case 3: attack += 2; break;
			case 4: attack += 3; break;
			case 5: attack += 5; break;
			case 6: attack += 7; break;
			}
		}
	}
	return attack;
}

int TemplateCombiner1::GetAttackFromBuffs(TemplateMatching buffs){
	int attack = 0;
	for (int i = 0; i < 16; i++)
	{
		if (buffs.temp[i]) {
			switch (i) {
			case 0: attack += 2; break;
			case 1: attack += 5; break;
			case 3: attack -= 2; break;
			case 6: attack -= 5; break;
			}
		}
	}
	return attack;
}

int TemplateCombiner1::CalculateMunchkinAttack(TemplateMatching gear1, TemplateMatching gear2, TemplateMatching ownBuffZone, TemplateMatching enemyBuffZone){
	return GetAttackFromGear(gear1) + GetAttackFromGear(gear2) + GetAttackFromBuffs(ownBuffZone) + GetAttackFromBuffs(enemyBuffZone);
}

int TemplateCombiner1::CalculateMonsterAttack(Monster monster, TemplateMatching ownMonsterZone, TemplateMatching enemyMonsterZone) {
	//Monster mob = Monster(ExtractMonsterTemplateId(monsterZone));
	//Monster er en klasse der tager en int som constructor parameter. Baseret på denne int sættes vores monster klasses stats = navn, gif, attack, badStuff text.
	return monster.mAttack + GetAttackFromBuffs(ownMonsterZone) + GetAttackFromBuffs(enemyMonsterZone);
	// Det kan overvejes om instantiering af monster, skal laves udenfor dette kald, og selve monster variablen skal med ind som paramter
	// I så fald flyttes ExtractMonsterTemplateId funktionen et andet sted hen.
}