/********************************************************************************
** Form generated from reading UI file 'dialog_main_2048.ui'
**
** Created: Sat Sep 1 09:09:22 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MAIN_2048_H
#define UI_DIALOG_MAIN_2048_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_main_2048
{
public:
    QLabel *title_lab;
    QLabel *tips_lab_1;
    QToolButton *newgame_btn;
    QToolButton *leaderboard_btn;
    QToolButton *quit_btn;

    void setupUi(QDialog *Dialog_main_2048)
    {
        if (Dialog_main_2048->objectName().isEmpty())
            Dialog_main_2048->setObjectName(QString::fromUtf8("Dialog_main_2048"));
        Dialog_main_2048->resize(621, 779);
        Dialog_main_2048->setMinimumSize(QSize(621, 779));
        Dialog_main_2048->setMaximumSize(QSize(621, 779));
        Dialog_main_2048->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 248, 239);"));
        title_lab = new QLabel(Dialog_main_2048);
        title_lab->setObjectName(QString::fromUtf8("title_lab"));
        title_lab->setGeometry(QRect(19, -10, 231, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\346\255\243\351\273\221"));
        title_lab->setFont(font);
        title_lab->setTextFormat(Qt::AutoText);
        title_lab->setAlignment(Qt::AlignCenter);
        tips_lab_1 = new QLabel(Dialog_main_2048);
        tips_lab_1->setObjectName(QString::fromUtf8("tips_lab_1"));
        tips_lab_1->setGeometry(QRect(20, 125, 251, 31));
        newgame_btn = new QToolButton(Dialog_main_2048);
        newgame_btn->setObjectName(QString::fromUtf8("newgame_btn"));
        newgame_btn->setGeometry(QRect(180, 340, 241, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sawasdee"));
        font1.setPointSize(16);
        newgame_btn->setFont(font1);
        newgame_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 108, 90);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        leaderboard_btn = new QToolButton(Dialog_main_2048);
        leaderboard_btn->setObjectName(QString::fromUtf8("leaderboard_btn"));
        leaderboard_btn->setGeometry(QRect(180, 430, 241, 51));
        leaderboard_btn->setFont(font1);
        leaderboard_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 108, 90);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        quit_btn = new QToolButton(Dialog_main_2048);
        quit_btn->setObjectName(QString::fromUtf8("quit_btn"));
        quit_btn->setGeometry(QRect(180, 520, 241, 51));
        quit_btn->setFont(font1);
        quit_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 108, 90);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;"));

        retranslateUi(Dialog_main_2048);

        QMetaObject::connectSlotsByName(Dialog_main_2048);
    } // setupUi

    void retranslateUi(QDialog *Dialog_main_2048)
    {
        Dialog_main_2048->setWindowTitle(QApplication::translate("Dialog_main_2048", "Dialog_main_2048", 0, QApplication::UnicodeUTF8));
        title_lab->setText(QApplication::translate("Dialog_main_2048", "<html><head/><body><p><span style=\" font-size:72pt; color:#776e65;\">2048</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tips_lab_1->setText(QApplication::translate("Dialog_main_2048", "<html><head/><body><p><span style=\" font-size:18pt; color:#674e49;\">Play 2048 game online</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        newgame_btn->setText(QApplication::translate("Dialog_main_2048", "NewGame", 0, QApplication::UnicodeUTF8));
        leaderboard_btn->setText(QApplication::translate("Dialog_main_2048", "LeaderBoard", 0, QApplication::UnicodeUTF8));
        quit_btn->setText(QApplication::translate("Dialog_main_2048", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_main_2048: public Ui_Dialog_main_2048 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MAIN_2048_H
