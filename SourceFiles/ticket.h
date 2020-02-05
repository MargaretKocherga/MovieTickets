#ifndef TICKET_H
#define TICKET_H
#include "seance.h"

class Ticket: public Seance
{
    //Купленные места
    Queue<int> places;
    //Цена билета
    int price;
public:
    //Конструктор класса Ticket
    Ticket(QString _name = "", QString _genre = "",
           QString _date = "", QString _time = "",
           Queue<int> _soldPlaces = {},
           Queue<int> _places = {}, int _price = 0);
    //Деструктор класса Ticket
    ~Ticket();
    //Функции получения и установки значений полей класса
    Queue<int> getPlaces() const;
    void setPlaces(const Queue<int> &value);
    int getPrice() const;
    void setPrice(int value);
};

#endif // TICKET_H
