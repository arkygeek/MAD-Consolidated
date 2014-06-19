#-------------------------------------------------
#
# Project created by QtCreator 2014-06-11T07:32:27
#
#-------------------------------------------------

QT       += core gui enginio webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
qtHaveModule(printsupport): QT += printsupport

TARGET = MAD
TEMPLATE = app


SOURCES += main.cpp\
        madmainform.cpp \
    madguid.cpp \
    maddatasetoverview.cpp \
    rankpointgenerator.cpp \
    datasetrankformmodel.cpp \
    madutils.cpp \
    maddataset.cpp \
    madmodel.cpp \
    madscenario.cpp \
    maddatasetparameter.cpp \
    madmodelparameter.cpp \
    maddatasetmanagement.cpp \
    maddatasetphenology.cpp \
    maddatasetprevcrop.cpp \
    maddatasetinitialvalues.cpp \
    maddatasetsoil.cpp \
    maddatasetsite.cpp \
    maddatasetweather.cpp \
    maddatasetsvcrop.cpp

HEADERS  += madmainform.h \
    madguid.h \
    maddatasetoverview.h \
    mad.h \
    rankpointgenerator.h \
    datasetrankformmodel.h \
    madutils.h \
    maddataset.h \
    madmodel.h \
    madscenario.h \
    maddatasetparameter.h \
    madmodelparameter.h \
    maddatasetmanagement.h \
    maddatasetphenology.h \
    maddatasetprevcrop.h \
    maddatasetinitialvalues.h \
    maddatasetsoil.h \
    maddatasetsite.h \
    maddatasetweather.h \
    maddatasetsvcrop.h

FORMS    += madmainformbase.ui

RESOURCES += \
    Resources/ResourceFiles.qrc
