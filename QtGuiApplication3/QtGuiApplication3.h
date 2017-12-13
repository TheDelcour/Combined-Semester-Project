#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication3.h"
#include <QPainter>
#include <QPicture>
#include <QObject>
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
};
