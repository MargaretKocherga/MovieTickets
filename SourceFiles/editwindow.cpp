#include "editwindow.h"
#include "ui_editwindow.h"
#include "exception.h"
#include "filmswindow.h"
#include "algorithm.cpp"

//Конструктор класса EditWindow
EditWindow::EditWindow(QString _buttonName, QString _selectedDate,
                       Queue<Seance> _arrayOfSeances, int _index,
                       QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditWindow)
{
    buttonName = _buttonName;
    selectedDate = _selectedDate;
    index = _index;
    arrayOfSeances = _arrayOfSeances;
    //Инициализация графического окружения
    ui->setupUi(this);
    //Установка текста для объектов класса QLabel
    //в зависимости от флага
    if (buttonName != ui->addButton->text())
    {
        ui->addButton->setText(buttonName);
        ui->nameEdit->setText(arrayOfSeances[index].getName());
        ui->genreEdit->setText(arrayOfSeances[index].getGenre());
        ui->timeEdit->setText(arrayOfSeances[index].getTime());
    }
}

//Деструктор класса EditWindow
EditWindow::~EditWindow()
{
    delete ui;  //очистка дизайна
}

//Обработчик нажатия на кнопку addButton
void EditWindow::on_addButton_clicked()
{
    if (Exception::isString(this, ui->nameEdit->text()) &&
            Exception::isString(this, ui->genreEdit->text()) &&
            Exception::isValidTime(this, ui->timeEdit->
                                   text().toStdString()))
    {
        //Если флаг равен "Edit", редактируется объект
        if (ui->addButton->text() == "Edit")
        {
            arrayOfSeances[index].setName(ui->nameEdit->text());
            arrayOfSeances[index].setGenre(ui->genreEdit->text());
            arrayOfSeances[index].setTime(ui->timeEdit->text());
        }
        else    //Если флаг равен "Add", добавляется новый объект
        {
            Seance newSeance;
            newSeance.setName(ui->nameEdit->text());
            newSeance.setGenre(ui->genreEdit->text());
            newSeance.setDate(selectedDate);
            newSeance.setTime(ui->timeEdit->text());
            arrayOfSeances.push(newSeance);
        }

        //Сортировка очереди сеансов
        Algorithm::sort(arrayOfSeances.begin(), arrayOfSeances.end());
        //Перезапись сеансов в файл
        FilmsWindow::rewriteFile(this, arrayOfSeances, selectedDate);

        //Создание объекта класса FilmsWindow с выбранной датой
        FilmsWindow filmsWindow(selectedDate);
        this->close();         //Закрытие текущего окна
        filmsWindow.exec();    //Исполнение окна filmsWindow
    }

}
