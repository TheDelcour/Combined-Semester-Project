#include "QtGuiApplication3.h"
#include <QMovie>
#include <QPainter>
#include <QPicture>
#include <qtimer.h>


QtGuiApplication3::QtGuiApplication3(QWidget *parent)
	: QMainWindow(parent)
{
	QMovie *empty = new QMovie(":/Pictures/GUI_Pics/empty.png");
	QMovie *female00 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/female0.gif");
	QMovie *background = new QMovie("C:/Users/Tobia/Desktop/FinalBackground1.png");
	QMovie *male00 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/female0.gif");
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

	timer->start(50);
	timer1->start(6000);
	timer2->start(3000);
	QTimer::singleShot(5000, this, SLOT(showFullScreen()));
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
		nextTurn = ipRef.nextTurn;
		itemsP1 = ipRef.itemsP1;
		itemsP2 = ipRef.itemsP2;
		badStuff = ipRef.badStuff;

		QString qsP1lvl = QString::number(p1Lvl);
		QPicture p1_lvl;
		drawtext(qsP1lvl, 90, p1_lvl);
		ui.p1_lvl->setPicture(p1_lvl);

		QString qsP1attack = QString::number(p1Attack);
		QPicture p1_attack;
		drawtext(qsP1attack, 90, p1_attack);
		ui.p1_attack->setPicture(p1_attack);

		int p1total = p1Lvl + p1Attack;
		QString qsP1total = QString::number(p1total);
		QPicture p1_total;
		drawtext(qsP1total, 90, p1_total);
		ui.p1_total->setPicture(p1_total);

		QString qsP2lvl = QString::number(p2Lvl);
		QPicture p2_lvl;
		drawtext(qsP2lvl, -90, p2_lvl);
		ui.p2_lvl->setPicture(p2_lvl);

		QString qsP2attack = QString::number(p2Attack);
		QPicture p2_attack;
		drawtext(qsP2attack, -90, p2_attack);
		ui.p2_attack->setPicture(p2_attack);

		int p2total = p2Lvl + p2Attack;
		QString qsP2total = QString::number(p2total);
		QPicture p2_total;
		drawtext(qsP2total, -90, p2_total);
		ui.p2_total->setPicture(p2_total);

		QString qsM1lvl = QString::number(monsLvl);
		QPicture m1_lvl;
		drawtext(qsM1lvl, 90, m1_lvl);
		ui.m_lvl1->setPicture(m1_lvl);

		QPicture m2_lvl;
		drawtext(qsM1lvl, -90, m2_lvl);
		ui.m_lvl2->setPicture(m2_lvl);

		QString mBadstuff = QString::fromStdString(badStuff);
		QPicture m_bs;
		drawtext(mBadstuff, 90, m_bs);
		ui.p1_badstuff->setPicture(m_bs);

		QPicture m_bs1;
		drawtext(mBadstuff, -90, m_bs1);
		ui.p2_badstuff->setPicture(m_bs1);
	}

	void QtGuiApplication3::UpdateMonster(){
		QMovie *p2Avatar = new QMovie(":/Pictures/GUI_Pics/pholder2.gif");
		QMovie *lizardC = new QMovie(":/Pictures/GUI_Pics/lizardC.gif");
		QMovie *lizardCC = new QMovie(":/Pictures/GUI_Pics/lizardCC.gif");
		QMovie *angry_germanC = new QMovie(":/Pictures/GUI_Pics/angry_germanC.gif");
		QMovie *angry_germanCC = new QMovie(":/Pictures/GUI_Pics/angry_germanCC.gif");
		QMovie *cardboard_manC = new QMovie(":/Pictures/GUI_Pics/cardboard_manC.gif");
		QMovie *cardboard_manCC = new QMovie(":/Pictures/GUI_Pics/cardboard_manCC.gif");
		QMovie *nextTurnP1 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/next_turnP1.png");
		QMovie *nextTurnP2 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/next_turnP2.png");
		QMovie *empty = new QMovie(":/Pictures/GUI_Pics/empty.png");

		//cases for what monster is in play 
		switch (monsterPlayed){
		case 0: ui.monster_gif->setMovie(empty);
				empty->start(); break;
		case 1: switch (turn){
		case 1: ui.monster_gif->setMovie(cardboard_manC);
			cardboard_manC->start(); break;
		case 2: ui.monster_gif->setMovie(cardboard_manCC);
			cardboard_manCC->start(); break;
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
		case 1: ui.monster_gif->setMovie(cardboard_manC);
			cardboard_manC->start(); break;
		case 2: ui.monster_gif->setMovie(cardboard_manCC);
			cardboard_manCC->start(); break;
		} break;
		case 5: switch (turn){
		case 1: ui.monster_gif->setMovie(angry_germanC);
			angry_germanC->start(); break;
		case 2: ui.monster_gif->setMovie(angry_germanCC);
			angry_germanCC->start(); break;
		} break;
		case 6: switch (turn){
		case 1: ui.monster_gif->setMovie(lizardC);
			lizardC->start(); break;
		case 2: ui.monster_gif->setMovie(lizardCC);
			lizardCC->start(); break;
		} break;
		case 7: switch (turn){
		case 1: ui.monster_gif->setMovie(cardboard_manC);
			cardboard_manC->start(); break;
		case 2: ui.monster_gif->setMovie(cardboard_manCC);
			cardboard_manCC->start(); break;
		} break;
		case 8: switch (turn){
		case 1: ui.monster_gif->setMovie(angry_germanC);
			angry_germanC->start(); break;
		case 2: ui.monster_gif->setMovie(angry_germanCC);
			angry_germanCC->start(); break;
		} break;
		}

		switch (turn){
		case 1: if (turn = 1){
			if (nextTurn == true){
				ui.monster_gif->setMovie(nextTurnP1);
				nextTurnP1->start();
			} break;
		}

		case 2:if (nextTurn == true){
			ui.monster_gif->setMovie(nextTurnP2);
			nextTurnP2->start();
		} break;
		}
	}

	void QtGuiApplication3::UpdateClass(){
		QMovie *chow_female0 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/chow_female0c.gif");
		QMovie *chow_female1 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/chow_female1c.gif");
		QMovie *chow_female2 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/chow_female2c.gif");
		QMovie *chow_female3 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/chow_female3c.gif");
		QMovie *chow_female4 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/chow_female4c.gif");
		QMovie *chow_female5 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/chow_female5c.gif");
		QMovie *penguin_female0 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/penguin_female0.gif");
		QMovie *penguin_female1 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/penguin_female1.gif");
		QMovie *penguin_female2 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/penguin_female2.gif");
		QMovie *penguin_female3 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/penguin_female3.gif");
		QMovie *penguin_female4 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/penguin_female4.gif");
		QMovie *penguin_female5 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/penguin_female5.gif");
		QMovie *female0 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/female0.gif");
		QMovie *female1 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/female1.gif");
		QMovie *female2 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/female2.gif");
		QMovie *female3 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/female3.gif");
		QMovie *female4 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/female4.gif");
		QMovie *female5 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/female5.gif");
		QMovie *monkey_female0 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/monkey_female0c.gif");
		QMovie *monkey_female1 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/monkey_female1c.gif");
		QMovie *monkey_female2 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/monkey_female2c.gif");
		QMovie *monkey_female3 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/monkey_female3c.gif");
		QMovie *monkey_female4 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/monkey_female4c.gif");
		QMovie *monkey_female5 = new QMovie("C:/Users/Tobia/Desktop/Combined-Semester-Project-master/QtGuiApplication3/GUI_Pics/monkey_female5c.gif");

		//cases for which class is in play + item
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
	}