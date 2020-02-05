#ifndef FILM_H
#define FILM_H
#include <fstream>
#include <QString>
using namespace std;

class Film
{
    //Название фильма
    QString name;
    //Жанр фильма
    QString genre;
    //Статическое поле с именем файла с фильмами
    static QString fileName;
public:
    //Конструктор класса Film
    Film(QString _name = "", QString _genre = "");
    //Деструктор класса Film
    virtual ~Film();
    //Перегрузка считывания из файла
    friend ifstream & operator >> (ifstream &ifile, Film &film);
    //Перегрузка записи в файл
    friend ofstream & operator << (ofstream &ofile, Film &film);
    //Функции получения и установки значений полей класса
    QString getName() const;
    void setName(const QString &value);
    QString getGenre() const;
    void setGenre(const QString &value);
    static QString getFileName();
    static void setFileName(const QString &value);
    //Перегрузка сравнения объектов
    friend bool operator>(Film obj1, Film obj2);
};

#endif // FILM_H
