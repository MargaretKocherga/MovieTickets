#ifndef TICKETWINDOW_H
#define TICKETWINDOW_H

#include <QDialog>
#include "ticket.h"

namespace Ui {
class TicketWindow;
}

class TicketWindow : public QDialog
{
    Q_OBJECT
    //Билет
    Ticket ticket;
public:
    //Конструктор класса TicketWindow
    explicit TicketWindow(Seance selectedSeance, Queue<int> selectedPlaces,
                          QWidget *parent = nullptr);
    //Деструктор класса TicketWindow
    ~TicketWindow();
private slots:
    //Обработчик нажатия на кнопку exitButton,
    //осуществляет выход из программы
    void on_exitButton_clicked();
    //Обработчик нажатия на кнопку buyMoreButton,
    //осуществляет переход на экран выбора даты
    void on_buyMoreButton_clicked();
private:
    //Указатель на графическую составляющую класса
    Ui::TicketWindow *ui;
};

#endif // TICKETWINDOW_H
