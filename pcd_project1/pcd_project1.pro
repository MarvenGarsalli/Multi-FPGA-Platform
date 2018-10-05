#-------------------------------------------------
#
# Project created by QtCreator 2017-04-05T13:24:45
#
#-------------------------------------------------

QT       += core gui
QT      += xml
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pcd_project1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    frame_2.cpp \
    frame_3.cpp \
    frame_4.cpp \
    frame_1.cpp \
    interfacebank.cpp \
    clock_and_reset_model.cpp \
    mainframe.cpp

HEADERS  += mainwindow.h \
    frame_2.h \
    frame_3.h \
    frame_4.h \
    frame_1.h \
    interfacebank.h \
    clock_and_reset_model.h \
    mainframe.h

FORMS    += \
    frame_1.ui \
    frame_2.ui \
    frame_3.ui \
    frame_4.ui \
    mainwindow.ui \
    interfacebank.ui \
    clock_and_reset_model.ui

DISTFILES += \
    image/unita.jpg \
    image/unitb.jpg \
    image/unitc.jpg \
    image/unitd.jpg \
    images/unita.jpg \
    images/unitb.jpg \
    images/unitc.jpg \
    images/unitd.jpg
