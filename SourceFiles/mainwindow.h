#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calendarwindow.h"
#include "film.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Конструктор класса MainWindow
    MainWindow(QWidget *parent = nullptr);
    //Деструктор класса MainWindow
    ~MainWindow();

private slots:
    //Обработчик нажатия на кнопку buyTicketsButton,
    //осуществляет переход на следующий экран
    void on_buyTicketsButton_clicked();

private:
    //Указатель на графическую составляющую класса
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
