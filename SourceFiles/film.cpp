#include "film.h"
QString Film::fileName;
//Максимальная длина строки
#define MAX_STRING_LENGHT 50

//Конструктор класса Film
Film::Film(QString _name, QString _genre)
{
    name = _name;
    genre = _genre;
}

//Деструктор класса Film
Film::~Film() {}

//Перегрузка считывания из файла
ifstream &operator >> (ifstream &ifile, Film &film)
{
    char* temp;   //создание промежуточной строки
    temp = new char[MAX_STRING_LENGHT];
    //Считывание имени
    ifile.getline(temp, MAX_STRING_LENGHT, ',');
    film.name = temp;
    //Считывание жанра
    ifile.getline(temp, MAX_STRING_LENGHT, ',');
    film.genre = temp;
    //Удаление промежуточной строки
    delete[] temp;
    return ifile;
}

//Перегрузка записи в файл
ofstream &operator << (ofstream &ofile, Film &film)
{
    //Запись имени
    ofile.write(film.name.toUtf8(), film.name.size());
    ofile.write(",", 1);
    //Запись жанра
    ofile.write(film.genre.toUtf8(), film.genre.size());
    ofile.write(",", 1);
    return ofile;
}

//Перегрузка сравнения по имени
bool operator>(Film obj1, Film obj2)
{
    if (obj1.getName().compare(obj2.getName()) > 0)
        return true;
    else return false;
}
//Получение значения поля genre
QString Film::getGenre() const
{
    return genre;
}
//Установка значения поля genre
void Film::setGenre(const QString &value)
{
    genre = value;
}
//Получение значения поля name
QString Film::getName() const
{
    return name;
}
//Установка значения поля name
void Film::setName(const QString &value)
{
    name = value;
}
//Получение значения поля fileName
QString Film::getFileName()
{
    return fileName;
}
//Получение значения поля fileName
void Film::setFileName(const QString &value)
{
    fileName = value;
}

