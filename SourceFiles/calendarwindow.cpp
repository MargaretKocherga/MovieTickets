#include "calendarwindow.h"
#include "ui_calendarwindow.h"
#include "filmswindow.h"
#include <QString>
#include "informationwindow.h"

//Конструктор класса CalendarWindow
CalendarWindow::CalendarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalendarWindow)
{
    //Инициализация графического окружения
    ui->setupUi(this);
    //Установка формата текста для dateLabel
    QString format = tr("<p align='center'><span style=' "
                        "font-size:36pt;'>%1</span></p>");
    //Изменение текста в dateLabel на выбранную дату
    ui->dateLabel->setText(format.arg(ui->calendarWidget->
                           selectedDate().toString("dd.MM.yyyy")));
}

//Деструктор класса CalendarWindow
CalendarWindow::~CalendarWindow()
{
    delete ui;  //очистка дизайна
}

//Обработчик изменения выбранной даты
void CalendarWindow::on_calendarWidget_selectionChanged()
{
    //Установка формата текста для dateLabel
    QString format = tr("<p align='center'><span style=' "
                        "font-size:36pt;'>%1</span></p>");
    //Изменение текста в dateLabel на выбранную дату
    ui->dateLabel->setText(format.arg(ui->calendarWidget->
                           selectedDate().toString("dd.MM.yyyy")));
}

//Обработчик нажатия на кнопку chooseFilmButton,
void CalendarWindow::on_chooseFilmButton_clicked()
{
    //Создание объекта класса FilmsWindow с выбранной датой
    FilmsWindow filmsWindow(ui->calendarWidget->
                            selectedDate().toString("dd.MM.yyyy"));
    this->close();          //Закрытие текущего окна
    filmsWindow.exec();     //Исполнение окна filmsWindow
}

//Обработчик нажатия на кнопку listButton
void CalendarWindow::on_listButton_clicked()
{
    //Создание объекта класса InformationWindow с выбранной датой
    InformationWindow informationWindow(ui->calendarWidget->
                                        selectedDate().toString("dd.MM.yyyy"));
    this->close();              //Закрытие текущего окна
    informationWindow.exec();   //Исполнение окна filmsWindow
}

//Обработчик нажатия на кнопку reportButton
void CalendarWindow::on_reportButton_clicked()
{
    //Создание объекта класса InformationWindow с выбранной датой
    //и передачей флага "REPORT"
    InformationWindow informationWindow(ui->calendarWidget->
                                        selectedDate().toString("dd.MM.yyyy"),
                                        "REPORT");
    this->close();              //Закрытие текущего окна
    informationWindow.exec();   //Исполнение окна filmsWindow
}
