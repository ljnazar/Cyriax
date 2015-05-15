#-------------------------------------------------
#
# Project created by QtCreator 2014-11-21T10:15:33
#
#-------------------------------------------------

QT       += core gui

QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cyriax
TEMPLATE = app


SOURCES += main.cpp\
        firewall.cpp \
    mostrarreglas.cpp \
    conf.cpp \
    eliminarreglas.cpp \
    confbd.cpp \
    agregarreglaweb.cpp \
    agregarreglas.cpp

HEADERS  += firewall.h \
    mostrarreglas.h \
    conf.h \
    eliminarreglas.h \
    confbd.h \
    agregarreglaweb.h \
    agregarreglas.h

FORMS    += firewall.ui \
    mostrarreglas.ui \
    conf.ui \
    eliminarreglas.ui \
    confbd.ui \
    agregarreglaweb.ui \
    agregarreglas.ui
