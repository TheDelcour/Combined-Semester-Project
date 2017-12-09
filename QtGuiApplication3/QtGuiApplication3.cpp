#include "QtGuiApplication3.h"
#include <QMovie>
#include <QPainter>
#include <QPicture>
#include <qtimer.h>


QtGuiApplication3::QtGuiApplication3(QWidget *parent)
	: QMainWindow(parent)
{
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(UpdateP1Lvl()));
	

	QMovie *p2Avatar = new QMovie(":/Pictures/GUI_Pics/pholder2.gif");
	QMovie *lizardC = new QMovie(":/Pictures/GUI_Pics/lizardC.gif");
	QMovie *lizardCC = new QMovie(":/Pictures/GUI_Pics/lizardCC.gif");
	QMovie *angry_germanC = new QMovie(":/Pictures/GUI_Pics/angry_germanC.gif");
	QMovie *angry_germanCC = new QMovie(":/Pictures/GUI_Pics/angry_germanCC.gif");
	QMovie *cardboard_manC = new QMovie(":/Pictures/GUI_Pics/cardboard_manC.gif");
	QMovie *cardboard_manCC = new QMovie(":/Pictures/GUI_Pics/cardboard_manCC.gif");

	ui.setupUi(this);

	ui.p2_avatar->setMovie(p2Avatar);
	p2Avatar->start();
	
	switch (monsterPlayed){
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
	}

	//cases for what monster is in play 



	// used for rotating objects in the gui 
	int p1lvl = 4;
	QString qsP1lvl = QString::number(p1Lvl, 10);
	QPicture p1_lvl;
	drawtext(qsP1lvl, 90, p1_lvl);
	ui.p1_lvl->setPicture(p1_lvl);

	int p1attack = 16;
	QString qsP1attack = QString::number(p1Attack);

	QPicture p1_attack;
	drawtext(qsP1attack, 90, p1_attack);
	ui.p1_attack->setPicture(p1_attack);

	int p1total = p1Lvl + p1Attack;
	QString qsP1total = QString::number(p1total);
	QPicture p1_total;
	drawtext(qsP1total, 90, p1_total);
	ui.p1_total->setPicture(p1_total);

	int p2lvl = 8;
	QString qsP2lvl = QString::number(p2lvl);

	QPicture p2_lvl;
	drawtext(qsP2lvl, -90, p2_lvl);
	ui.p2_lvl->setPicture(p2_lvl);


	int p2attack = 12;
	QString qsP2attack = QString::number(p2attack);

	QPicture p2_attack;
	drawtext(qsP2attack, -90, p2_attack);
	ui.p2_attack->setPicture(p2_attack);

	int p2total = p2lvl + p2attack;
	QString qsP2total = QString::number(p2total);
	QPicture p2_total;
	drawtext(qsP2total, -90, p2_total);
	ui.p2_total->setPicture(p2_total);

	int m1lvl = 13;
	QString qsM1lvl = QString::number(m1lvl);
	QPicture m1_lvl;
	drawtext(qsM1lvl, 90, m1_lvl);
	ui.m_lvl1->setPicture(m1_lvl);


	QPicture m2_lvl;
	drawtext(qsM1lvl, -90, m2_lvl);
	ui.m_lvl2->setPicture(m2_lvl);

	QString mBadstuff = "Lose your footgear";
	QPicture m_bs;
	drawtext(mBadstuff, 90, m_bs);
	ui.p1_badstuff->setPicture(m_bs);

	QPicture m_bs1;
	drawtext(mBadstuff, -90, m_bs1);
	ui.p2_badstuff->setPicture(m_bs1);

	timer->start(6000);
}

void QtGuiApplication3::UpdateP1Lvl() {
	QString qsP1lvl = QString::number(p1Lvl, 10);
	QPicture p1_lvl;
	drawtext(qsP1lvl, 90, p1_lvl);
	ui.p1_lvl->setPicture(p1_lvl);
	p1Lvl = p1Lvl + 1;
}
