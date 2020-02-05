#include "placeswindow.h"
#include "ui_placeswindow.h"
#include "seance.h"
#include "filmswindow.h"
#include <QMessageBox>
#include "ticketwindow.h"

//Конструктор класса PlacesWindow
PlacesWindow::PlacesWindow(Queue<Seance> _arrayOfSeances,
                           int _index, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlacesWindow)
{
    arrayOfSeances = _arrayOfSeances;
    index = _index;
    //Инициализация графического окружения
    ui->setupUi(this);
    //Создание группы кнопок (зрительного зала)
    createPlacesGroup();
}

//Деструктор класса PlacesWindow
PlacesWindow::~PlacesWindow()
{
    delete ui;  //очистка дизайна
}

//Создание группы кнопок (зрительного зала)
void PlacesWindow::createPlacesGroup()
{
    this->placesGroup = new QButtonGroup(this);
    placesGroup->addButton(ui->place_1, 1);
    placesGroup->addButton(ui->place_2, 2);
    placesGroup->addButton(ui->place_3, 3);
    placesGroup->addButton(ui->place_4, 4);
    placesGroup->addButton(ui->place_5, 5);
    placesGroup->addButton(ui->place_6, 6);
    placesGroup->addButton(ui->place_7, 7);
    placesGroup->addButton(ui->place_8, 8);
    placesGroup->addButton(ui->place_9, 9);
    placesGroup->addButton(ui->place_10, 10);
    placesGroup->addButton(ui->place_11, 11);
    placesGroup->addButton(ui->place_12, 12);
    placesGroup->addButton(ui->place_13, 13);
    placesGroup->addButton(ui->place_14, 14);
    placesGroup->addButton(ui->place_15, 15);
    placesGroup->addButton(ui->place_16, 16);
    placesGroup->addButton(ui->place_17, 17);
    placesGroup->addButton(ui->place_18, 18);
    placesGroup->addButton(ui->place_19, 19);
    placesGroup->addButton(ui->place_20, 20);
    placesGroup->addButton(ui->place_21, 21);
    placesGroup->addButton(ui->place_22, 22);
    placesGroup->addButton(ui->place_23, 23);
    placesGroup->addButton(ui->place_24, 24);
    placesGroup->addButton(ui->place_25, 25);
    placesGroup->addButton(ui->place_26, 26);
    placesGroup->addButton(ui->place_27, 27);
    placesGroup->addButton(ui->place_28, 28);
    placesGroup->addButton(ui->place_29, 29);
    placesGroup->addButton(ui->place_30, 30);
    placesGroup->addButton(ui->place_31, 31);
    placesGroup->addButton(ui->place_32, 32);
    placesGroup->addButton(ui->place_33, 33);
    placesGroup->addButton(ui->place_34, 34);
    placesGroup->addButton(ui->place_35, 35);
    placesGroup->addButton(ui->place_36, 36);
    placesGroup->addButton(ui->place_37, 37);
    placesGroup->addButton(ui->place_38, 38);
    placesGroup->addButton(ui->place_39, 39);
    placesGroup->addButton(ui->place_40, 40);
    placesGroup->addButton(ui->place_41, 41);
    placesGroup->addButton(ui->place_42, 42);
    placesGroup->addButton(ui->place_43, 43);
    placesGroup->addButton(ui->place_44, 44);
    placesGroup->addButton(ui->place_45, 45);
    placesGroup->addButton(ui->place_46, 46);
    placesGroup->addButton(ui->place_47, 47);
    placesGroup->addButton(ui->place_48, 48);
    placesGroup->addButton(ui->place_49, 49);
    placesGroup->addButton(ui->place_50, 50);
    placesGroup->addButton(ui->place_51, 51);
    placesGroup->addButton(ui->place_52, 52);
    placesGroup->addButton(ui->place_53, 53);
    placesGroup->addButton(ui->place_54, 54);
    placesGroup->addButton(ui->place_55, 55);
    placesGroup->addButton(ui->place_56, 56);
    placesGroup->addButton(ui->place_57, 57);
    placesGroup->addButton(ui->place_58, 58);
    placesGroup->addButton(ui->place_59, 59);
    placesGroup->addButton(ui->place_60, 60);
    placesGroup->addButton(ui->place_61, 61);
    placesGroup->addButton(ui->place_62, 62);
    placesGroup->addButton(ui->place_63, 63);
    placesGroup->addButton(ui->place_64, 64);
    placesGroup->addButton(ui->place_65, 65);
    placesGroup->addButton(ui->place_66, 66);
    placesGroup->addButton(ui->place_67, 67);
    placesGroup->addButton(ui->place_68, 68);
    placesGroup->addButton(ui->place_69, 69);
    placesGroup->addButton(ui->place_70, 70);
    placesGroup->addButton(ui->place_71, 71);
    placesGroup->addButton(ui->place_72, 72);
    placesGroup->addButton(ui->place_73, 73);
    placesGroup->addButton(ui->place_74, 74);
    placesGroup->addButton(ui->place_75, 75);
    placesGroup->addButton(ui->place_76, 76);
    placesGroup->addButton(ui->place_77, 77);
    placesGroup->addButton(ui->place_78, 78);
    placesGroup->addButton(ui->place_79, 79);
    placesGroup->addButton(ui->place_80, 80);
    placesGroup->addButton(ui->place_81, 81);
    placesGroup->addButton(ui->place_82, 82);
    placesGroup->addButton(ui->place_83, 83);
    placesGroup->addButton(ui->place_84, 84);
    placesGroup->addButton(ui->place_85, 85);
    placesGroup->addButton(ui->place_86, 86);
    placesGroup->addButton(ui->place_87, 87);
    placesGroup->addButton(ui->place_88, 88);
    placesGroup->addButton(ui->place_89, 89);
    placesGroup->addButton(ui->place_90, 90);
    placesGroup->addButton(ui->place_91, 91);
    placesGroup->addButton(ui->place_92, 92);
    placesGroup->addButton(ui->place_93, 93);
    placesGroup->addButton(ui->place_94, 94);
    placesGroup->addButton(ui->place_95, 95);
    placesGroup->addButton(ui->place_96, 96);
    placesGroup->addButton(ui->place_97, 97);
    placesGroup->addButton(ui->place_98, 98);
    placesGroup->addButton(ui->place_99, 99);
    placesGroup->addButton(ui->place_100, 100);
    placesGroup->addButton(ui->place_101, 101);
    placesGroup->addButton(ui->place_102, 102);
    placesGroup->addButton(ui->place_103, 103);
    placesGroup->addButton(ui->place_104, 104);
    placesGroup->addButton(ui->place_105, 105);
    placesGroup->addButton(ui->place_106, 106);
    placesGroup->addButton(ui->place_107, 107);
    placesGroup->addButton(ui->place_108, 108);
    placesGroup->addButton(ui->place_109, 109);
    placesGroup->addButton(ui->place_110, 110);
    placesGroup->addButton(ui->place_111, 111);
    placesGroup->addButton(ui->place_112, 112);
    placesGroup->addButton(ui->place_113, 113);
    placesGroup->addButton(ui->place_114, 114);
    placesGroup->addButton(ui->place_115, 115);
    placesGroup->addButton(ui->place_116, 116);
    placesGroup->addButton(ui->place_117, 117);
    placesGroup->addButton(ui->place_118, 118);
    placesGroup->addButton(ui->place_119, 119);
    placesGroup->addButton(ui->place_120, 120);
    placesGroup->addButton(ui->place_121, 121);
    placesGroup->addButton(ui->place_122, 122);
    //Установка стиля кнопок
    for(int i = 1; i <= placesGroup->buttons().size(); i++)
        placesGroup->button(i)->
        setStyleSheet("background-color: qlineargradient("
                      "spread:pad, x1:0.505208,"
                      "y1:0.0797727, x2:0.510417, y2:1, "
                      "stop:0 rgba(0, 0, 0, 204),"
                      "stop:1 rgba(59, 59, 59, 255));");
    //Задание красного цвета купленным местам
    for (int i = 0; i < arrayOfSeances[index].
         getSoldPlaces().getSize(); i++)
    {
        int j = arrayOfSeances[index].getSoldPlaces()[i];
        placesGroup->button(j)->setStyleSheet(
                    "background-color: red;");
    }
    //Подключение группы кнопок к сигналам и слотам
    connect(placesGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(placeClicked(int)));
}

//Обработчик нажатия на место в зале
void PlacesWindow::placeClicked(int i)
{   //Если место выбрано, то установка стандартного стиля
    if (placesGroup->button(i)->
            styleSheet() == "background-color: gray;")
        placesGroup->button(i)->
            setStyleSheet("background-color: qlineargradient("
                          "spread:pad, x1:0.505208,"
                          "y1:0.0797727, x2:0.510417, y2:1, "
                          "stop:0 rgba(0, 0, 0, 204),"
                          "stop:1 rgba(59, 59, 59, 255));");
    //Если место не было выбрано и не куплено,
    //то окрашивание в серый цвет
    else if (placesGroup->button(i)->
             styleSheet() != "background-color: red;")
        placesGroup->button(i)->
                setStyleSheet("background-color: gray;");
}

//Обработчик нажатия на кнопку backButton
void PlacesWindow::on_backButton_clicked()
{   //Создание элемента класса filmsWindow
    FilmsWindow filmsWindow(arrayOfSeances[index].getDate());
    this->close();      //Закрытие текущего окна
    filmsWindow.exec(); //Исполнение окна filmsWindow
}

//Обработчик нажатия на кнопку choosePlacesButton
void PlacesWindow::on_choosePlacesButton_clicked()
{
    Queue<int> soldPlaces = arrayOfSeances[index].getSoldPlaces();
    Queue<int> selectedPlaces;
    //Запись выбранных мест в контейнер
    for (int i = 1; i <= placesGroup->buttons().size(); i++)
        if (placesGroup->button(i)->styleSheet() ==
                "background-color: gray;")
        {
            soldPlaces.push(i);
            arrayOfSeances[index].setSoldPlaces(soldPlaces);
            selectedPlaces.push(i);
        }
    //Если не были выбраны места, вывод предупреждения
    if (selectedPlaces.isEmpty())
        QMessageBox::warning(this,"Attention!",
                             "You didn't choose places!");
    else
    {   //Перезапись сеансов в файл
        FilmsWindow::rewriteFile(this, arrayOfSeances,
                                 arrayOfSeances[index].getDate());
        //Создание элемента класса filmsWindow
        TicketWindow ticketWindow(arrayOfSeances[index],
                                  selectedPlaces);
        this->close();          //Закрытие текущего окна
        ticketWindow.exec();    //Открытие окна ticketWindow
    }
}
