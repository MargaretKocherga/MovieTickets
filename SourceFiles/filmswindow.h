#ifndef FILMSWINDOW_H
#define FILMSWINDOW_H

#include "ticket.h"
#include "film.h"
#include "queue.h"
#include "queue.cpp"
#include <QStack>


namespace Ui {
class FilmsWindow;
}

class FilmsWindow : public QDialog
{
    Q_OBJECT
    //Очередь сеансов на определенный день
    Queue<Seance> arrayOfSeances;
    //Выбранная дата
    QString selectedDate;
public:
    //Конструктор класса FilmsWindow
    explicit FilmsWindow(QString _selectedDate = "",
                         QWidget *parent = nullptr);
    //Деструктор класса FilmsWindow
    ~FilmsWindow();
    //Функция создания таблицы с сеансами
    //путем считывания информации из файла
    void configure();
    //Функция перезаписи информации в файл
    static void rewriteFile(QWidget *parent,
                            Queue<Seance> arrayOfSeances,
                            QString selectedDate);
    //Функции получения и установки значений полей
    Queue<Seance> getArrayOfSeances() const;
    void setArrayOfSeances(const Queue<Seance> &value);
private slots:
    //Обработчик изменения выбранного сеанса, выводит
    //изменения на экран с помощью QLabel
    void on_filmsTableWidget_itemSelectionChanged();
    //Обработчик нажатия на кнопку choosePlacesButton,
    //осуществляет переход на экран выбора мест
    void on_choosePlacesButton_clicked();
    //Обработчик нажатия на кнопку backButton,
    //осуществляет возврат на предыдущий экран
    void on_backButton_clicked();
    //Обработчик нажатия на кнопку addButton, осуществляет
    //переход на экран добавления нового сеанса
    void on_addButton_clicked();
    //Обработчик нажатия на кнопку deleteButton, осуществляет
    //удаляет выбранный сеанс
    void on_deleteButton_clicked();
    //Обработчик нажатия на кнопку editButton, осуществляет
    //переход на экран редактирования выбранного фильма
    void on_editButton_clicked();
    //Обработчик нажатия на кнопку addButton,
    //осуществляет отмену последнего действия
    void on_undoButton_clicked();
private:
    //Указатель на графическую составляющую класса
    Ui::FilmsWindow *ui;
};

#endif // FILMSWINDOW_H
