/********************************************************************************
** Form generated from reading UI file 'editwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWINDOW_H
#define UI_EDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditWindow
{
public:
    QLabel *nameLabel;
    QLabel *genreLabel;
    QLabel *timeLabel;
    QLabel *label;
    QPushButton *addButton;
    QLineEdit *nameEdit;
    QLineEdit *genreEdit;
    QLineEdit *timeEdit;

    void setupUi(QDialog *EditWindow)
    {
        if (EditWindow->objectName().isEmpty())
            EditWindow->setObjectName(QString::fromUtf8("EditWindow"));
        EditWindow->resize(600, 400);
        EditWindow->setMinimumSize(QSize(600, 400));
        EditWindow->setMaximumSize(QSize(600, 400));
        nameLabel = new QLabel(EditWindow);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(50, 70, 58, 21));
        genreLabel = new QLabel(EditWindow);
        genreLabel->setObjectName(QString::fromUtf8("genreLabel"));
        genreLabel->setGeometry(QRect(50, 130, 58, 21));
        timeLabel = new QLabel(EditWindow);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(50, 190, 58, 21));
        label = new QLabel(EditWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 10, 211, 51));
        addButton = new QPushButton(EditWindow);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(210, 280, 161, 61));
        QFont font;
        font.setPointSize(18);
        addButton->setFont(font);
        addButton->setCursor(QCursor(Qt::PointingHandCursor));
        addButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.505208, y1:0.0797727, x2:0.510417, y2:1, stop:0 rgba(0, 0, 0, 204), stop:1 rgba(59, 59, 59, 255));"));
        addButton->setAutoDefault(false);
        nameEdit = new QLineEdit(EditWindow);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(120, 70, 400, 30));
        nameEdit->setMaxLength(50);
        nameEdit->setClearButtonEnabled(true);
        genreEdit = new QLineEdit(EditWindow);
        genreEdit->setObjectName(QString::fromUtf8("genreEdit"));
        genreEdit->setGeometry(QRect(120, 130, 400, 30));
        genreEdit->setMaxLength(50);
        genreEdit->setClearButtonEnabled(true);
        timeEdit = new QLineEdit(EditWindow);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(120, 190, 400, 30));
        timeEdit->setMaxLength(50);
        timeEdit->setClearButtonEnabled(true);

        retranslateUi(EditWindow);

        QMetaObject::connectSlotsByName(EditWindow);
    } // setupUi

    void retranslateUi(QDialog *EditWindow)
    {
        EditWindow->setWindowTitle(QApplication::translate("EditWindow", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("EditWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Name:</span></p></body></html>", nullptr));
        genreLabel->setText(QApplication::translate("EditWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Genre:</span></p></body></html>", nullptr));
        timeLabel->setText(QApplication::translate("EditWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Time:</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("EditWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Enter new seance</span></p></body></html>", nullptr));
        addButton->setText(QApplication::translate("EditWindow", "Add new", nullptr));
        nameEdit->setPlaceholderText(QString());
        genreEdit->setPlaceholderText(QString());
        timeEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditWindow: public Ui_EditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
