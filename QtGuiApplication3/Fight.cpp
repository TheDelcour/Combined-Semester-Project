#include "Fight.h"


using namespace std;



Fight::Fight()
{
	
}

int Fight::Fighting(int PlayerDmg, int MonsterDmg, int lvl){

	if (PlayerDmg > MonsterDmg){
		lvl + 1;
	}
	else{
		lvl - 1;
	}
	return lvl;
}



Fight::~Fight()
{
}
