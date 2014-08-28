#-------------------------------------------------
#
# Project created by QtCreator 2014-08-28T09:16:37
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Project1
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

LIBS += -llapack -lblas -larmadillo
