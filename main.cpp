#include "mainwindow.h"
#include <QApplication>
#include    <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow win;
    win.show();


    return a.exec();
}
