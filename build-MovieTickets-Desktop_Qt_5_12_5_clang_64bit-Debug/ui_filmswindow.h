/********************************************************************************
** Form generated from reading UI file 'filmswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILMSWINDOW_H
#define UI_FILMSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FilmsWindow
{
public:
    QTableWidget *filmsTableWidget;
    QLabel *nameLabel;
    QLabel *genreLabel;
    QLabel *timeLabel;
    QPushButton *choosePlacesButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QPushButton *backButton;
    QPushButton *undoButton;

    void setupUi(QDialog *FilmsWindow)
    {
        if (FilmsWindow->objectName().isEmpty())
            FilmsWindow->setObjectName(QString::fromUtf8("FilmsWindow"));
        FilmsWindow->resize(1066, 600);
        FilmsWindow->setMinimumSize(QSize(1066, 600));
        FilmsWindow->setMaximumSize(QSize(1066, 600));
        FilmsWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 199, 27);"));
        FilmsWindow->setSizeGripEnabled(false);
        FilmsWindow->setModal(false);
        filmsTableWidget = new QTableWidget(FilmsWindow);
        filmsTableWidget->setObjectName(QString::fromUtf8("filmsTableWidget"));
        filmsTableWidget->setEnabled(true);
        filmsTableWidget->setGeometry(QRect(350, 0, 721, 601));
        filmsTableWidget->setMinimumSize(QSize(721, 601));
        filmsTableWidget->setMaximumSize(QSize(721, 601));
        filmsTableWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        filmsTableWidget->setSortingEnabled(false);
        nameLabel = new QLabel(FilmsWindow);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(60, 50, 221, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);
        nameLabel->setMinimumSize(QSize(221, 61));
        nameLabel->setSizeIncrement(QSize(0, 0));
        nameLabel->setMouseTracking(true);
        nameLabel->setTabletTracking(true);
        nameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        nameLabel->setLineWidth(0);
        nameLabel->setTextFormat(Qt::AutoText);
        nameLabel->setWordWrap(true);
        genreLabel = new QLabel(FilmsWindow);
        genreLabel->setObjectName(QString::fromUtf8("genreLabel"));
        genreLabel->setGeometry(QRect(90, 130, 151, 61));
        genreLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        timeLabel = new QLabel(FilmsWindow);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(90, 210, 151, 61));
        timeLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        choosePlacesButton = new QPushButton(FilmsWindow);
        choosePlacesButton->setObjectName(QString::fromUtf8("choosePlacesButton"));
        choosePlacesButton->setGeometry(QRect(90, 280, 161, 61));
        QFont font;
        font.setPointSize(18);
        choosePlacesButton->setFont(font);
        choosePlacesButton->setCursor(QCursor(Qt::PointingHandCursor));
        choosePlacesButton->setMouseTracking(false);
        choosePlacesButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));\n"
""));
        choosePlacesButton->setAutoDefault(false);
        editButton = new QPushButton(FilmsWindow);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(90, 440, 161, 61));
        editButton->setFont(font);
        editButton->setCursor(QCursor(Qt::PointingHandCursor));
        editButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        editButton->setAutoDefault(false);
        deleteButton = new QPushButton(FilmsWindow);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(90, 520, 161, 61));
        deleteButton->setFont(font);
        deleteButton->setCursor(QCursor(Qt::PointingHandCursor));
        deleteButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        deleteButton->setAutoDefault(false);
        addButton = new QPushButton(FilmsWindow);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(90, 360, 161, 61));
        addButton->setFont(font);
        addButton->setCursor(QCursor(Qt::PointingHandCursor));
        addButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        addButton->setAutoDefault(false);
        backButton = new QPushButton(FilmsWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 10, 50, 50));
        backButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));\n"
"font: 24pt \".AppleSystemUIFont\";"));
        backButton->setIconSize(QSize(16, 16));
        backButton->setAutoDefault(false);
        undoButton = new QPushButton(FilmsWindow);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setGeometry(QRect(70, 10, 71, 31));
        undoButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));\n"
"font: 18pt \".AppleSystemUIFont\";"));
        undoButton->setIconSize(QSize(16, 16));
        undoButton->setAutoDefault(false);

        retranslateUi(FilmsWindow);

        QMetaObject::connectSlotsByName(FilmsWindow);
    } // setupUi

    void retranslateUi(QDialog *FilmsWindow)
    {
        FilmsWindow->setWindowTitle(QApplication::translate("FilmsWindow", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("FilmsWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Film's name</span></p></body></html>", nullptr));
        genreLabel->setText(QApplication::translate("FilmsWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Genre</span></p></body></html>", nullptr));
        timeLabel->setText(QApplication::translate("FilmsWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Time</span></p></body></html>", nullptr));
        choosePlacesButton->setText(QApplication::translate("FilmsWindow", "Choose places", nullptr));
        editButton->setText(QApplication::translate("FilmsWindow", "Edit", nullptr));
        deleteButton->setText(QApplication::translate("FilmsWindow", "Delete", nullptr));
        addButton->setText(QApplication::translate("FilmsWindow", "Add new", nullptr));
        backButton->setText(QApplication::translate("FilmsWindow", "<-", nullptr));
        undoButton->setText(QApplication::translate("FilmsWindow", "Undo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilmsWindow: public Ui_FilmsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILMSWINDOW_H
