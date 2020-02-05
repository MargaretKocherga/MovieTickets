/********************************************************************************
** Form generated from reading UI file 'informationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONWINDOW_H
#define UI_INFORMATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_InformationWindow
{
public:
    QTableWidget *tableWidget;
    QPushButton *backButton;

    void setupUi(QDialog *InformationWindow)
    {
        if (InformationWindow->objectName().isEmpty())
            InformationWindow->setObjectName(QString::fromUtf8("InformationWindow"));
        InformationWindow->resize(800, 601);
        InformationWindow->setMinimumSize(QSize(800, 601));
        InformationWindow->setMaximumSize(QSize(800, 601));
        InformationWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 199, 27);"));
        tableWidget = new QTableWidget(InformationWindow);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(80, 0, 721, 601));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));\n"
""));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setDefaultDropAction(Qt::IgnoreAction);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setRowCount(0);
        backButton = new QPushButton(InformationWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 10, 50, 50));
        backButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));\n"
"font: 24pt \".AppleSystemUIFont\";"));
        backButton->setIconSize(QSize(16, 16));
        backButton->setAutoDefault(false);

        retranslateUi(InformationWindow);

        QMetaObject::connectSlotsByName(InformationWindow);
    } // setupUi

    void retranslateUi(QDialog *InformationWindow)
    {
        InformationWindow->setWindowTitle(QApplication::translate("InformationWindow", "Dialog", nullptr));
        backButton->setText(QApplication::translate("InformationWindow", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InformationWindow: public Ui_InformationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONWINDOW_H
