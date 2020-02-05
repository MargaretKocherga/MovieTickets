#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <QException>
#include <QString>
#include "filmswindow.h"
#include <string>
#include <iostream>
#include <QTableWidget>

class Exception: public QException
{
    //Сообщение об ошибке
    QString message;
public:
    //Конструктор класса Exception
    Exception(QString _message = "");
    //Деструктор класса Exception
    ~Exception() noexcept {}
    //Функция получения сообщения об ошибке
    virtual QString Message();
    //Функция проверки, открыт ли файл для чтения
    static bool isFileOpenForReading(QWidget *parent, ifstream& ifile,
                                     const string& fileName);
    //Функция проверки, открыт ли файл для записи
    static bool isFileOpenForWriting(QWidget *parent, ofstream& ofile,
                                     const string& fileName);
    //Функция проверки на ошибки таблиц
    static bool tableProblems(QWidget *parent, QTableWidget& tableWidget);
    //Функция проверки ввода строки
    static bool isString(QWidget *parent, const QString& str,
                         string language = "ENG");
    //Функция проверки ввода времени
    static bool isValidTime(QWidget *parent, const string& str);
};

#endif // EXCEPTION_H
