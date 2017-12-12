#include "Fight.h"


using namespace std;



Fight::Fight()
{
	
}

int Fight::Fighting(Player p, Monster m){

	if (p.getTotal() > m.getAttack()){
		p.setLvl(p.getLvl() + 1);
	}
	else{
		p.setLvl(p.getLvl() - 1);
	}
	return p.getLvl();
}



Fight::~Fight()
{
}
