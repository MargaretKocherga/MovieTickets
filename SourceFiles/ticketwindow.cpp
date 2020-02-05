#include "ticketwindow.h"
#include "ui_ticketwindow.h"
#include <QString>
#include "seance.cpp"
#include "calendarwindow.h"

//Кончтруктор класса TicketWindow
TicketWindow::TicketWindow(Seance selectedSeance,
                           Queue<int> selectedPlaces,
                           QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TicketWindow)
{
    ticket.setName(selectedSeance.getName());
    ticket.setGenre(selectedSeance.getGenre());
    ticket.setDate(selectedSeance.getDate());
    ticket.setTime(selectedSeance.getTime());
    ticket.setPlaces(selectedPlaces);
    int _price = 0;
    //Установка цены в зависимости от выбранных мест
    for (int i = 0; i < selectedPlaces.getSize(); i++)
    {
        if(selectedPlaces[i] >= 118)
            _price += 20;
        else
            _price += 10;
    }
    ticket.setPrice(_price);
    //Инициализация графического окружения
    ui->setupUi(this);
    //Вывод информации о билете на экран
    QString format = tr("<p align='center'><span style='"
                        "font-size:24pt;'>%1</span></p>");
    ui->filmLabel_2->setText(format.arg(ticket.getName()));
    ui->genreLabel_2->setText(format.arg(ticket.getGenre()));
    ui->dateLabel_2->setText(format.arg(ticket.getDate()));
    ui->timeLabel_2->setText(format.arg(ticket.getTime()));
    ui->placesLabel_2->setText(format.arg(castArrayToString(
                                        ticket.getPlaces())));
    ui->priceLabel_2->setText(format.arg(ticket.getPrice()));
}

//Деструктор класса TicketWindow
TicketWindow::~TicketWindow()
{
    delete ui;  //очистка дизайна
}

//Обработчик нажатия на кнопку exitButton
void TicketWindow::on_exitButton_clicked()
{
    this->close();  //Закрытие текущего окна
}

//Обработчик нажатия на кнопку buyMoreButton
void TicketWindow::on_buyMoreButton_clicked()
{   //Создание объекта класса CalendarWindow
    CalendarWindow calendarWindow;
    this->close();          //Закрытие текущего окна
    calendarWindow.exec();  //Исполнение окна calendarWindow
}
