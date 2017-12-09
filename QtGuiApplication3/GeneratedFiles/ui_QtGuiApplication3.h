/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication3.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION3_H
#define UI_QTGUIAPPLICATION3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication3Class
{
public:
    QWidget *centralWidget;
    QLabel *m_lvl2;
    QLabel *p2_avatar;
    QLabel *p1_total;
    QLabel *p2_badstuff;
    QLabel *p1_avatar;
    QLabel *p1_badstuff;
    QLabel *p1_lvl;
    QLabel *p1_attack;
    QLabel *p2_total;
    QLabel *m_background;
    QLabel *monster_gif;
    QLabel *p2_lvl;
    QLabel *background;
    QLabel *p2_attack;
    QLabel *m_lvl1;

    void setupUi(QMainWindow *QtGuiApplication3Class)
    {
        if (QtGuiApplication3Class->objectName().isEmpty())
            QtGuiApplication3Class->setObjectName(QStringLiteral("QtGuiApplication3Class"));
        QtGuiApplication3Class->resize(1280, 720);
        QtGuiApplication3Class->setMinimumSize(QSize(1280, 720));
        QtGuiApplication3Class->setMaximumSize(QSize(1280, 720));
        centralWidget = new QWidget(QtGuiApplication3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        m_lvl2 = new QLabel(centralWidget);
        m_lvl2->setObjectName(QStringLiteral("m_lvl2"));
        m_lvl2->setGeometry(QRect(740, 270, 41, 211));
        p2_avatar = new QLabel(centralWidget);
        p2_avatar->setObjectName(QStringLiteral("p2_avatar"));
        p2_avatar->setGeometry(QRect(1084, 285, 161, 171));
        p1_total = new QLabel(centralWidget);
        p1_total->setObjectName(QStringLiteral("p1_total"));
        p1_total->setGeometry(QRect(340, 300, 71, 171));
        p2_badstuff = new QLabel(centralWidget);
        p2_badstuff->setObjectName(QStringLiteral("p2_badstuff"));
        p2_badstuff->setGeometry(QRect(820, 180, 91, 511));
        p1_avatar = new QLabel(centralWidget);
        p1_avatar->setObjectName(QStringLiteral("p1_avatar"));
        p1_avatar->setGeometry(QRect(40, 260, 171, 221));
        p1_badstuff = new QLabel(centralWidget);
        p1_badstuff->setObjectName(QStringLiteral("p1_badstuff"));
        p1_badstuff->setGeometry(QRect(380, -30, 91, 511));
        p1_lvl = new QLabel(centralWidget);
        p1_lvl->setObjectName(QStringLiteral("p1_lvl"));
        p1_lvl->setGeometry(QRect(340, 140, 91, 211));
        p1_attack = new QLabel(centralWidget);
        p1_attack->setObjectName(QStringLiteral("p1_attack"));
        p1_attack->setGeometry(QRect(340, 230, 71, 171));
        p2_total = new QLabel(centralWidget);
        p2_total->setObjectName(QStringLiteral("p2_total"));
        p2_total->setGeometry(QRect(870, 190, 71, 171));
        m_background = new QLabel(centralWidget);
        m_background->setObjectName(QStringLiteral("m_background"));
        m_background->setGeometry(QRect(530, 240, 221, 261));
        monster_gif = new QLabel(centralWidget);
        monster_gif->setObjectName(QStringLiteral("monster_gif"));
        monster_gif->setGeometry(QRect(530, 240, 221, 261));
        p2_lvl = new QLabel(centralWidget);
        p2_lvl->setObjectName(QStringLiteral("p2_lvl"));
        p2_lvl->setGeometry(QRect(870, 340, 55, 161));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, -1, 1280, 741));
        background->setMaximumSize(QSize(1280, 741));
        p2_attack = new QLabel(centralWidget);
        p2_attack->setObjectName(QStringLiteral("p2_attack"));
        p2_attack->setGeometry(QRect(870, 250, 55, 191));
        m_lvl1 = new QLabel(centralWidget);
        m_lvl1->setObjectName(QStringLiteral("m_lvl1"));
        m_lvl1->setGeometry(QRect(460, 180, 81, 211));
        QtGuiApplication3Class->setCentralWidget(centralWidget);
        background->raise();
        m_background->raise();
        p2_total->raise();
        p2_lvl->raise();
        p2_badstuff->raise();
        p2_avatar->raise();
        p2_attack->raise();
        p1_total->raise();
        p1_lvl->raise();
        p1_badstuff->raise();
        p1_avatar->raise();
        p1_attack->raise();
        monster_gif->raise();
        m_lvl2->raise();
        m_lvl1->raise();

        retranslateUi(QtGuiApplication3Class);

        QMetaObject::connectSlotsByName(QtGuiApplication3Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication3Class)
    {
        QtGuiApplication3Class->setWindowTitle(QApplication::translate("QtGuiApplication3Class", "QtGuiApplication3", Q_NULLPTR));
        m_lvl2->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        p2_avatar->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        p1_total->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        p2_badstuff->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        p1_avatar->setText(QApplication::translate("QtGuiApplication3Class", "<html><head/><body><p><img src=\":/SemesterProjectGUI/soerenyes.png\"/></p></body></html>", Q_NULLPTR));
        p1_badstuff->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        p1_lvl->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        p1_attack->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        p2_total->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        m_background->setText(QApplication::translate("QtGuiApplication3Class", "<html><head/><body><p><img src=\":/Pictures/GUI_Pics/GifBackground90c.png\"/></p></body></html>", Q_NULLPTR));
        monster_gif->setText(QApplication::translate("QtGuiApplication3Class", "<html><head/><body><p><img src=\":/SemesterProjectGUI/empty.png\"/></p></body></html>", Q_NULLPTR));
        p2_lvl->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        background->setText(QApplication::translate("QtGuiApplication3Class", "<html><head/><body><p><img src=\":/Pictures/GUI_Pics/Background8.png\"/></p></body></html>", Q_NULLPTR));
        p2_attack->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
        m_lvl1->setText(QApplication::translate("QtGuiApplication3Class", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication3Class: public Ui_QtGuiApplication3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION3_H
