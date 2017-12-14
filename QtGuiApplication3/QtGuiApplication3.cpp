#include "QtGuiApplication3.h"




QtGuiApplication3::QtGuiApplication3(QWidget *parent)
	: QMainWindow(parent)
{
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(UpdateP1Lvl()));
	QTimer *timer1 = new QTimer(this);
	connect(timer1, SIGNAL(timeout()), this, SLOT(UpdateMonster()));
	QTimer *timer2 = new QTimer(this);
	connect(timer2, SIGNAL(timeout()), this, SLOT(UpdateClass()));

	ui.setupUi(this);

	ui.p1_avatar->setMovie(female00);
	female00->start();
	ui.monster_gif->setMovie(empty);
	empty->start();
	ui.p2_avatar->setMovie(male00);
	male00->start();
	ui.background->setMovie(background);
	background->start();

	timer->start(200);
	timer1->start(200);
	timer2->start(200);
	QTimer::singleShot(4000, this, SLOT(showFullScreen()));
}

	void QtGuiApplication3::UpdateP1Lvl() {
		p1Lvl = ipRef.p1Lvl;
		p1Attack = ipRef.p1Attack;
		p2Attack = ipRef.p2Attack;
		p2Lvl = ipRef.p2Lvl;
		monsLvl = ipRef.monsLvl;
		monsterPlayed = ipRef.monsterPlayed;
		classP1 = ipRef.classPlayedP1;
		classP2 = ipRef.classPlayedP2;
		turn = ipRef.turn;
		itemsP1 = ipRef.itemsP1;
		itemsP2 = ipRef.itemsP2;
		badStuff = ipRef.badStuff;
		gameOver = ipRef.gameOver;
		

		QString qsP1lvl = QString::number(p1Lvl);
		QPicture p1_lvl;
		drawtext(qsP1lvl, 90, p1_lvl);
		ui.p1_lvl->clear();
		ui.p1_lvl->setPicture(p1_lvl);

		QString qsP1attack = QString::number(p1Attack);
		QPicture p1_attack;
		drawtext(qsP1attack, 90, p1_attack);
		ui.p1_attack->clear();
		ui.p1_attack->setPicture(p1_attack);

		int p1total = p1Lvl + p1Attack;
		QString qsP1total = QString::number(p1total);
		QPicture p1_total;
		drawtext(qsP1total, 90, p1_total);
		ui.p1_total->clear();
		ui.p1_total->setPicture(p1_total);

		QString qsP2lvl = QString::number(p2Lvl);
		QPicture p2_lvl;
		drawtext(qsP2lvl, -90, p2_lvl);
		ui.p2_lvl->clear();
		ui.p2_lvl->setPicture(p2_lvl);

		QString qsP2attack = QString::number(p2Attack);
		QPicture p2_attack;
		drawtext(qsP2attack, -90, p2_attack);
		ui.p2_attack->clear();
		ui.p2_attack->setPicture(p2_attack);

		int p2total = p2Lvl + p2Attack;
		QString qsP2total = QString::number(p2total);
		QPicture p2_total;
		drawtext(qsP2total, -90, p2_total);
		ui.p2_total->clear();
		ui.p2_total->setPicture(p2_total);

		QString qsM1lvl = QString::number(monsLvl);
		QPicture m1_lvl;
		drawtext(qsM1lvl, 90, m1_lvl);
		ui.m_lvl1->clear();
		ui.m_lvl1->setPicture(m1_lvl);

		QPicture m2_lvl;
		drawtext(qsM1lvl, -90, m2_lvl);
		ui.m_lvl2->clear();
		ui.m_lvl2->setPicture(m2_lvl);

		QString mBadstuff = QString::fromStdString(badStuff);
		QPicture m_bs;
		drawtext(mBadstuff, 90, m_bs);
		ui.p1_badstuff->clear();
		ui.p1_badstuff->setPicture(m_bs);

		QPicture m_bs1;
		drawtext(mBadstuff, -90, m_bs1);
		ui.p2_badstuff->clear();
		ui.p2_badstuff->setPicture(m_bs1);

	
		if (gameOver == 1){
			ui.monster_gif->setMovie(p1wins);
			p1wins->start();
		}
		if (gameOver == 2){
			ui.monster_gif->setMovie(p2wins);
			p2wins->start();
		}

		switch (turn){
		case 1:
			ui.m_background->setMovie(mBackgroundT1);
			mBackgroundT1->start(); break;

		case 2:
			ui.m_background->setMovie(mBackgroundT2);
			mBackgroundT2->start(); break;
		}
		/*delete p2wins;
		delete p1wins;
		delete mBackgroundT1;
		delete mBackgroundT2;*/
	}

	void QtGuiApplication3::UpdateMonster(){

		//cases for what monster is in play 
		switch (monsterPlayed){
		case 0: ui.monster_gif->setMovie(empty);
				empty->start(); break;
		case 1: switch (turn){
		case 1: ui.monster_gif->setMovie(evil_potC);
			evil_potC->start(); break;
		case 2: ui.monster_gif->setMovie(evil_potCC);
			evil_potCC->start(); break;
		} break;
		case 2: switch (turn){
		case 1: ui.monster_gif->setMovie(angry_germanC);
			angry_germanC->start(); break;
		case 2: ui.monster_gif->setMovie(angry_germanCC);
			angry_germanCC->start(); break;
		} break;
		case 3: switch (turn){
		case 1: ui.monster_gif->setMovie(lizardC);
			lizardC->start(); break;
		case 2: ui.monster_gif->setMovie(lizardCC);
			lizardCC->start(); break;
		} break;
		case 4: switch (turn){
		case 1: ui.monster_gif->setMovie(dragonC);
			dragonC->start(); break;
		case 2: ui.monster_gif->setMovie(dragonCC);
			dragonCC->start(); break;
		} break;
		case 5: switch (turn){
		case 1: ui.monster_gif->setMovie(cardboard_manC);
			cardboard_manC->start(); break;
		case 2: ui.monster_gif->setMovie(cardboard_manCC);
			cardboard_manCC->start(); break;
		} break;
		case 6: switch (turn){
		case 1: ui.monster_gif->setMovie(evil_potC);
			evil_potC->start(); break;
		case 2: ui.monster_gif->setMovie(evil_potCC);
			evil_potCC->start(); break;
		} break;
		case 7: switch (turn){
		case 1: ui.monster_gif->setMovie(cardboard_manC);
			cardboard_manC->start(); break;
		case 2: ui.monster_gif->setMovie(cardboard_manCC);
			cardboard_manCC->start(); break;
		} break;
		case 8: switch (turn){
		case 1: ui.monster_gif->setMovie(dragonC);
			dragonC->start(); break;
		case 2: ui.monster_gif->setMovie(dragonCC);
			dragonCC->start(); break;
		} break;
		}
		/*delete cardboard_manC;
		delete cardboard_manCC;
		delete dragonC;
		delete dragonCC;
		delete evil_potC;
		delete evil_potCC;
		delete angry_germanC;
		delete angry_germanCC;
		delete lizardC;
		delete lizardCC;
		delete nextTurnP1;
		delete nextTurnP2;*/
	}

	void QtGuiApplication3::UpdateClass(){
		
		//cases for which class is in play + item p1
		switch (classP1){
		case 0: switch (itemsP1){
		case 0: ui.p1_avatar->setMovie(female0);
			female0->start(); break;
		case 1: ui.p1_avatar->setMovie(female1);
			female1->start(); break;
		case 2: ui.p1_avatar->setMovie(female2);
			female2->start(); break;
		case 3: ui.p1_avatar->setMovie(female3);
			female3->start(); break;
		case 4: ui.p1_avatar->setMovie(female4);
			female4->start(); break;
		case 5: ui.p1_avatar->setMovie(female5);
			female5->start(); break;
		} break;

		case 1: switch (itemsP1){
		case 0: ui.p1_avatar->setMovie(chow_female0);
			chow_female0->start(); break;
		case 1: ui.p1_avatar->setMovie(chow_female1);
			chow_female1->start(); break;
		case 2: ui.p1_avatar->setMovie(chow_female2);
			chow_female2->start(); break;
		case 3: ui.p1_avatar->setMovie(chow_female3);
			chow_female3->start(); break;
		case 4: ui.p1_avatar->setMovie(chow_female4);
			chow_female4->start(); break;
		case 5: ui.p1_avatar->setMovie(chow_female5);
			chow_female5->start(); break;
		} break;

		case 2: switch (itemsP1){
		case 0: ui.p1_avatar->setMovie(monkey_female0);
			monkey_female0->start(); break;
		case 1: ui.p1_avatar->setMovie(monkey_female1);
			monkey_female1->start(); break;
		case 2: ui.p1_avatar->setMovie(monkey_female2);
			monkey_female2->start(); break;
		case 3: ui.p1_avatar->setMovie(monkey_female3);
			monkey_female3->start(); break;
		case 4: ui.p1_avatar->setMovie(monkey_female4);
			monkey_female4->start(); break;
		case 5: ui.p1_avatar->setMovie(monkey_female5);
			monkey_female5->start(); break;
		} break;

		case 3: switch (itemsP1){
		case 0: ui.p1_avatar->setMovie(penguin_female0);
			penguin_female0->start(); break;
		case 1: ui.p1_avatar->setMovie(penguin_female1);
			penguin_female1->start(); break;
		case 2: ui.p1_avatar->setMovie(penguin_female2);
			penguin_female2->start(); break;
		case 3: ui.p1_avatar->setMovie(penguin_female3);
			penguin_female3->start(); break;
		case 4: ui.p1_avatar->setMovie(penguin_female4);
			penguin_female4->start(); break;
		case 5: ui.p1_avatar->setMovie(penguin_female5);
			penguin_female5->start(); break;
		} break;
			break;
		}

		//cases player 2 class
		switch (classP2){
		case 0: switch (itemsP2){
		case 0: ui.p2_avatar->setMovie(male0);
			male0->start(); break;
		case 1: ui.p2_avatar->setMovie(male1);
			male1->start(); break;
		case 2: ui.p2_avatar->setMovie(male2);
			male2->start(); break;
		case 3: ui.p2_avatar->setMovie(male3);
			male3->start(); break;
		case 4: ui.p2_avatar->setMovie(male4);
			male4->start(); break;
		case 5: ui.p2_avatar->setMovie(male5);
			male5->start(); break;
		} break;

		case 1: switch (itemsP2){
		case 0: ui.p2_avatar->setMovie(chow_male0);
			chow_male0->start(); break;
		case 1: ui.p2_avatar->setMovie(chow_male1);
			chow_male1->start(); break;
		case 2: ui.p2_avatar->setMovie(chow_male2);
			chow_male2->start(); break;
		case 3: ui.p2_avatar->setMovie(chow_male3);
			chow_male3->start(); break;
		case 4: ui.p2_avatar->setMovie(chow_male4);
			chow_male4->start(); break;
		case 5: ui.p2_avatar->setMovie(chow_male5);
			chow_male5->start(); break;
		} break;

		case 2: switch (itemsP2){
		case 0: ui.p2_avatar->setMovie(monkey_male0);
			monkey_male0->start(); break;
		case 1: ui.p2_avatar->setMovie(monkey_male1);
			monkey_male1->start(); break;
		case 2: ui.p2_avatar->setMovie(monkey_male2);
			monkey_male2->start(); break;
		case 3: ui.p2_avatar->setMovie(monkey_male3);
			monkey_male3->start(); break;
		case 4: ui.p2_avatar->setMovie(monkey_male4);
			monkey_male4->start(); break;
		case 5: ui.p2_avatar->setMovie(monkey_male5);
			monkey_male5->start(); break;
		} break;

		case 3: switch (itemsP2){
		case 0: ui.p2_avatar->setMovie(penguin_male0);
			penguin_male0->start(); break;
		case 1: ui.p2_avatar->setMovie(penguin_male1);
			penguin_male1->start(); break;
		case 2: ui.p2_avatar->setMovie(penguin_male2);
			penguin_male2->start(); break;
		case 3: ui.p2_avatar->setMovie(penguin_male3);
			penguin_male3->start(); break;
		case 4: ui.p2_avatar->setMovie(penguin_male4);
			penguin_male4->start(); break;
		case 5: ui.p2_avatar->setMovie(penguin_male5);
			penguin_male5->start(); break;
		} break;
			break;
		}
	}