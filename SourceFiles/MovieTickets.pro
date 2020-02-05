QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    algorithm.cpp \
    calendarwindow.cpp \
    constiterator.cpp \
    editwindow.cpp \
    exception.cpp \
    film.cpp \
    filmswindow.cpp \
    informationwindow.cpp \
    iterator.cpp \
    main.cpp \
    mainwindow.cpp \
    placeswindow.cpp \
    queue.cpp \
    seance.cpp \
    ticket.cpp \
    ticketwindow.cpp

HEADERS += \
    Node.h \
    algorithm.h \
    calendarwindow.h \
    constiterator.h \
    editwindow.h \
    exception.h \
    film.h \
    filmswindow.h \
    informationwindow.h \
    iterator.h \
    mainwindow.h \
    placeswindow.h \
    queue.h \
    seance.h \
    ticket.h \
    ticketwindow.h

FORMS += \
    calendarwindow.ui \
    editwindow.ui \
    filmswindow.ui \
    informationwindow.ui \
    mainwindow.ui \
    placeswindow.ui \
    ticketwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
