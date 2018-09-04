#ifndef DIALOG_BOARD_2048_H
#define DIALOG_BOARD_2048_H

#include <QDialog>

namespace Ui {
class Dialog_board_2048;
}

class Dialog_board_2048 : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_board_2048(QWidget *parent = 0);
    ~Dialog_board_2048();
    
private slots:
    void on_back_btn_clicked();

signals:
    void back_main();

private:
    Ui::Dialog_board_2048 *ui;
};

#endif // DIALOG_BOARD_2048_H
