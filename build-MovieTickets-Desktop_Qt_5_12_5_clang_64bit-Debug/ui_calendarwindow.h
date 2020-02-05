/********************************************************************************
** Form generated from reading UI file 'calendarwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARWINDOW_H
#define UI_CALENDARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalendarWindow
{
public:
    QCalendarWidget *calendarWidget;
    QLabel *dateLabel;
    QPushButton *chooseFilmButton;
    QPushButton *listButton;
    QPushButton *reportButton;

    void setupUi(QDialog *CalendarWindow)
    {
        if (CalendarWindow->objectName().isEmpty())
            CalendarWindow->setObjectName(QString::fromUtf8("CalendarWindow"));
        CalendarWindow->resize(1066, 600);
        CalendarWindow->setMinimumSize(QSize(1066, 600));
        CalendarWindow->setMaximumSize(QSize(1066, 600));
        CalendarWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 199, 27);"));
        calendarWidget = new QCalendarWidget(CalendarWindow);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(510, 110, 491, 371));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setMouseTracking(false);
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 141, 0)"));
        calendarWidget->setGridVisible(true);
        dateLabel = new QLabel(CalendarWindow);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(570, 50, 371, 51));
        dateLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dateLabel->setTextFormat(Qt::RichText);
        chooseFilmButton = new QPushButton(CalendarWindow);
        chooseFilmButton->setObjectName(QString::fromUtf8("chooseFilmButton"));
        chooseFilmButton->setEnabled(true);
        chooseFilmButton->setGeometry(QRect(110, 170, 200, 50));
        chooseFilmButton->setCursor(QCursor(Qt::PointingHandCursor));
        chooseFilmButton->setAutoFillBackground(false);
        chooseFilmButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        chooseFilmButton->setAutoDefault(false);
        listButton = new QPushButton(CalendarWindow);
        listButton->setObjectName(QString::fromUtf8("listButton"));
        listButton->setGeometry(QRect(110, 260, 200, 50));
        listButton->setCursor(QCursor(Qt::PointingHandCursor));
        listButton->setAutoFillBackground(false);
        listButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        listButton->setAutoDefault(false);
        reportButton = new QPushButton(CalendarWindow);
        reportButton->setObjectName(QString::fromUtf8("reportButton"));
        reportButton->setGeometry(QRect(110, 350, 200, 50));
        reportButton->setCursor(QCursor(Qt::PointingHandCursor));
        reportButton->setAutoFillBackground(false);
        reportButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        reportButton->setAutoDefault(false);

        retranslateUi(CalendarWindow);

        QMetaObject::connectSlotsByName(CalendarWindow);
    } // setupUi

    void retranslateUi(QDialog *CalendarWindow)
    {
        CalendarWindow->setWindowTitle(QApplication::translate("CalendarWindow", "Dialog", nullptr));
        dateLabel->setText(QApplication::translate("CalendarWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Date</span></p></body></html>", nullptr));
        chooseFilmButton->setText(QApplication::translate("CalendarWindow", "Choose film", nullptr));
        listButton->setText(QApplication::translate("CalendarWindow", "List of tickets sold", nullptr));
        reportButton->setText(QApplication::translate("CalendarWindow", "Session schedule report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalendarWindow: public Ui_CalendarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARWINDOW_H
