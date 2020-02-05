#include "informationwindow.h"
#include "ui_informationwindow.h"
#include "calendarwindow.h"
#include "exception.h"
#include "algorithm.cpp"

//Конструктор класса InformationWindow
InformationWindow::InformationWindow(QString _selectedDate,
                                     QString config, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InformationWindow)
{
    selectedDate = _selectedDate;
    //Инициализация графического окружения
    ui->setupUi(this);
    //Установка стиля заголовка таблицы
    ui->tableWidget->horizontalHeader()->
            setSectionResizeMode(QHeaderView::Stretch);
    //Функция создания таблицы с сеансами
    configure(config);
}

//Деструктор класса InformationWindow
InformationWindow::~InformationWindow()
{
    delete ui;  //очистка дизайна
}

//Функция создания таблицы с сеансами
void InformationWindow::configure(QString config)
{
    ifstream ifile; //Создание файла для считывания
    //  Проверка, открыт ли файл для чтения
    if (!Exception::isFileOpenForReading(this, ifile,
                                         Film::getFileName().toStdString()))
    {   //Пока не конец файла, считывание сеансов
        while (!ifile.eof())
        {
            Seance newSeance;
            ifile >> newSeance;
            if (!newSeance.getDate().compare(selectedDate))
                arrayOfSeances.push(newSeance);
        }
        ifile.close();  //Закрытие файла
        //Сортировка контейнера сеансов
        Algorithm::sort(arrayOfSeances.begin(), arrayOfSeances.end());
        //Создание заголовка таблицы
        ui->tableWidget->setColumnCount(4);
        QStringList list;
        if (!config.compare("LIST"))
            list << "Film's name" << "Genre" << "Time" << "Number of sold tickets";
        else
            list << "Film's name" << "Genre" << "Time" << "Price";
        ui->tableWidget->setHorizontalHeaderLabels(list);
        list.clear();
        //Добавление сеансов в таблицу
        for(int i = 0; i < arrayOfSeances.getSize(); i++)
        {
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            int numRow = ui->tableWidget->rowCount() - 1;
            ui->tableWidget->setItem(numRow, 0, new QTableWidgetItem(
                                         arrayOfSeances[i].getName()));
            ui->tableWidget->setItem(numRow, 1, new QTableWidgetItem(
                                         arrayOfSeances[i].getGenre()));
            ui->tableWidget->setItem(numRow, 2, new QTableWidgetItem(
                                         arrayOfSeances[i].getTime()));
            if (!config.compare("LIST"))    //Если нужна ведомость
            {   //Добавление в таблицу элемента ведомости
                ui->tableWidget->setItem(numRow, 3,
                                         new QTableWidgetItem(
                                             QString::number(
                                             arrayOfSeances[i].getSoldPlaces().
                                                 getSize())));
            }
            else    //Иначе добавление в таблицу элемента отчета
                ui->tableWidget->setItem(numRow, 3, new QTableWidgetItem(
                                             "10 - 20 BYN"));
        }
    }
}

//Обработчик нажатия на кнопку backButton
void InformationWindow::on_backButton_clicked()
{   //Создание элемента класса calendarWindow
    CalendarWindow calendarWindow;
    this->close();          //Закрытие текущего окна
    calendarWindow.exec();  //Исполнение окна calendarWindow
}
