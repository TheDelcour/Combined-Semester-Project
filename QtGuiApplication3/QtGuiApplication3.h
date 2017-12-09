#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication3.h"
#include <QPainter>
#include <QPicture>
#include <QObject>

class QtGuiApplication3 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication3(QWidget *parent = Q_NULLPTR);
	int monsterPlayed = 1;
	int turn = 2;
	int p1Attack;
	int p1Lvl;
	void drawtext(QString s, int degree, QPicture qp){
		QFont font;
		font.setPixelSize(25);
		QPainter p(&qp);
		p.translate(40, 40);
		p.rotate(degree);
		p.setFont(font);
		p.drawText(QPoint(0, 0), s);
		p.end();
	}
	

public slots:
	void UpdateP1Lvl();

private:
	Ui::QtGuiApplication3Class ui;
};
