#include "ticket.h"
#include "queue.cpp"

//Конструктор класса Ticket
Ticket::Ticket(QString _name, QString _genre,
               QString _date, QString _time,
               Queue<int> _soldPlaces,
               Queue<int> _places, int _price):
    Seance(_name, _genre, _date, _time, _soldPlaces)
{
    places = _places;
    price = _price;
}

//Деструктор класса Ticket
Ticket::~Ticket() {}

//Получение значения поля places
Queue<int> Ticket::getPlaces() const
{
    return places;
}
//Установка значения поля places
void Ticket::setPlaces(const Queue<int> &value)
{
    places = value;
}
//Получение значения поля price
int Ticket::getPrice() const
{
    return price;
}
//Установка значения поля price
void Ticket::setPrice(int value)
{
    price = value;
}
