#include "Fight.h"


using namespace std;



Fight::Fight()
{
	
}

int Fight::Fighting(Player p, Monster m){

	if (p.getTotal() > m.getAttack()){
		fightResult = 1;
	}
	if(p.getTotal() <= m.getAttack()){
		fightResult = 0;
	}
	return fightResult;
}



Fight::~Fight()
{
}
