#pragma once
#include <string>
#include "TemplateMatching.h"

using namespace std;

class Monster
{
public:
	Monster();
	Monster(int monsterPlayed);
	string MonName;
	int mAttack;
	string mBadStuff;
	void Monster::setAttack(int newAttack);
	int Monster::getAttack();
	string getBadStuff();
	int ExtractMonsterTemplateId(TemplateMatching monster);
	int ExtractClassTemplateId(TemplateMatching playerClass);
	~Monster();
};

