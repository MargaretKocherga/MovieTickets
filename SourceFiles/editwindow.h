#ifndef EDITWINDOW_H
#define EDITWINDOW_H

#include <QDialog>
#include "seance.h"

namespace Ui {
class EditWindow;
}

class EditWindow : public QDialog
{
    Q_OBJECT
    //Очередь сеансов на определенный день
    Queue<Seance> arrayOfSeances;
    //Выбранная дата
    QString selectedDate;
    //Флаг редактирования/добавления объекта
    QString buttonName;
    //Индекс редактируемого объекта
    int index;

public:
    //Конструктор класса EditWindow
    explicit EditWindow(QString _buttonName, QString _selectedDate,
                        Queue<Seance> _arrayOfSeances = {},
                        int _index = 0, QWidget *parent = nullptr);
    //Деструктор класса EditWindow
    ~EditWindow();

private slots:
    //Обработчик нажатия на кнопку addButton, добавляет
    //новый сеанс или изменяет старый в зависимости от флага
    void on_addButton_clicked();

private:
    //Указатель на графическую составляющую класса
    Ui::EditWindow *ui;
};

#endif // EDITWINDOW_H
