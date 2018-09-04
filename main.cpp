#include <QtGui/QApplication>
#include "dialog_main_2048.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog_main_2048 w;
    w.show();
    
    return a.exec();
}
