#include "filmswindow.h"
#include "ui_filmswindow.h"
#include "placeswindow.h"
#include "exception.h"
#include <QMessageBox>
#include "calendarwindow.h"
#include "editwindow.h"
#include "algorithm.cpp"

//Объвление стека для отмены последнего действия
QStack< Queue<Seance> > Seance::undoStack;

//Конструктор класса FilmsWindow
FilmsWindow::FilmsWindow(QString _selectedDate, QWidget *parent):
    QDialog(parent),
    ui(new Ui::FilmsWindow)
{
    selectedDate = _selectedDate;
    //Инициализация графического окружения
    ui->setupUi(this);
    //Установка параметров выбора элемента для таблицы
    ui->filmsTableWidget->
            setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->filmsTableWidget->horizontalHeader()->
            setSectionResizeMode(QHeaderView::Stretch);
    ui->filmsTableWidget->
            setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->filmsTableWidget->
            setSelectionMode(QAbstractItemView::SingleSelection);
    //Функция создания таблицы с сеансами
    configure();
}

//Деструктор класса FilmsWindow
FilmsWindow::~FilmsWindow()
{
    delete ui;  //очистка дизайна
}

//Получение значения поля arrayOfSeances
Queue<Seance> FilmsWindow::getArrayOfSeances() const
{
    return arrayOfSeances;
}
//Установка значения поля arrayOfSeances
void FilmsWindow::setArrayOfSeances(const Queue<Seance> &value)
{
    arrayOfSeances = value;
}

//Функция создания таблицы с сеансами
void FilmsWindow::configure()
{
    ifstream ifile; //Создание файла для считывания
    //Проверка, открыт ли файл для чтения
    if (!Exception::isFileOpenForReading(this, ifile,
                                         Film::getFileName().toStdString()))
    {   //Пока не конец файла, считывание сеансов в контейнер
        while (!ifile.eof())
        {
            Seance newSeance;
            ifile >> newSeance;
            if (!newSeance.getDate().compare(selectedDate))
                arrayOfSeances.push(newSeance);
        }
        ifile.close();  //Закрытие файла
        //Сортировка контейнера
        Algorithm::sort(arrayOfSeances.begin(), arrayOfSeances.end());
        //Создание заголовка таблицы
        ui->filmsTableWidget->setColumnCount(3);
        QStringList list;
        list << "Film's name" << "Genre" << "Time";
        ui->filmsTableWidget->setHorizontalHeaderLabels(list);
        list.clear();
        //Добавление сеансов в таблицу из контейнера
        for(int i = 0; i < arrayOfSeances.getSize(); i++)
        {
            ui->filmsTableWidget->insertRow(ui->filmsTableWidget->rowCount());
            int numRow = ui->filmsTableWidget->rowCount() - 1;
            ui->filmsTableWidget->setItem(numRow, 0, new QTableWidgetItem(
                                              arrayOfSeances[i].getName()));
            ui->filmsTableWidget->setItem(numRow, 1, new QTableWidgetItem(
                                              arrayOfSeances[i].getGenre()));
            ui->filmsTableWidget->setItem(numRow, 2, new QTableWidgetItem(
                                              arrayOfSeances[i].getTime()));
        }
    }
}

//Перезапись сеансов в файл
void FilmsWindow::rewriteFile(QWidget *parent, Queue<Seance> arrayOfSeances,
                              QString selectedDate)
{
    ifstream ifile; //Создание файла для чтения
    //Создание массива всех сеансов в файле
    Queue<Seance> arrayOfAllSeances;
    //Проверка, открыт ли файл для считвывания
    if (!Exception::isFileOpenForReading(parent, ifile,
                                         Film::getFileName().toStdString()))
    {   //Пока не конец файла, считывание сеансов в контейнер
        while (!ifile.eof())
        {
            Seance newSeance;
            ifile >> newSeance;
            if (newSeance.getDate().compare(selectedDate) &&
                    newSeance.getDate() != "")
                arrayOfAllSeances.push(newSeance);
        }
        ifile.close();  //Закрытие файла
    }
    ofstream ofile; //Создание файла для записи
    //Проверка, открыт ли файл для записи
    if (!Exception::isFileOpenForWriting(parent, ofile,
                                         Film::getFileName().toStdString()))
    {   //Запись сеансов в файл из двух контейнеров
        for (int i = 0; i < arrayOfAllSeances.getSize(); i++)
        {
            ofile << arrayOfAllSeances[i];
        }
        for (int i = 0; i < arrayOfSeances.getSize(); i++)
        {
            ofile << arrayOfSeances[i];
        }
        ofile.close();  //Закрытие файла
    }
}

//Обработчик изменения выбранного сеанса
void FilmsWindow::on_filmsTableWidget_itemSelectionChanged()
{   //Если сеанс выбран
    if (ui->filmsTableWidget->selectedItems().size() > 0)
    {   //Вывод информации о выбранном сеансе на экран
        QItemSelectionModel *select = ui->filmsTableWidget->selectionModel();
        QString nameFormat = tr("<p align='center'><span style=' "
                                "font-size:24pt;'>%1</span></p>");
        QString otherFormat = tr("<p align='center'><span style=' "
                                 "font-size:18pt;'>%1</span></p>");
        ui->nameLabel->setText(nameFormat.arg(select->selectedRows(0).
                                              first().data().toString()));
        ui->genreLabel->setText(otherFormat.arg(select->selectedRows(1).
                                                first().data().toString()));
        ui->timeLabel->setText(otherFormat.arg(select->selectedRows(2).
                                               first().data().toString()));
    }
}

//Обработчик нажатия на кнопку choosePlacesButton
void FilmsWindow::on_choosePlacesButton_clicked()
{   //Проверка таблицы на проблемы
    if (!Exception::tableProblems(this, *ui->filmsTableWidget))
    {   //Установка индекса выбранного сеанса
        int index = ui->filmsTableWidget->selectionModel()->
                selectedIndexes().first().row();
        //Создание элемента класса placesWindow
        PlacesWindow placesWindow(arrayOfSeances, index);
        this->close();          //Закрытие текущего окна
        placesWindow.exec();    //Исполнение окна placesWindow
    }
}

//Обработчик нажатия на кнопку backButton
void FilmsWindow::on_backButton_clicked()
{   //Перезапись файла
    rewriteFile(this, arrayOfSeances, selectedDate);
    //Создание элемента класса CalendarWindow
    CalendarWindow calendarWindow;
    this->close();          //Закрытие текущего окна
    calendarWindow.exec();  //Исполнение окна calendarWindow
}

//Обработчик нажатия на кнопку addButton
void FilmsWindow::on_addButton_clicked()
{
    //Запись текущего массива сеансов
    //в стек отмены последнего действия
    Seance::undoStack.push(arrayOfSeances);
    //Создание элемента класса EditWindow
    EditWindow editWindow(ui->addButton->text(), selectedDate,
                          arrayOfSeances);
    this->close();      //Закрытие текущего окна
    editWindow.exec();  //Исполнение окна editWindow
}

//Обработчик нажатия на кнопку deleteButton
void FilmsWindow::on_deleteButton_clicked()
{   //Проверка таблицы на проблемы
    if (!Exception::tableProblems(this, *ui->filmsTableWidget))
    {   //Запись текущего массива сеансов
        //в стек отмены последнего действия
        Seance::undoStack.push(arrayOfSeances);
        //Установка индекса выбранного сеанса
        int index = ui->filmsTableWidget->selectionModel()->
                selectedIndexes().first().row();
        //Удаление сеанса из контейнера
        arrayOfSeances.eraseByIndex(index);
        //Удаление сеанса из таблицы
        ui->filmsTableWidget->removeRow(index);
        //Перезапись сеансов в файл
        rewriteFile(this, arrayOfSeances, selectedDate);
    }
}

//Обработчик нажатия на кнопку editButton
void FilmsWindow::on_editButton_clicked()
{   //Проверка таблицы на проблемы
    if (!Exception::tableProblems(this, *ui->filmsTableWidget))
    {   //Запись текущего массива сеансов
        //в стек отмены последнего действия
        Seance::undoStack.push(arrayOfSeances);
        //Создание элемента класса EditWindow
        EditWindow editWindow(ui->editButton->text(), selectedDate,
                              arrayOfSeances,
                              ui->filmsTableWidget->selectionModel()->
                              selectedIndexes().first().row());
        this->close();      //Закрытие текущего окна
        editWindow.exec();  //Исполнение окна editWindow
    }
}

//Обработчик нажатия на кнопку undoButton
void FilmsWindow::on_undoButton_clicked()
{   //Если стек пустой, вывод предупреждения на экран
    if (Seance::undoStack.empty())
        QMessageBox::warning(this,"Attention!",
                             "You haven't done anything yet!");
    else
    {   //Создание контейнера сеансов из последнего
        //объекта стека
        arrayOfSeances = Seance::undoStack.top();
        //Удаление последнего объекта стека
        Seance::undoStack.pop();
        //Перезапись сеансов в файл
        rewriteFile(this, arrayOfSeances, selectedDate);
        //Перезапись сеансов в таблицу
        ui->filmsTableWidget->setRowCount(0);
        for(int i = 0; i < arrayOfSeances.getSize(); i++)
        {
            ui->filmsTableWidget->insertRow(ui->filmsTableWidget->rowCount());
            int numRow = ui->filmsTableWidget->rowCount() - 1;
            ui->filmsTableWidget->setItem(numRow, 0, new QTableWidgetItem(
                                              arrayOfSeances[i].getName()));
            ui->filmsTableWidget->setItem(numRow, 1, new QTableWidgetItem(
                                              arrayOfSeances[i].getGenre()));
            ui->filmsTableWidget->setItem(numRow, 2, new QTableWidgetItem(
                                              arrayOfSeances[i].getTime()));
        }
    }
}
