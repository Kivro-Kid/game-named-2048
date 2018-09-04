#ifndef DIALOG_MAIN_2048_H
#define DIALOG_MAIN_2048_H

#include <QDialog>
#include "dialog_game_2048.h"
#include "dialog_board_2048.h"

namespace Ui {
class Dialog_main_2048;
}

class Dialog_main_2048 : public QDialog
{
    Q_OBJECT
    
    Dialog_game_2048 *dialog_game_2048;
    Dialog_board_2048 *dialog_board_2048;

public:
    explicit Dialog_main_2048(QWidget *parent = 0);
    ~Dialog_main_2048();
    
private slots:
    void on_newgame_btn_clicked();

    void on_leaderboard_btn_clicked();

    void on_quit_btn_clicked();

    void main_show();

private:
    Ui::Dialog_main_2048 *ui;
};

#endif // DIALOG_MAIN_2048_H
