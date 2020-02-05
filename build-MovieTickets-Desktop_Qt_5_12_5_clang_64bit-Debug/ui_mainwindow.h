/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *programName;
    QPushButton *buyTicketsButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1066, 600);
        MainWindow->setMinimumSize(QSize(1066, 600));
        MainWindow->setMaximumSize(QSize(1066, 600));
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        programName = new QLabel(centralwidget);
        programName->setObjectName(QString::fromUtf8("programName"));
        programName->setEnabled(true);
        programName->setGeometry(QRect(610, 60, 321, 191));
        programName->setStyleSheet(QString::fromUtf8("font: 13pt \"Papyrus\"; \n"
"color: rgb(0, 0, 0);"));
        buyTicketsButton = new QPushButton(centralwidget);
        buyTicketsButton->setObjectName(QString::fromUtf8("buyTicketsButton"));
        buyTicketsButton->setGeometry(QRect(650, 360, 251, 81));
        buyTicketsButton->setCursor(QCursor(Qt::PointingHandCursor));
        buyTicketsButton->setAutoFillBackground(false);
        buyTicketsButton->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\"; \n"
"background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        buyTicketsButton->setCheckable(false);
        buyTicketsButton->setAutoExclusive(false);
        buyTicketsButton->setAutoDefault(false);
        buyTicketsButton->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        buyTicketsButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        programName->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">Movie Tickets</span></p></body></html>", nullptr));
        buyTicketsButton->setText(QApplication::translate("MainWindow", "Buy tickets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
