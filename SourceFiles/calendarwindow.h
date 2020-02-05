#ifndef CALENDARWINDOW_H
#define CALENDARWINDOW_H

#include <QDialog>
#include "film.h"

namespace Ui {
class CalendarWindow;
}

class CalendarWindow : public QDialog
{
    Q_OBJECT

public:
    //Конструктор класса CalendarWindow
    explicit CalendarWindow(QWidget *parent = nullptr);
    //Деструктор класса CalendarWindow
    ~CalendarWindow();

private slots:
    //Обработчик изменения выбранной даты, выводит
    //изменения на экран с помощью QLabel
    void on_calendarWidget_selectionChanged();
    //Обработчик нажатия на кнопку chooseFilmButton,
    //осуществляет переход на экран выбора фильмов
    void on_chooseFilmButton_clicked();
    //Обработчик нажатия на кнопку listButton,
    //осуществляет переход к окну с ведомостью проданных
    //билетов на определенный день
    void on_listButton_clicked();
    //Обработчик нажатия на кнопку reportButton,
    //осуществляет переход к окну с отчетом о расписании
    //сеансов со стоимостью билетов
    void on_reportButton_clicked();

private:
    //Указатель на графическую составляющую класса
    Ui::CalendarWindow *ui;
};

#endif // CALENDARWINDOW_H
