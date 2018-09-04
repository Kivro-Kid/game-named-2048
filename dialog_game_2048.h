#ifndef DIALOG_GAME_2048_H
#define DIALOG_GAME_2048_H

#include <QDialog>
#include <QKeyEvent>
#include <QString>
#include <QMap>
#include <time.h>


namespace Ui {
class Dialog_game_2048;
}

class Dialog_game_2048 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_game_2048(QWidget *parent = 0);
    ~Dialog_game_2048();

    QString score_font_settings;
    QString number_font_settings;
    QString over_font_settings;
    QMap<int, QString> number_background_settings;

    int map[4][4];
    int score;
    int best;
    bool move;

    void insert_color();
    void reset_game();
    void create_num();
    void set_val(int i, int val);
    void val_clear(int i);
    void set_map();

    void up_action();
    void down_action();
    void left_action();
    void right_action();

    void keyPressEvent(QKeyEvent *);
    
    int count_null();
    void set_score();
    bool check_win();
    bool check_over();

    void game_win();
    void game_lose();
private slots:
    void on_back_btn_clicked();

signals:
    void back_main();

private:
    Ui::Dialog_game_2048 *ui;
};

#endif // DIALOG_GAME_2048_H
