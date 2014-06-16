#-------------------------------------------------
#
# Project created by QtCreator 2014-06-11T07:32:27
#
#-------------------------------------------------

QT       += core gui enginio

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
qtHaveModule(printsupport): QT += printsupport

TARGET = MAD
TEMPLATE = app


SOURCES += main.cpp\
        madmainform.cpp \
    madguid.cpp \
    maddatasetoverview.cpp \
    rankpointgenerator.cpp \
    datasetrankformmodel.cpp

HEADERS  += madmainform.h \
    madguid.h \
    maddatasetoverview.h \
    mad.h \
    rankpointgenerator.h \
    datasetrankformmodel.h

FORMS    += madmainformbase.ui

RESOURCES += \
    Resources/ResourceFiles.qrc
