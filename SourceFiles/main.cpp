#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{   //Создание приложения
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //Запуск первого окна
    return a.exec();
}
