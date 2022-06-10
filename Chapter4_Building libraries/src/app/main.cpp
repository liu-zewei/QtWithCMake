#include "mainwindow.h"

#include <QApplication>
#include "businesslogic.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug() << "1 + 1 = " << Add(1 , 1);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
