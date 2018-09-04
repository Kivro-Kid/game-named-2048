/********************************************************************************
** Form generated from reading UI file 'dialog_game_2048.ui'
**
** Created: Sat Sep 1 09:09:22 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_GAME_2048_H
#define UI_DIALOG_GAME_2048_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_game_2048
{
public:
    QLabel *title_lab;
    QLabel *tips_lab_1;
    QLabel *tips_lab_2;
    QWidget *score_widget;
    QLabel *score_lab_01;
    QLabel *score_lab_02;
    QWidget *best_widget;
    QLabel *best_lab_01;
    QLabel *best_lab_02;
    QToolButton *back_btn;
    QWidget *game_widget;
    QWidget *num_widget_0;
    QLabel *num_lab_0;
    QWidget *num_widget_1;
    QLabel *num_lab_1;
    QWidget *num_widget_2;
    QLabel *num_lab_2;
    QWidget *num_widget_3;
    QLabel *num_lab_3;
    QWidget *num_widget_10;
    QLabel *num_lab_10;
    QWidget *num_widget_11;
    QLabel *num_lab_11;
    QWidget *num_widget_12;
    QLabel *num_lab_12;
    QWidget *num_widget_13;
    QLabel *num_lab_13;
    QWidget *num_widget_20;
    QLabel *num_lab_20;
    QWidget *num_widget_21;
    QLabel *num_lab_21;
    QWidget *num_widget_22;
    QLabel *num_lab_22;
    QWidget *num_widget_23;
    QLabel *num_lab_23;
    QWidget *num_widget_30;
    QLabel *num_lab_30;
    QWidget *num_widget_31;
    QLabel *num_lab_31;
    QWidget *num_widget_32;
    QLabel *num_lab_32;
    QWidget *num_widget_33;
    QLabel *num_lab_33;
    QWidget *over_widget;
    QLabel *over_lab;

    void setupUi(QDialog *Dialog_game_2048)
    {
        if (Dialog_game_2048->objectName().isEmpty())
            Dialog_game_2048->setObjectName(QString::fromUtf8("Dialog_game_2048"));
        Dialog_game_2048->resize(621, 779);
        Dialog_game_2048->setMinimumSize(QSize(621, 779));
        Dialog_game_2048->setMaximumSize(QSize(621, 779));
        Dialog_game_2048->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 248, 239);"));
        title_lab = new QLabel(Dialog_game_2048);
        title_lab->setObjectName(QString::fromUtf8("title_lab"));
        title_lab->setGeometry(QRect(19, -10, 231, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\346\255\243\351\273\221"));
        title_lab->setFont(font);
        title_lab->setTextFormat(Qt::AutoText);
        title_lab->setAlignment(Qt::AlignCenter);
        tips_lab_1 = new QLabel(Dialog_game_2048);
        tips_lab_1->setObjectName(QString::fromUtf8("tips_lab_1"));
        tips_lab_1->setGeometry(QRect(20, 110, 301, 31));
        tips_lab_2 = new QLabel(Dialog_game_2048);
        tips_lab_2->setObjectName(QString::fromUtf8("tips_lab_2"));
        tips_lab_2->setGeometry(QRect(20, 140, 401, 41));
        score_widget = new QWidget(Dialog_game_2048);
        score_widget->setObjectName(QString::fromUtf8("score_widget"));
        score_widget->setGeometry(QRect(390, 20, 101, 81));
        score_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 173, 160);\n"
"border-radius:5px;"));
        score_lab_01 = new QLabel(score_widget);
        score_lab_01->setObjectName(QString::fromUtf8("score_lab_01"));
        score_lab_01->setGeometry(QRect(27, 4, 51, 31));
        score_lab_01->setAlignment(Qt::AlignCenter);
        score_lab_02 = new QLabel(score_widget);
        score_lab_02->setObjectName(QString::fromUtf8("score_lab_02"));
        score_lab_02->setGeometry(QRect(10, 33, 81, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sawasdee"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        score_lab_02->setFont(font1);
        score_lab_02->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Sawasdee\";"));
        score_lab_02->setAlignment(Qt::AlignCenter);
        best_widget = new QWidget(Dialog_game_2048);
        best_widget->setObjectName(QString::fromUtf8("best_widget"));
        best_widget->setGeometry(QRect(500, 20, 101, 81));
        best_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 173, 160);\n"
"border-radius:5px;"));
        best_lab_01 = new QLabel(best_widget);
        best_lab_01->setObjectName(QString::fromUtf8("best_lab_01"));
        best_lab_01->setGeometry(QRect(25, 4, 51, 31));
        best_lab_01->setAlignment(Qt::AlignCenter);
        best_lab_02 = new QLabel(best_widget);
        best_lab_02->setObjectName(QString::fromUtf8("best_lab_02"));
        best_lab_02->setGeometry(QRect(10, 33, 81, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sawasdee"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        best_lab_02->setFont(font2);
        best_lab_02->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        best_lab_02->setAlignment(Qt::AlignCenter);
        back_btn = new QToolButton(Dialog_game_2048);
        back_btn->setObjectName(QString::fromUtf8("back_btn"));
        back_btn->setGeometry(QRect(470, 120, 131, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sawasdee"));
        font3.setPointSize(16);
        back_btn->setFont(font3);
        back_btn->setFocusPolicy(Qt::NoFocus);
        back_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 108, 90);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        game_widget = new QWidget(Dialog_game_2048);
        game_widget->setObjectName(QString::fromUtf8("game_widget"));
        game_widget->setGeometry(QRect(20, 180, 581, 581));
        game_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 173, 160);\n"
"border-radius:5px;"));
        num_widget_0 = new QWidget(game_widget);
        num_widget_0->setObjectName(QString::fromUtf8("num_widget_0"));
        num_widget_0->setGeometry(QRect(20, 20, 121, 121));
        num_widget_0->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_0 = new QLabel(num_widget_0);
        num_lab_0->setObjectName(QString::fromUtf8("num_lab_0"));
        num_lab_0->setGeometry(QRect(0, 0, 121, 121));
        num_lab_0->setAlignment(Qt::AlignCenter);
        num_widget_1 = new QWidget(game_widget);
        num_widget_1->setObjectName(QString::fromUtf8("num_widget_1"));
        num_widget_1->setGeometry(QRect(160, 20, 121, 121));
        num_widget_1->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_1 = new QLabel(num_widget_1);
        num_lab_1->setObjectName(QString::fromUtf8("num_lab_1"));
        num_lab_1->setGeometry(QRect(0, 0, 121, 121));
        num_lab_1->setAlignment(Qt::AlignCenter);
        num_widget_2 = new QWidget(game_widget);
        num_widget_2->setObjectName(QString::fromUtf8("num_widget_2"));
        num_widget_2->setGeometry(QRect(300, 20, 121, 121));
        num_widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_2 = new QLabel(num_widget_2);
        num_lab_2->setObjectName(QString::fromUtf8("num_lab_2"));
        num_lab_2->setGeometry(QRect(0, 0, 121, 121));
        num_lab_2->setAlignment(Qt::AlignCenter);
        num_widget_3 = new QWidget(game_widget);
        num_widget_3->setObjectName(QString::fromUtf8("num_widget_3"));
        num_widget_3->setGeometry(QRect(440, 20, 121, 121));
        num_widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_3 = new QLabel(num_widget_3);
        num_lab_3->setObjectName(QString::fromUtf8("num_lab_3"));
        num_lab_3->setGeometry(QRect(0, 0, 121, 121));
        num_lab_3->setAlignment(Qt::AlignCenter);
        num_widget_10 = new QWidget(game_widget);
        num_widget_10->setObjectName(QString::fromUtf8("num_widget_10"));
        num_widget_10->setGeometry(QRect(20, 160, 121, 121));
        num_widget_10->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_10 = new QLabel(num_widget_10);
        num_lab_10->setObjectName(QString::fromUtf8("num_lab_10"));
        num_lab_10->setGeometry(QRect(0, 0, 121, 121));
        num_lab_10->setAlignment(Qt::AlignCenter);
        num_widget_11 = new QWidget(game_widget);
        num_widget_11->setObjectName(QString::fromUtf8("num_widget_11"));
        num_widget_11->setGeometry(QRect(160, 160, 121, 121));
        num_widget_11->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_11 = new QLabel(num_widget_11);
        num_lab_11->setObjectName(QString::fromUtf8("num_lab_11"));
        num_lab_11->setGeometry(QRect(0, 0, 121, 121));
        num_lab_11->setAlignment(Qt::AlignCenter);
        num_widget_12 = new QWidget(game_widget);
        num_widget_12->setObjectName(QString::fromUtf8("num_widget_12"));
        num_widget_12->setGeometry(QRect(300, 160, 121, 121));
        num_widget_12->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_12 = new QLabel(num_widget_12);
        num_lab_12->setObjectName(QString::fromUtf8("num_lab_12"));
        num_lab_12->setGeometry(QRect(0, 0, 121, 121));
        num_lab_12->setAlignment(Qt::AlignCenter);
        num_widget_13 = new QWidget(game_widget);
        num_widget_13->setObjectName(QString::fromUtf8("num_widget_13"));
        num_widget_13->setGeometry(QRect(440, 160, 121, 121));
        num_widget_13->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_13 = new QLabel(num_widget_13);
        num_lab_13->setObjectName(QString::fromUtf8("num_lab_13"));
        num_lab_13->setGeometry(QRect(0, 0, 121, 121));
        num_lab_13->setAlignment(Qt::AlignCenter);
        num_widget_20 = new QWidget(game_widget);
        num_widget_20->setObjectName(QString::fromUtf8("num_widget_20"));
        num_widget_20->setGeometry(QRect(20, 300, 121, 121));
        num_widget_20->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_20 = new QLabel(num_widget_20);
        num_lab_20->setObjectName(QString::fromUtf8("num_lab_20"));
        num_lab_20->setGeometry(QRect(0, 0, 121, 121));
        num_lab_20->setAlignment(Qt::AlignCenter);
        num_widget_21 = new QWidget(game_widget);
        num_widget_21->setObjectName(QString::fromUtf8("num_widget_21"));
        num_widget_21->setGeometry(QRect(160, 300, 121, 121));
        num_widget_21->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_21 = new QLabel(num_widget_21);
        num_lab_21->setObjectName(QString::fromUtf8("num_lab_21"));
        num_lab_21->setGeometry(QRect(0, 0, 121, 121));
        num_lab_21->setAlignment(Qt::AlignCenter);
        num_widget_22 = new QWidget(game_widget);
        num_widget_22->setObjectName(QString::fromUtf8("num_widget_22"));
        num_widget_22->setGeometry(QRect(300, 300, 121, 121));
        num_widget_22->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_22 = new QLabel(num_widget_22);
        num_lab_22->setObjectName(QString::fromUtf8("num_lab_22"));
        num_lab_22->setGeometry(QRect(0, 0, 121, 121));
        num_lab_22->setAlignment(Qt::AlignCenter);
        num_widget_23 = new QWidget(game_widget);
        num_widget_23->setObjectName(QString::fromUtf8("num_widget_23"));
        num_widget_23->setGeometry(QRect(440, 300, 121, 121));
        num_widget_23->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_23 = new QLabel(num_widget_23);
        num_lab_23->setObjectName(QString::fromUtf8("num_lab_23"));
        num_lab_23->setGeometry(QRect(0, 0, 121, 121));
        num_lab_23->setAlignment(Qt::AlignCenter);
        num_widget_30 = new QWidget(game_widget);
        num_widget_30->setObjectName(QString::fromUtf8("num_widget_30"));
        num_widget_30->setGeometry(QRect(20, 440, 121, 121));
        num_widget_30->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_30 = new QLabel(num_widget_30);
        num_lab_30->setObjectName(QString::fromUtf8("num_lab_30"));
        num_lab_30->setGeometry(QRect(0, 0, 121, 121));
        num_lab_30->setAlignment(Qt::AlignCenter);
        num_widget_31 = new QWidget(game_widget);
        num_widget_31->setObjectName(QString::fromUtf8("num_widget_31"));
        num_widget_31->setGeometry(QRect(160, 440, 121, 121));
        num_widget_31->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_31 = new QLabel(num_widget_31);
        num_lab_31->setObjectName(QString::fromUtf8("num_lab_31"));
        num_lab_31->setGeometry(QRect(0, 0, 121, 121));
        num_lab_31->setAlignment(Qt::AlignCenter);
        num_widget_32 = new QWidget(game_widget);
        num_widget_32->setObjectName(QString::fromUtf8("num_widget_32"));
        num_widget_32->setGeometry(QRect(300, 440, 121, 121));
        num_widget_32->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_32 = new QLabel(num_widget_32);
        num_lab_32->setObjectName(QString::fromUtf8("num_lab_32"));
        num_lab_32->setGeometry(QRect(0, 0, 121, 121));
        num_lab_32->setAlignment(Qt::AlignCenter);
        num_widget_33 = new QWidget(game_widget);
        num_widget_33->setObjectName(QString::fromUtf8("num_widget_33"));
        num_widget_33->setGeometry(QRect(440, 440, 121, 121));
        num_widget_33->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 193, 180);"));
        num_lab_33 = new QLabel(num_widget_33);
        num_lab_33->setObjectName(QString::fromUtf8("num_lab_33"));
        num_lab_33->setGeometry(QRect(0, 0, 121, 121));
        num_lab_33->setAlignment(Qt::AlignCenter);
        over_widget = new QWidget(Dialog_game_2048);
        over_widget->setObjectName(QString::fromUtf8("over_widget"));
        over_widget->setEnabled(true);
        over_widget->setGeometry(QRect(20, 180, 581, 581));
        over_widget->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:5px;"));
        over_lab = new QLabel(over_widget);
        over_lab->setObjectName(QString::fromUtf8("over_lab"));
        over_lab->setEnabled(true);
        over_lab->setGeometry(QRect(101, 190, 381, 201));
        QFont font4;
        font4.setFamily(QString::fromUtf8("KacstQurn"));
        font4.setPointSize(28);
        over_lab->setFont(font4);
        over_lab->setAlignment(Qt::AlignCenter);

        retranslateUi(Dialog_game_2048);

        QMetaObject::connectSlotsByName(Dialog_game_2048);
    } // setupUi

    void retranslateUi(QDialog *Dialog_game_2048)
    {
        Dialog_game_2048->setWindowTitle(QApplication::translate("Dialog_game_2048", "Dialog", 0, QApplication::UnicodeUTF8));
        title_lab->setText(QApplication::translate("Dialog_game_2048", "<html><head/><body><p><span style=\" font-size:72pt; color:#776e65;\">2048</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tips_lab_1->setText(QApplication::translate("Dialog_game_2048", "<html><head/><body><p><span style=\" font-size:18pt; color:#674e49;\">Press direction keys to start</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tips_lab_2->setText(QApplication::translate("Dialog_game_2048", "<html><head/><body><p><span style=\" font-size:16pt; color:#6c4e49;\">Join the numbers and get to the 2048 tile</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        score_lab_01->setText(QApplication::translate("Dialog_game_2048", "<html><head/><body><p><span style=\" font-size:14pt; color:#eee4da;\">Score</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        score_lab_02->setText(QApplication::translate("Dialog_game_2048", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        best_lab_01->setText(QApplication::translate("Dialog_game_2048", "<html><head/><body><p><span style=\" font-size:14pt; color:#eee4da;\">Best</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        best_lab_02->setText(QApplication::translate("Dialog_game_2048", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        back_btn->setText(QApplication::translate("Dialog_game_2048", "Back", 0, QApplication::UnicodeUTF8));
        num_lab_0->setText(QString());
        num_lab_1->setText(QString());
        num_lab_2->setText(QString());
        num_lab_3->setText(QString());
        num_lab_10->setText(QString());
        num_lab_11->setText(QString());
        num_lab_12->setText(QString());
        num_lab_13->setText(QString());
        num_lab_20->setText(QString());
        num_lab_21->setText(QString());
        num_lab_22->setText(QString());
        num_lab_23->setText(QString());
        num_lab_30->setText(QString());
        num_lab_31->setText(QString());
        num_lab_32->setText(QString());
        num_lab_33->setText(QString());
        over_lab->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_game_2048: public Ui_Dialog_game_2048 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_GAME_2048_H
