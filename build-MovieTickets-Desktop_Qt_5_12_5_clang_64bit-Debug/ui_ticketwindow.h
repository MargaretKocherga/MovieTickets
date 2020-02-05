/********************************************************************************
** Form generated from reading UI file 'ticketwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETWINDOW_H
#define UI_TICKETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TicketWindow
{
public:
    QLabel *label;
    QLabel *filmLabel;
    QLabel *genreLabel;
    QLabel *dateLabel;
    QLabel *timeLabel;
    QLabel *placesLabel;
    QLabel *filmLabel_2;
    QLabel *genreLabel_2;
    QLabel *dateLabel_2;
    QLabel *timeLabel_2;
    QLabel *placesLabel_2;
    QPushButton *exitButton;
    QPushButton *buyMoreButton;
    QLabel *priceLabel;
    QLabel *priceLabel_2;

    void setupUi(QDialog *TicketWindow)
    {
        if (TicketWindow->objectName().isEmpty())
            TicketWindow->setObjectName(QString::fromUtf8("TicketWindow"));
        TicketWindow->resize(800, 600);
        TicketWindow->setMinimumSize(QSize(800, 600));
        TicketWindow->setMaximumSize(QSize(800, 600));
        TicketWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 199, 27);"));
        label = new QLabel(TicketWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 10, 211, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        filmLabel = new QLabel(TicketWindow);
        filmLabel->setObjectName(QString::fromUtf8("filmLabel"));
        filmLabel->setGeometry(QRect(110, 80, 81, 51));
        filmLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        genreLabel = new QLabel(TicketWindow);
        genreLabel->setObjectName(QString::fromUtf8("genreLabel"));
        genreLabel->setGeometry(QRect(110, 170, 81, 51));
        genreLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dateLabel = new QLabel(TicketWindow);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(110, 230, 81, 51));
        dateLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        timeLabel = new QLabel(TicketWindow);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(110, 290, 81, 51));
        timeLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        placesLabel = new QLabel(TicketWindow);
        placesLabel->setObjectName(QString::fromUtf8("placesLabel"));
        placesLabel->setGeometry(QRect(110, 350, 81, 51));
        placesLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        filmLabel_2 = new QLabel(TicketWindow);
        filmLabel_2->setObjectName(QString::fromUtf8("filmLabel_2"));
        filmLabel_2->setGeometry(QRect(250, 80, 501, 51));
        filmLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        genreLabel_2 = new QLabel(TicketWindow);
        genreLabel_2->setObjectName(QString::fromUtf8("genreLabel_2"));
        genreLabel_2->setGeometry(QRect(250, 170, 501, 51));
        genreLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dateLabel_2 = new QLabel(TicketWindow);
        dateLabel_2->setObjectName(QString::fromUtf8("dateLabel_2"));
        dateLabel_2->setGeometry(QRect(250, 230, 501, 51));
        dateLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        timeLabel_2 = new QLabel(TicketWindow);
        timeLabel_2->setObjectName(QString::fromUtf8("timeLabel_2"));
        timeLabel_2->setGeometry(QRect(250, 290, 501, 51));
        timeLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        placesLabel_2 = new QLabel(TicketWindow);
        placesLabel_2->setObjectName(QString::fromUtf8("placesLabel_2"));
        placesLabel_2->setGeometry(QRect(250, 350, 501, 51));
        placesLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        exitButton = new QPushButton(TicketWindow);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(210, 520, 161, 41));
        QFont font;
        font.setPointSize(18);
        exitButton->setFont(font);
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        exitButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        exitButton->setAutoDefault(false);
        buyMoreButton = new QPushButton(TicketWindow);
        buyMoreButton->setObjectName(QString::fromUtf8("buyMoreButton"));
        buyMoreButton->setGeometry(QRect(430, 520, 161, 41));
        buyMoreButton->setFont(font);
        buyMoreButton->setCursor(QCursor(Qt::PointingHandCursor));
        buyMoreButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        buyMoreButton->setAutoDefault(false);
        priceLabel = new QLabel(TicketWindow);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));
        priceLabel->setGeometry(QRect(110, 410, 131, 51));
        priceLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        priceLabel_2 = new QLabel(TicketWindow);
        priceLabel_2->setObjectName(QString::fromUtf8("priceLabel_2"));
        priceLabel_2->setGeometry(QRect(250, 410, 501, 51));
        priceLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        retranslateUi(TicketWindow);

        QMetaObject::connectSlotsByName(TicketWindow);
    } // setupUi

    void retranslateUi(QDialog *TicketWindow)
    {
        TicketWindow->setWindowTitle(QApplication::translate("TicketWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("TicketWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Your ticket:</span></p></body></html>", nullptr));
        filmLabel->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Film:</span></p></body></html>", nullptr));
        genreLabel->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Genre:</span></p></body></html>", nullptr));
        dateLabel->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Date:</span></p></body></html>", nullptr));
        timeLabel->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Time:</span></p></body></html>", nullptr));
        placesLabel->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Places:</span></p></body></html>", nullptr));
        filmLabel_2->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Film:</span></p></body></html>", nullptr));
        genreLabel_2->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Genre:</span></p></body></html>", nullptr));
        dateLabel_2->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Date:</span></p></body></html>", nullptr));
        timeLabel_2->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Time:</span></p></body></html>", nullptr));
        placesLabel_2->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Places:</span></p></body></html>", nullptr));
        exitButton->setText(QApplication::translate("TicketWindow", "Exit", nullptr));
        buyMoreButton->setText(QApplication::translate("TicketWindow", "Buy more", nullptr));
        priceLabel->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Price (BYN):</span></p></body></html>", nullptr));
        priceLabel_2->setText(QApplication::translate("TicketWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Price:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketWindow: public Ui_TicketWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETWINDOW_H
