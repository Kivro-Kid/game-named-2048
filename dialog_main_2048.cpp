#include "dialog_main_2048.h"
#include "ui_dialog_main_2048.h"

Dialog_main_2048::Dialog_main_2048(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_main_2048)
{
    ui->setupUi(this);
    dialog_game_2048 = new Dialog_game_2048;
    connect(dialog_game_2048, SIGNAL(back_main()), this, SLOT(main_show()));
    dialog_board_2048 = new Dialog_board_2048;
    connect(dialog_board_2048, SIGNAL(back_main()), this, SLOT(main_show()));
}

Dialog_main_2048::~Dialog_main_2048()
{
    delete ui;
}

void Dialog_main_2048::on_newgame_btn_clicked()
{
    dialog_game_2048->reset_game();
    this->hide();
    dialog_game_2048->show();
}

void Dialog_main_2048::on_leaderboard_btn_clicked()
{
    this->hide();
    dialog_board_2048->show();
}

void Dialog_main_2048::on_quit_btn_clicked()
{
    delete dialog_game_2048;
    delete dialog_board_2048;
    this->close();
}

void Dialog_main_2048::main_show()
{
    this->show();
}
