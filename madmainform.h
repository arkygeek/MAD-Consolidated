/***************************************************************************
 *   File:  datasetclassification.cpp created: 16/12/2013                  *
 *   Class info: DatasetClassification                                     *
 *   Copyright (C) 2013 by: Jason S. Jorgenson                             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef MADMAINFORM_H
#define MADMAINFORM_H

// Qt includes
#include <QMainWindow>
#include <QTreeWidgetItem>
#include <QStringListModel>
#include <Enginio/Enginio>

#ifndef QT_NO_PRINTER
#include <QPrinter>
#endif
#include <QJsonObject>
QT_BEGIN_NAMESPACE
class QAction;
class QLabel;
class QMenu;
class QScrollArea;
class QScrollBar;
class QPushButton;
class EnginioClient;
class EnginioReply;
QT_END_NAMESPACE
QT_USE_NAMESPACE

// local includes
#include "madguid.h"
#include "rankpointgenerator.h" // the calculations library

namespace Ui {
class MadMainForm;
}

class MadMainForm : public QMainWindow,
                    public MadGuid
{
    Q_OBJECT

public:
    explicit MadMainForm(QWidget *parent = 0);
    ~MadMainForm();

private slots:
    void on_treewModules_itemSelectionChanged();
    void on_treeWidgetDataset_itemSelectionChanged();

    void on_toolButtonDatabase_clicked();

    void on_toolButtonTextFile_clicked();

    void on_toolButtonEmbedded_clicked();

    void on_toolButtonTextFileFormat_clicked();

    void on_toolButtonTextFileGeneral_clicked();
    
    void on_toolButtonTextFileTime_clicked();

    void on_toolButtonTextFileUpdate_clicked();

    void on_toolButtonDBGeneral_clicked();

    void on_toolButtonDBTables_clicked();

    void on_toolButtonDBTime_clicked();

    void on_toolButtonDBUpdate_clicked();

    void on_treeWidgetModels_itemSelectionChanged();

    void on_treeWidgetScenarios_itemSelectionChanged();

    // models
    void on_tlbtnBasicInfoGoToWebsite_clicked();
    void on_cbDiagramsSelectDiagram_currentIndexChanged(int theIndex);

    void openDiagramFile();
    void print();
    void zoomIn();
    void zoomOut();
    void normalSize();
    void fitToWindow();
    void about();

    void on_toolButtonZoomOut_clicked();

    void on_toolButtonZoomIn_clicked();

    void on_chbxDiagramsFitToWindow_clicked(bool theCheckedBool);

    void on_pbSave_clicked();

    void on_pbLoad_clicked();

    void on_pbLoadModels_clicked();

private:
    Ui::MadMainForm *ui;
    QStringListModel *mpQStringListModel;

    // models


    void createActions();
    void createMenus();
    void updateActions();
    void scaleImage(double theFactor);
    void adjustScrollBar(QScrollBar *thepScrollBar, double factor);

    double mScaleFactor;

  #ifndef QT_NO_PRINTER
      QPrinter printer;
  #endif

      QAction *openAct;
      QAction *printAct;
      QAction *exitAct;
      QAction *zoomInAct;
      QAction *zoomOutAct;
      QAction *normalSizeAct;
      QAction *fitToWindowAct;
      QAction *aboutAct;
      QAction *aboutQtAct;

      QMenu *fileMenu;
      QMenu *viewMenu;
      QMenu *helpMenu;

      QJsonObject generateModelHeaderJson();
      QJsonObject generateModelTechnicalJson();
      QJsonObject generateModelDiagramsJson();
      QJsonObject generateModelUseApplicationJson();
      QJsonObject generateModelEconResultIndicatorsJson();
      QJsonObject generateModelBiophysicalLinksJson();
      QJsonObject generateModelIntegrationJson();
      QJsonObject generateModelStateOfDevelopmentJson();
      QJsonObject generateModelPropertyRightsJson();
      QJsonObject generateModelPublicationsJson();
      QJsonObject generateModelMoreJson();
      QJsonObject generateModelJson();

      void saveModelJsonToFile(QJsonDocument theQJsonDocument);
      void setFormModelFromJson();
      QJsonDocument openModelJsonFile();

};

#endif // MADMAINFORM_H
