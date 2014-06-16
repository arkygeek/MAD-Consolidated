#-------------------------------------------------
#
# Project created by QtCreator 2014-06-11T07:32:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
qtHaveModule(printsupport): QT += printsupport

TARGET = MAD
TEMPLATE = app


SOURCES += main.cpp\
        madmainform.cpp \
    madguid.cpp \
    maddatasetoverview.cpp \
    rankpointgenerator.cpp

HEADERS  += madmainform.h \
    madguid.h \
    maddatasetoverview.h \
    mad.h \
    rankpointgenerator.h

FORMS    += madmainformbase.ui

RESOURCES += \
    Resources/ResourceFiles.qrc
