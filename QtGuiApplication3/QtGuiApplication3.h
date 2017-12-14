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
	QMovie *background = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/FinalBackground5.png");
	QMovie *p1wins = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/p1wins.png");
	QMovie *p2wins = new QMovie("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/p2wins.png");
	QMovie *mBackgroundT1 = new QMovie(":/Pictures/GUI_Pics/GifBackground90c.png");
	QMovie *mBackgroundT2 = new QMovie(":/Pictures/GUI_Pics/GifBackgroundcc.png");
	QMovie *chow_female0 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_chow0.gif");
	QMovie *chow_female1 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_chow1.gif");
	QMovie *chow_female2 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_chow2.gif");
	QMovie *chow_female3 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_chow3.gif");
	QMovie *chow_female4 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_chow4.gif");
	QMovie *chow_female5 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_chow5.gif");
	QMovie *penguin_female0 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_penguin0.gif");
	QMovie *penguin_female1 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_penguin1.gif");
	QMovie *penguin_female2 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_penguin2.gif");
	QMovie *penguin_female3 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_penguin3.gif");
	QMovie *penguin_female4 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_penguin4.gif");
	QMovie *penguin_female5 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_penguin5.gif");
	QMovie *female0 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female00.gif");
	QMovie *female1 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female11.gif");
	QMovie *female2 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female22.gif");
	QMovie *female3 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female33.gif");
	QMovie *female4 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female44.gif");
	QMovie *female5 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female55.gif");
	QMovie *monkey_female0 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_monkey0.gif");
	QMovie *monkey_female1 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_monkey1.gif");
	QMovie *monkey_female2 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_monkey2.gif");
	QMovie *monkey_female3 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_monkey3.gif");
	QMovie *monkey_female4 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_monkey4.gif");
	QMovie *monkey_female5 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/female_monkey5.gif");
	QMovie *chow_male0 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_chow0.gif");
	QMovie *chow_male1 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_chow1.gif");
	QMovie *chow_male2 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_chow2.gif");
	QMovie *chow_male3 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_chow3.gif");
	QMovie *chow_male4 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_chow4.gif");
	QMovie *chow_male5 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_chow5.gif");
	QMovie *penguin_male0 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_penguin0.gif");
	QMovie *penguin_male1 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_penguin1.gif");
	QMovie *penguin_male2 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_penguin2.gif");
	QMovie *penguin_male3 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_penguin3.gif");
	QMovie *penguin_male4 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_penguin4.gif");
	QMovie *penguin_male5 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_penguin5.gif");
	QMovie *male0 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male00.gif");
	QMovie *male1 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male11.gif");
	QMovie *male2 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male22.gif");
	QMovie *male3 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male33.gif");
	QMovie *male4 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male44.gif");
	QMovie *male5 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male55.gif");
	QMovie *monkey_male0 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_monkey0.gif");
	QMovie *monkey_male1 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_monkey1.gif");
	QMovie *monkey_male2 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_monkey2.gif");
	QMovie *monkey_male3 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_monkey3.gif");
	QMovie *monkey_male4 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_monkey4.gif");
	QMovie *monkey_male5 = new QMovie("C:/Users/Tobia/OneDrive/P3 Group folder/Design and GUI drawings/edited_gifs/male_monkey5.gif");
};
