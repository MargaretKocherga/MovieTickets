#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calendarwindow.h"
#include <QFileDialog>

//Конструктор класса MainWindow
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent),
    ui(new Ui::MainWindow)
{   //Инициализация графического окружения
    ui->setupUi(this);
    //Установка картинки на задний фон окна
    QPixmap background("/Users/margo/Documents/"
                       "QTProjects/MovieTickets/Background.jpg");
    background = background.scaled(this->size(),
                                   Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);
}

//Деструктор класса MainWindow
MainWindow::~MainWindow()
{
    delete ui;  //очистка дизайна
}

//Обработчик нажатия на кнопку buyTicketsButton
void MainWindow::on_buyTicketsButton_clicked()
{   //Открытие окна для выбора рабочего файла
    Film::setFileName(QFileDialog::
                      getOpenFileName(this,
                      tr("Open File with films"), "",
                      tr("Films (*.csv);;All Files (*)")));
    //Создание объекта класса CalendarWindow
    CalendarWindow calendarWindow;
    this->close();          //Закрытие текущего окна
    calendarWindow.exec();  //Исполнение окна calendarWindow
}
