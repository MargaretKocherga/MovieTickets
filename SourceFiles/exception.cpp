#include "exception.h"
#include <QFile>
#include <QErrorMessage>
#include <QMessageBox>
#include <regex>

//Конструктор класса Exception
Exception::Exception(QString _message)
{
    message = _message;
}

//Функция получения сообщения об ошибке
QString Exception::Message()
{
    return message;
}

//Проверка, открыт ли файл для чтения
bool Exception::isFileOpenForReading(QWidget *parent,
                                     ifstream& ifile,
                                     const string& fileName)
{
    bool fileProblem = false;   //Создание флага ошибки
    try     //Проверка, открыт ли файл
    {
        ifile.open(fileName);
        if (!ifile.is_open())
            //Генерация исключения
           throw Exception("File cannot be opened!");
    }
    catch (Exception exception) //Обработчик исключений
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             exception.Message());
        fileProblem = true;
    }
    catch (...)     //Абсолютный обработчик
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             "Some other exception.");
        fileProblem = true;
    }
    return fileProblem; //Возврат флага ошибки
}

//Проверка, открыт ли файл для записи
bool Exception::isFileOpenForWriting(QWidget *parent,
                                     ofstream& ofile,
                                     const string& fileName)
{
    bool fileProblem = false;   //Создание флага ошибки
    try     //Проверка, открыт ли файл
    {
        ofile.open(fileName);
        if (!ofile.is_open())
            //Генерация исключения
           throw Exception("File cannot be opened!");
    }
    catch (Exception exception) //Обработчик исключений
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             exception.Message());
        fileProblem = true;
    }
    catch (...)     //Абсолютный обработчик
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             "Some other exception.");
        fileProblem = true;
    }
    return fileProblem; //Возврат флага ошибки
}

//Проверка на ошибки с таблицей
bool Exception::tableProblems(QWidget *parent,
                              QTableWidget& tableWidget)
{
    bool tableProblem = false;  //Создание флага ошибки
    try
    {
        //Проверка, пустая ли таблица
        if (tableWidget.rowCount() == 0)
            //Генерация исключения
            throw Exception("Table is empty!\n"
                            "Please, add something "
                            "or select another date.");
        //Проверка, выбран ли элемент таблицы
        else if (tableWidget.selectedItems().size() == 0)
            //Генерация исключения
            throw Exception("You didn't select any film!");
    }
    catch (Exception exception) //Обработчик исключений
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             exception.Message());
        tableProblem = true;
    }
    catch (...)     //Абсолютный обработчик
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             "Some other exception.");
        tableProblem = true;
    }
    return tableProblem;    //Возврат флага ошибки
}

//Проверка на ввод строки
bool Exception::isString(QWidget *parent,
                         const QString& str, string language)
{
    bool isString = true;   //Создание флага ошибки
    try
    {
        int leftBorder = 0, rightBorder = 0;
        //Установка крайних значений
        if (language == "ENG") {
            leftBorder = 'A';
            rightBorder = 'z';
        }
        //Проверка, пуста ли строка
        if (str.length() == 0)
            //Генерация исключения
            throw Exception("String is empty!");
        //Проверка на правильно введенную строку
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] < leftBorder || str[i] > rightBorder) &&
                    str[i] != ' ' && str[i] != ':' &&
                    (str[i] < '0' || str[i] > '9'))
                //Генерация исключения
                throw Exception("Invalid symbols!");
        }

        //Проверка на строку без букв
        for(int i = 0; i < str.length(); i++)
        {
            if (str[i] != ' ' && str[i] != ':' &&
                    (str[i] < '0' || str[i] > '9'))
                break;
            else if (i + 1 == str.length())
                //Генерация исключения
                throw Exception("Invalid symbols!");
        }
    }
    catch (Exception exception) //Обработчик исключений
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             exception.Message());
        isString = false;
    }
    catch (...)     //Абсолютный обработчик
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             "Some other exception.");
        isString = false;
    }
    return isString;    //Возврат флага ошибки
}

//Проверка на ввод времени
bool Exception::isValidTime(QWidget *parent, const string& str)
{
    bool isValid = true;    //Создание флага ошибки
    //Задание стиля ввода времени
    std::regex validTime("([0-9]|0[0-9]|1[0-9]|"
                         "2[0-3]):([0-5][0-9])");
    try     //Проверка, праивльно ли введено время
    {
        if (!std::regex_match(str, validTime))
            throw Exception("Not a valid time!");
    }
    catch (Exception exception) //Обработчик исключений
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             exception.Message());
        isValid = false;
    }
    catch (...)     //Абсолютный обработчик
    {
        //Вывод предупреждения на экран
        QMessageBox::warning(parent,"Attention!",
                             "Some other exception.");
        isValid = false;
    }
    return isValid; //Возврат флага ошибки
}
