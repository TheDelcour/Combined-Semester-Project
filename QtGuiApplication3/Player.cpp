#include "Player.h"

int PlayerAtt;
int playerLvl;

Player::Player(int PlayAttack, int playLvl)
{
	PlayAttack = PlayerAtt;
	playLvl = playerLvl;
}


Player::~Player()
{
}

void Player::setAttack(int newAttack){
	PlayerAtt = newAttack;
}

int Player::getAttack(){
	return PlayerAtt;
}

void Player::setLvl(int newLvl){
	playerLvl = newLvl;
}

int Player::getLvl(){
	return playerLvl;
}
