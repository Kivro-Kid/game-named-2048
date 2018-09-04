#include "dialog_game_2048.h"
#include "ui_dialog_game_2048.h"

Dialog_game_2048::Dialog_game_2048(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_game_2048)
{
    ui->setupUi(this);
    srand(time(NULL));
    //分数字体
    score_font_settings = "color: rgb(255, 255, 255);font-weight: bold;font-size: 16pt;font-family: Sawasdee;";
    //数字字体
    number_font_settings = "font-weight: bold;font-size: 32pt;font-family: Sawasdee;";
    //结束字体
    over_font_settings = "font-size: 28pt;font-family: KacstQurn;";
    //数字背景
    insert_color();
    reset_game();
}

Dialog_game_2048::~Dialog_game_2048()
{
    delete ui;
}

void Dialog_game_2048::on_back_btn_clicked()
{
    emit(back_main());
    this->close();
}

void Dialog_game_2048::insert_color()
{
    number_background_settings.insert(2, "background-color: rgb(238, 228, 218);");
    number_background_settings.insert(4, "background-color: rgb(236, 224, 200);");
    number_background_settings.insert(8, "background-color: rgb(242, 177, 121);");
    number_background_settings.insert(16, "background-color: rgb(245, 149, 99);");
    number_background_settings.insert(32, "background-color: rgb(245, 124, 95);");
    number_background_settings.insert(64, "background-color: rgb(246, 93, 59);");
    number_background_settings.insert(128, "background-color: rgb(237, 206, 113);");
    number_background_settings.insert(256, "background-color: rgb(237, 204, 97);");
    number_background_settings.insert(512, "background-color: rgb(236, 200, 80);");
    number_background_settings.insert(1024, "background-color: rgb(236, 198, 61);");
    number_background_settings.insert(2048, "background-color: rgb(237, 194, 46);");
}

//重置游戏
void Dialog_game_2048::reset_game()
{
    memset(map, 0, sizeof(map));
    ui->over_lab->setText("");
    move = true;
    score = 0;
    best = 0;
    set_score();
    create_num();
    create_num();
}

//生成数字
void Dialog_game_2048::create_num()
{
    int i, j;
    int chance;
    if(!move || 0 >= count_null()) return;
    do{
        i = rand()%4;
        j = rand()%4;
    }while(0 != map[i][j]);
    chance = rand()%100;
    if(chance < 80)
        map[i][j] = 2;
    else if(chance < 95)
        map[i][j] = 4;
    else if(chance < 100)
        map[i][j] = 8;
    set_map();
    return;
}

//将数字填入num_line的文本
void Dialog_game_2048::set_val(int i, int val)
{
    //将十进制数val转换成qstring
    QString text = QString::number(val);
    switch(i)
    {
        case 0:
            ui->num_lab_0->setText(text);
            ui->num_lab_0->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 1:
            ui->num_lab_1->setText(text);
            ui->num_lab_1->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 2:
            ui->num_lab_2->setText(text);
            ui->num_lab_2->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 3:
            ui->num_lab_3->setText(text);
            ui->num_lab_3->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 10:
            ui->num_lab_10->setText(text);
            ui->num_lab_10->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 11:
            ui->num_lab_11->setText(text);
            ui->num_lab_11->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 12:
            ui->num_lab_12->setText(text);
            ui->num_lab_12->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 13:
            ui->num_lab_13->setText(text);
            ui->num_lab_13->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 20:
            ui->num_lab_20->setText(text);
            ui->num_lab_20->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 21:
            ui->num_lab_21->setText(text);
            ui->num_lab_21->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 22:
            ui->num_lab_22->setText(text);
            ui->num_lab_22->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 23:
            ui->num_lab_23->setText(text);
            ui->num_lab_23->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 30:
            ui->num_lab_30->setText(text);
            ui->num_lab_30->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 31:
            ui->num_lab_31->setText(text);
            ui->num_lab_31->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 32:
            ui->num_lab_32->setText(text);
            ui->num_lab_32->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
        case 33:
            ui->num_lab_33->setText(text);
            ui->num_lab_33->setStyleSheet(number_font_settings+number_background_settings[val]);
            break;
    }
}

//清除num_line的文本
void Dialog_game_2048::val_clear(int i)
{
    switch(i)
    {
        case 0:
            ui->num_lab_0->clear();
            ui->num_lab_0->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 1:
            ui->num_lab_1->clear();
            ui->num_lab_1->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 2:
            ui->num_lab_2->clear();
            ui->num_lab_2->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 3:
            ui->num_lab_3->clear();
            ui->num_lab_3->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 10:
            ui->num_lab_10->clear();
            ui->num_lab_10->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 11:
            ui->num_lab_11->clear();
            ui->num_lab_11->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 12:
            ui->num_lab_12->clear();
            ui->num_lab_12->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 13:
            ui->num_lab_13->clear();
            ui->num_lab_13->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 20:
            ui->num_lab_20->clear();
            ui->num_lab_20->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 21:
            ui->num_lab_21->clear();
            ui->num_lab_21->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 22:
            ui->num_lab_22->clear();
            ui->num_lab_22->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 23:
            ui->num_lab_23->clear();
            ui->num_lab_23->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 30:
            ui->num_lab_30->clear();
            ui->num_lab_30->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 31:
            ui->num_lab_31->clear();
            ui->num_lab_31->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 32:
            ui->num_lab_32->clear();
            ui->num_lab_32->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
        case 33:
            ui->num_lab_33->clear();
            ui->num_lab_33->setStyleSheet("background-color: rgb(205, 193, 180);");
            break;
    }
}

//刷新map
void Dialog_game_2048::set_map()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(map[i][j])
                set_val(i*10+j, map[i][j]);
            else
                val_clear(i*10+j);
        }
    }
}


//up动作
void Dialog_game_2048::up_action()
{
    for(int j=0; j<4; j++)
    {
        //得到当前列非0项
        int temp[4] = {0};
        int cnt = 0;
        for(int i=0; i<4; i++)
        {
            if(map[i][j])
                temp[cnt++] = map[i][j];
        }
        for(int i=0; i<4; i++)
        {
            if(map[i][j] != temp[i])
                move = true;
        }
        int n = 0;
        for(int m=0; m<cnt-1; m++)
        {
            //合并相同数字项
            if(temp[m] == temp[m+1] && temp[m])
            {
                temp[m] *= 2;
                score += temp[m+1];
                temp[m+1] = 0;
                move = true;
            }
        }
        //将最终的数字填回当前列
        for(int m=0; m<cnt; m++)
        {
            if(temp[m])
            {
                map[n++][j] = temp[m];
            }
        }
        //空位补0
        for(; n<4; n++)
        {
            map[n][j] = 0;
        }
    }
}

//down动作
void Dialog_game_2048::down_action()
{
    for(int j=0; j<4; j++)
    {
        int temp[4] = {0};
        int cnt = 0;
        for(int i=3; i>-1; i--)
        {
            if(map[i][j])
                temp[cnt++] = map[i][j];
        }
        for(int i=0, k=3; i<4, k>-1; i++, k--)
        {
            if(map[i][j] != temp[k])
                move = true;
        }
        int n = 3;
        for(int m=0; m<cnt-1; m++)
        {
            if(temp[m] == temp[m+1] && temp[m])
            {
                temp[m] *= 2;
                score += temp[m+1];
                temp[m+1] = 0;
                move = true;
            }
        }
        for(int m=0; m<cnt; m++)
        {
            if(temp[m])
                map[n--][j] = temp[m];
        }
        for(; n>-1; n--)
        {
            map[n][j] = 0;
        }
    }
}

//left动作
void Dialog_game_2048::left_action()
{
    for(int i=0; i<4; i++)
    {
        int temp[4] = {0};
        int cnt = 0;
        for(int j=0; j<4; j++)
        {
            if(map[i][j])
                temp[cnt++] = map[i][j];
        }
        for(int j=0; j<4; j++)
        {
            if(map[i][j] != temp[j])
                move = true;
        }
        int n = 0;
        for(int m=0; m<cnt-1; m++)
        {
            if(temp[m] == temp[m+1] && temp[m])
            {
                temp[m] *= 2;
                score += temp[m+1];
                temp[m+1] = 0;
                move = true;
            }
        }
        for(int m=0; m<cnt; m++)
        {
            if(temp[m])
                map[i][n++] = temp[m];
        }
        for(; n<4; n++)
        {
            map[i][n] = 0;
        }
    }
}

//right动作
void Dialog_game_2048::right_action()
{
    for(int i=0; i<4; i++)
    {
        int temp[4] = {0};
        int cnt = 0;
        for(int j=3; j>-1; j--)
        {
            if(map[i][j])
                temp[cnt++] = map[i][j];
        }
        for(int j=0, k=3; j<4, k>-1; j++, k--)
        {
            if(map[i][j] != temp[k])
                move = true;
        }
        int n = 3;
        for(int m=0; m<cnt-1; m++)
        {
            if(temp[m] == temp[m+1] && temp[m])
            {
                temp[m] *= 2;
                score += temp[m+1];
                temp[m+1] = 0;
                move = true;
            }
        }
        for(int m=0; m<cnt; m++)
        {
            if(temp[m])
                map[i][n--] = temp[m];
        }
        for(; n>-1; n--)
        {
            map[i][n] = 0;
        }
    }
}

//获取键盘动作
void Dialog_game_2048::keyPressEvent(QKeyEvent *event)
{
    if(check_win())
    {
        return;
    }
    move = false;
    switch(event->key())
    {
        case Qt::Key_Up: up_action(); break;
        case Qt::Key_Down: down_action(); break;
        case Qt::Key_Left: left_action(); break;
        case Qt::Key_Right: right_action(); break;
    }
    set_map();
    if(check_win())
    {
        game_win();
        return;
    }
    create_num();
    set_map();
    set_score();
    if(check_over())
        game_lose();
}

//map是否已满判断
int Dialog_game_2048::count_null()
{
    int count = 0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(map[i][j] == 0)
                count ++;
        }
    }
    return count;
}

//刷新分数
void Dialog_game_2048::set_score()
{
    QString score_text = QString::number(score, 10);
    ui->score_lab_02->setText(score_text);
    ui->score_lab_02->setStyleSheet(score_font_settings);
    best = ui->best_lab_02->text().toInt();
    if(best < score)
    {
        ui->best_lab_02->setText(score_text);
        ui->best_lab_02->setStyleSheet(score_font_settings);
    }
}

//游戏胜利判断
bool Dialog_game_2048::check_win()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(2048 <= map[i][j])
                return true;
        }
    }
    return false;
}

//游戏死亡判断
bool Dialog_game_2048::check_over()
{
    if(count_null()) return false;
    for(int i=0; i<4; i++)
    {
        for(int j=1; j<4; j++)
        {
            if(map[i][j] == map[i][j-1])
                return false;
        }
    }
    for(int j=0; j<4; j++)
    {
        for(int i=1; i<4; i++)
        {
            if(map[i][j] == map[i-1][j])
                return false;
        }
    }
    return true;
}

//游戏胜利显示
void Dialog_game_2048::game_win()
{
    ui->over_lab->setText("Congratulations!");
    ui->over_lab->setStyleSheet(over_font_settings);
}

//游戏死亡显示
void Dialog_game_2048::game_lose()
{
    ui->over_lab->setText("You Lose!");
    ui->over_lab->setStyleSheet(over_font_settings);
}
