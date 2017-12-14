#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication3.h"
#include <QPainter>
#include <QPicture>
#include <QObject>
#include <QMovie>
#include <qtimer.h>
#include "ImageProcessing.h"

class QtGuiApplication3 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication3(QWidget *parent = Q_NULLPTR);
	ImageProcessing ipRef;
	int monsterPlayed;
	int turn;
	int p1Attack;
	int p1Lvl;
	int p2Lvl;
	int p2Attack;
	int monsLvl;
	int classP1;
	int classP2;
	int itemsP1;
	int itemsP2;
	string badStuff;
	int gameOver;

	void drawtext(QString s, int degree, QPicture qp){
		QFont font;
		font.setPixelSize(25);
		QPainter p(&qp);
		p.translate(40, 40);
		p.rotate(degree);
		p.setFont(font);
		p.drawText(QPoint(0, 0), s);
		p.save();
		p.end();
	}

	void drawtext1(QString s, int degree, QPicture qp){
		QFont font;
		font.setPixelSize(14);
		font.setBold(true);
		QPainter p(&qp);
		p.translate(40, 40);
		p.rotate(degree);
		p.setFont(font);
		p.drawText(QPoint(0, 0), s);
		p.save();
		p.end();
	}

public slots:
	void UpdateP1Lvl();
	void UpdateMonster();
	void UpdateClass();

private:
	Ui::QtGuiApplication3Class ui;
	QMovie *lizardC = new QMovie(":/Pictures/GUI_Pics/lizardC.gif");
	QMovie *lizardCC = new QMovie(":/Pictures/GUI_Pics/lizardCC.gif");
	QMovie *angry_germanC = new QMovie(":/Pictures/GUI_Pics/angry_germanC.gif");
	QMovie *angry_germanCC = new QMovie(":/Pictures/GUI_Pics/angry_germanCC.gif");
	QMovie *cardboard_manC = new QMovie(":/Pictures/GUI_Pics/cardboard_manC.gif");
	QMovie *cardboard_manCC = new QMovie(":/Pictures/GUI_Pics/cardboard_manCC.gif");
	QMovie *nextTurnP1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/next_turnP1.png");
	QMovie *nextTurnP2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/next_turnP2.png");
	QMovie *dragonC = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/dragonc.gif");
	QMovie *dragonCC = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/dragoncc.gif");
	QMovie *evil_potC = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/evil_potc.gif");
	QMovie *evil_potCC = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/evil_potcc.gif");
	QMovie *empty = new QMovie(":/Pictures/GUI_Pics/empty.png");
	QMovie *female00 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/female0.gif");
	QMovie *background = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/FinalBackground3.png");
	QMovie *male00 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/male0.gif");
	QMovie *p1wins = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/p1wins.png");
	QMovie *p2wins = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/p2wins.png");
	QMovie *mBackgroundT1 = new QMovie(":/Pictures/GUI_Pics/GifBackground90c.png");
	QMovie *mBackgroundT2 = new QMovie(":/Pictures/GUI_Pics/GifBackgroundcc.png");
	QMovie *chow_female0 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_female0c.gif");
	QMovie *chow_female1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_female1c.gif");
	QMovie *chow_female2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_female2c.gif");
	QMovie *chow_female3 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_female3c.gif");
	QMovie *chow_female4 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_female4c.gif");
	QMovie *chow_female5 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_female5c.gif");
	QMovie *penguin_female0 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_female0.gif");
	QMovie *penguin_female1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_female1.gif");
	QMovie *penguin_female2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_female2.gif");
	QMovie *penguin_female3 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_female3.gif");
	QMovie *penguin_female4 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_female4.gif");
	QMovie *penguin_female5 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_female5.gif");
	QMovie *female0 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/female0.gif");
	QMovie *female1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/female1.gif");
	QMovie *female2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/female2.gif");
	QMovie *female3 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/female3.gif");
	QMovie *female4 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/female4.gif");
	QMovie *female5 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/female5.gif");
	QMovie *monkey_female0 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_female0c.gif");
	QMovie *monkey_female1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_female1c.gif");
	QMovie *monkey_female2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_female2c.gif");
	QMovie *monkey_female3 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_female3c.gif");
	QMovie *monkey_female4 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_female4c.gif");
	QMovie *monkey_female5 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_female5c.gif");
	QMovie *chow_male0 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_male0.gif");
	QMovie *chow_male1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_male1.gif");
	QMovie *chow_male2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_male2.gif");
	QMovie *chow_male3 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_male3.gif");
	QMovie *chow_male4 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_male4.gif");
	QMovie *chow_male5 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/chow_male5.gif");
	QMovie *penguin_male0 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_male0.gif");
	QMovie *penguin_male1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_male1.gif");
	QMovie *penguin_male2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_male2.gif");
	QMovie *penguin_male3 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_male3.gif");
	QMovie *penguin_male4 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_male4.gif");
	QMovie *penguin_male5 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/penguin_male5.gif");
	QMovie *male0 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/male0.gif");
	QMovie *male1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/male1.gif");
	QMovie *male2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/male2.gif");
	QMovie *male3 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/male3.gif");
	QMovie *male4 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/male4.gif");
	QMovie *male5 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/male5.gif");
	QMovie *monkey_male0 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_male0.gif");
	QMovie *monkey_male1 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_male1.gif");
	QMovie *monkey_male2 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_male2.gif");
	QMovie *monkey_male3 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_male3.gif");
	QMovie *monkey_male4 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_male4.gif");
	QMovie *monkey_male5 = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/monkey_male5.gif");

};
