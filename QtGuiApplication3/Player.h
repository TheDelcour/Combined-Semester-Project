#pragma once

class Player
{
public:
	Player();
	Player::Player(int PlayAttack, int playLvl);
	int PlayerAtt;
	int playerLvl;
	void Player::setAttack(int newAttack);
	int Player::getAttack();
	void Player::setLvl(int Lvl);
	int Player::getLvl();
	~Player();
};

