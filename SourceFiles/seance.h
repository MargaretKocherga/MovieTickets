#ifndef SEANCE_H
#define SEANCE_H
#include "film.h"
#include "queue.h"

class Seance: public Film
{

    QString date;           //Дата сеанса
    QString time;           //Время сеанса
    Queue<int> soldPlaces;  //Проданные места
public:
    //Конструктор класса Seance
    Seance(QString _name = "", QString _genre = "",
           QString _date = "", QString _time = "",
           Queue<int> _soldPlaces = {});
    //Деструктор класса Seance
    virtual ~Seance();
    //Перегрузка считывания из файла
    friend ifstream & operator >> (ifstream &ifile, Seance &seance);
    //Перегрузка записи в файл
    friend ofstream & operator << (ofstream &ofile, Seance &seance);
    //Функции получения и установки значений полей класса
    QString getTime() const;
    void setTime(const QString &value);
    Queue<int> getSoldPlaces() const;
    void setSoldPlaces(const Queue<int> &value);
    QString getDate() const;
    void setDate(const QString &value);
    //Статическое поле со стеком для отмены последнего действия
    static QStack< Queue<Seance> > undoStack;
    //Перегрузка сравнения объектов
    friend bool operator>(Seance obj1, Seance obj2);
};

#endif // SEANCE_H
