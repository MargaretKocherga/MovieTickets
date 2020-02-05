#include "seance.h"
#include <string>
#include <string.h>
#include "queue.cpp"
//Максимальная длина строки
#define MAX_STRING_LENGHT 50

//Конструктор класса Seance
Seance::Seance(QString _name, QString _genre,
               QString _date, QString _time,
               Queue<int> _soldPlaces):
    Film(_name, _genre)
{
    date = _date;
    time = _time;
    soldPlaces = _soldPlaces;
}

//Деструктор класса Seance
Seance::~Seance() {}

//Приведение строки в очередь
Queue<int> castStringToArray(char* str)
{
    Queue<int> array;
    if (str[strlen(str) - 1] != '\r')
        str[strlen(str)] = '\r';
    for (int i = 0; str[i]; i++)
    {
        char temp[5] = "";
        for (int j = 0; str[i] != ' ' &&
             str[i] != '\r' && str[i]; j++, i++)
            temp[j] = str[i];
        array.push(atoi(temp));
        if (str[i] == '\r') return array;
    }
    return array;
}

//Приведение очереди в строку
char* castArrayToString(Queue<int> array)
{
    if (array.getSize() == 0)
        return nullptr;
    string str = to_string(array[0]);
    for (int i = 1; i < array.getSize(); i++)
    {
        str.append(" ");
        str.append(to_string(array[i]));
    }
    char* cstr;
    cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    return cstr;
}

//Перегрузка считывания из файла
ifstream & operator >> (ifstream &ifile, Seance &seance)
{   //Считывание полей класса Film
    ifile >> static_cast<Film&>(seance);
    char* temp;     //Создание промежуточной строки
    temp = new char[MAX_STRING_LENGHT];
    //Считывание даты
    ifile.getline(temp, MAX_STRING_LENGHT, ',');
    seance.date = temp;
    //Считывание времени
    ifile.getline(temp, MAX_STRING_LENGHT, ',');
    seance.time = temp;
    //Считывание купленных мест
    ifile.getline(temp, MAX_STRING_LENGHT, '\n');
    if (strlen(temp) > 0)
        seance.soldPlaces = castStringToArray(temp);
    //Удаление промежуточной строки
    delete[] temp;
    return ifile;
}

//Перегрузка записи в файл
ofstream & operator << (ofstream &ofile, Seance &seance)
{   //Запись полей класса Film
    ofile << static_cast<Film&>(seance);
    //Запись даты
    ofile.write(seance.date.toUtf8(), seance.date.size());
    ofile.write(",", 1);
    //Запись времени
    ofile.write(seance.time.toUtf8(), seance.time.size());
    ofile.write(",", 1);
    //Запись купленных мест
    if (seance.soldPlaces.getSize() > 0)
        ofile.write(castArrayToString(seance.soldPlaces),
             strlen(castArrayToString(seance.soldPlaces)));
    ofile.write("\n", 1);
    return ofile;
}

//Перегрузка сравнения объектов
bool operator>(Seance obj1, Seance obj2)
{   //Сравнение по имени
    if (obj1.getName().compare(obj2.getName()) > 0)
        return true;
    //Сравнение по времени
    else if (obj1.getName().compare(obj2.getName()) == 0
             && obj1.getTime().compare(obj2.getTime()) > 0)
        return true;
    else return false;
}

//Получение значения поля date
QString Seance::getDate() const
{
    return date;
}
//Установка значения поля date
void Seance::setDate(const QString &value)
{
    date = value;
}
//Получение значения поля time
QString Seance::getTime() const
{
    return time;
}
//Установка значения поля time
void Seance::setTime(const QString &value)
{
    time = value;
}
//Получение значения поля soldPlaces
Queue<int> Seance::getSoldPlaces() const
{
    return soldPlaces;
}
//Установка значения поля soldPlaces
void Seance::setSoldPlaces(const Queue<int> &value)
{
    soldPlaces = value;
}
