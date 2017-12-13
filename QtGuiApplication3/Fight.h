#pragma once
#include "Player.h"
#include "Monster.h"
class Fight
{
public:
	Fight();
	int fightResult;
	int Fighting(Player p, Monster m);
	~Fight();
};

