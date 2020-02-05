#ifndef PLACESWINDOW_H
#define PLACESWINDOW_H

#include <QDialog>
#include <QButtonGroup>
#include "ticket.h"
#include "film.h"

namespace Ui {
class PlacesWindow;
}

class PlacesWindow : public QDialog
{
    Q_OBJECT
public:
    //Очередь сеансов на определенный день
    Queue<Seance> arrayOfSeances;
    //Индекс выбранного сеанса
    int index;
    //Конструктор класса PlacesWindow
    explicit PlacesWindow(Queue<Seance> _arrayOfSeances, int _index,
                          QWidget *parent = nullptr);
    //Деструктор класса PlacesWindow
    ~PlacesWindow();
    //Функция создания группы кнопок (зрительный зал)
    void createPlacesGroup();
private slots:
    //Обработчик нажатия на место в зале,
    //изменяет цвет выбранного места
    void placeClicked(int i);
    //Обработчик нажатия на кнопку backButton,
    //осуществляет возврат на предыдущий экран
    void on_backButton_clicked();
    //Обработчик нажатия на кнопку choosePlacesButton,
    //осуществляет переход на экран
    //с информацией о купленном билете
    void on_choosePlacesButton_clicked();
private:
    //Указатель на графическую составляющую класса
    Ui::PlacesWindow *ui;
    //Указатель на группу кнопок (зрительный зал)
    QButtonGroup *placesGroup;
};

#endif // PLACESWINDOW_H
