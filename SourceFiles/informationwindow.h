#ifndef INFORMATIONWINDOW_H
#define INFORMATIONWINDOW_H

#include <QDialog>
#include "seance.h"


namespace Ui {
class InformationWindow;
}

class InformationWindow : public QDialog
{
    Q_OBJECT
    //Выбранная дата
    QString selectedDate;
    //Очередь сеансов на определенный день
    Queue<Seance> arrayOfSeances;
public:
    //Конструктор класса InformationWindow
    explicit InformationWindow(QString _selectedDate,
                               QString config = "LIST",
                               QWidget *parent = nullptr);
    //Деструктор класса InformationWindow
    ~InformationWindow();
    //Функция создания таблицы с сеансами
    //путем считывания информации из файла
    void configure(QString config);
private slots:
    //Обработчик нажатия на кнопку backButton,
    //осуществляет возврат на предыдущий экран
    void on_backButton_clicked();
private:
    //Указатель на графическую составляющую класса
    Ui::InformationWindow *ui;
};

#endif // INFORMATIONWINDOW_H
