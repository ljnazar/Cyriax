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

####### Output directory

OBJECTS_DIR = build/
MOC_DIR = build/
UI_DIR = build/

####### Files

SOURCES += src/main.cpp\
    src/firewall.cpp \
    src/mostrarreglas.cpp \
    src/conf.cpp \
    src/eliminarreglas.cpp \
    src/confbd.cpp \
    src/agregarreglaweb.cpp \
    src/agregarreglas.cpp

HEADERS += src/firewall.h \
    src/mostrarreglas.h \
    src/conf.h \
    src/eliminarreglas.h \
    src/confbd.h \
    src/agregarreglaweb.h \
    src/agregarreglas.h

FORMS += src/firewall.ui \
    src/mostrarreglas.ui \
    src/conf.ui \
    src/eliminarreglas.ui \
    src/confbd.ui \
    src/agregarreglaweb.ui \
    src/agregarreglas.ui


DESTDIR = bin/



