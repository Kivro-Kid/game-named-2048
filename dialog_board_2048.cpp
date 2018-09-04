#include "dialog_board_2048.h"
#include "ui_dialog_board_2048.h"

Dialog_board_2048::Dialog_board_2048(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_board_2048)
{
    ui->setupUi(this);
}

Dialog_board_2048::~Dialog_board_2048()
{
    delete ui;
}

void Dialog_board_2048::on_back_btn_clicked()
{
    emit(back_main());
    this->close();
}
