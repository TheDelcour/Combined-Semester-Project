#include "Monster.h"

using namespace std;


Monster::Monster(int monsterPlayed)
{
	switch (monsterPlayed) {
	case 0: MonName = ""; mAttack = 0; mBadStuff = ""; break;
	case 1: MonName = "evil pot"; mAttack = 2; mBadStuff = "Lose your class"; break;
	case 2: MonName = "Angry German"; mAttack = 5; mBadStuff = "Lose 1 gear item"; break;
	case 3: MonName = "lizard";  mAttack = 7; mBadStuff = "Lose 1 gear item"; break;
	case 4: MonName = "Dragon"; mAttack = 10; mBadStuff = "Lose 1 inventory item"; break;
	case 5: MonName = "Raging German"; mAttack = 12; mBadStuff = "Lose 2 inventory items"; break;
	case 6: MonName = "Huge Lizard"; mAttack = 15, mBadStuff = "Lose 2 gear items"; break;
	case 7: MonName = "Elemental lord of cardboards"; mAttack = 19; mBadStuff = "Lose your inventory"; break;
	case 8: MonName = "Plant"; mAttack = 23; mBadStuff = "YOU DIE"; break;
	}
}


Monster::~Monster()
{
}

void Monster::setAttack(int newAttack){
	mAttack = newAttack;
}

int Monster::getAttack(){
	return mAttack;
}

string Monster::getBadStuff(){
	return mBadStuff;
}

int Monster::ExtractMonsterTemplateId(TemplateMatching monster) {
	int monsterPlayed = 0;
	for (int i = 0; i < 16; i++)
	{
		if (monster.temp[i])
			switch (i) {
			case 0: monsterPlayed = 1; break;
			case 1: monsterPlayed = 2; break;
			case 2: monsterPlayed = 3; break;
			case 3: monsterPlayed = 4; break;
			case 4: monsterPlayed = 5; break;
			case 5: monsterPlayed = 6; break;
			case 6: monsterPlayed = 7; break;
			case 7: monsterPlayed = 8; break;
		}
	}
	return monsterPlayed;
}

int Monster::ExtractClassTemplateId(TemplateMatching playerClass) {
	int classPlayed = 0;
	for (int i = 0; i < 16; i++)
	{
		if (playerClass.temp[i])
			switch (i) {
			case 0: classPlayed = 0; break;
			case 3: classPlayed = 1; break;
			case 5: classPlayed = 2; break;
			case 6: classPlayed = 3; break;
		}
	}
	return classPlayed;
}