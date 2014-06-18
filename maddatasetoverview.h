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

#ifndef MADDATASETOVERVIEW_H
#define MADDATASETOVERVIEW_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the overview tab.
 * @author Jason Jorgenson
 */

class MadDatasetOverview{

public:
  MadDatasetOverview();

  ~MadDatasetOverview();

  // accessors
  QString datasetName() const;
  QString datasetVersion() const;
  QString submitter() const;
  QString email() const;
  QString webLink() const;
  QString usageRestriction() const;
  QString coverageNotes() const;
  QString comments() const;
  QString resolutionNotes() const;
  QString variables() const;
  QString cropNotes() const;
  QString livestockNotes() const;

  bool periodOfRecordState() const;
  bool economicState() const;
  bool genericState() const;
  bool soilsState() const;
  bool weatherState() const;
  bool weatherGeneratorState() const;
  bool climateProjectionState() const;
  bool gridState() const;
  bool cropDataTypesState() const;
  bool livestockDataTypesState() const;

  QString periodOfRecordSpatialScale() const;
  QString economicSpatialScale() const;
  QString genericSpatialScale() const;
  QString soilsSpatialScale() const;
  QString weatherSpatialScale() const;
  QString weatherGeneratorSpatialScale() const;
  QString climateProjectionSpatialScale() const;
  QString gridUnits() const;
  QString cropDataTypesFieldExperimentsSpatialScale() const;
  QString livestockDataTypesGeneticsSpatialScale() const;

  //QString cropDataTypesFieldExperimentsSpatialScale() const;
  QString cropDataTypesGeneticSpatialScale() const;
  QString cropDataTypesManagementSpatialScale() const;
  QString cropDataTypesPathogensSpatialScale() const;
  QString cropDataTypesPhysiologySpatialScale() const;

  QString livestockDataTypesGeneticSpatialScale() const;
  QString livestockDataTypesManagementSpatialScale() const;
  QString livestockDataTypesPathogensSpatialScale() const;
  QString livestockDataTypesPhysiologySpatialScale() const;

  // mutators

  void setDatasetName (QString theDatasetName);
  void setDatasetVersion (QString theDatasetVersion);
  void setSubmitter (QString theDatasetVersion);
  void setEmail (QString theDatasetVersion);
  void setWebLink (QString theWebLink);
  void setUsageRestriction (QString theUsageRestriction);
  void setCoverageNotes (QString theCoverageNotes);
  void setComments (QString theComments);
  void setResolutionNotes(QString theResolutionNotes);
  void setVariables (QString theVariables);
  void setCropNotes (QString theCropNotes);
  void setLivestockNotes (QString theLivestockNotes);

  void setPeriodOfRecordState (bool thePeriodOfRecordState);
  void setEconomicState (bool theEconomicState);
  void setGenericState (bool theGenericState);
  void setSoilsState (bool theSoilsState);
  void setWeatherState (bool theWeatherState);
  void setWeatherGeneratorState (bool theWeatherGeneratorState);
  void setClimateProjectionState (bool theClimateProjectionState);
  void setGridState (bool theGridState);
  void setCropDataTypesState (bool theCropDataTypesState);
  void setLivestockDataTypesState (bool theLivestockDataTypesState);

  void setPeriodOfRecordSpatialScale (QString thePeriodOfRecordSpatialScale);
  void setEconomicSpatialScale (QString theEconomicSpatialScale);
  void setGenericSpatialScale (QString theGenericSpatialScale);
  void setSoilsSpatialScale (QString theSoilsSpatialScale);
  void setWeatherSpatialScale (QString theWeatherSpatialScale);
  void setWeatherGeneratorSpatialScale (QString theWeatherGeneratorSpatialScale);
  void setClimateProjectionSpatialScale (QString theClimateProjectionSpatialScale);
  void setgridUnits (QString theGridUnits);
  void setcropDataTypesFieldExperimentsSpatialScale (QString theCropDataTypesFieldExperimentsSpatialScale);
  void setlivestockDataTypesGeneticsSpatialScale (QString theLivestockDataTypesGeneticsSpatialScale);

  void setCropDataTypesFieldExperimentsSpatialScale(QString theCropDataTypesFieldExperimentsSpatialScale);
  void setCropDataTypesGeneticSpatialScale(QString theCropDataTypesGeneticSpatialScale);
  void setCropDataTypesManagementSpatialScale(QString theCropDataTypesManagementSpatialScale);
  void setCropDataTypesPathogensSpatialScale(QString theCropDataTypesPathogensSpatialScale);
  void setCropDataTypesPhysiologySpatialScale(QString theCropDataTypesPhysiologySpatialScale);

  void setLivestockDataTypesGeneticSpatialScale(QString theLivestockDataTypesGeneticSpatialScale);
  void setLivestockDataTypesManagementSpatialScale(QString theLivestockDataTypesManagementSpatialScale);
  void setLivestockDataTypesPathogensSpatialScale(QString theLivestockDataTypesPathogensSpatialScale);
  void setLivestockDataTypesPhysiologySpatialScale(QString theLivestockDataTypesPhysiologySpatialScale);

private:

  QString mDatasetName;
  QString mDatasetVersion;
  QString mSubmitter;
  QString mEmail;
  QString mWebLink;
  QString mUsageRestriction;
  QString mCoverageNotes;
  QString mComments;
  QString mResolutionNotes;
  QString mVariables;
  QString mCropNotes;
  QString mLivestockNotes;

  bool mPeriodOfRecordState;
  bool mEconomicState;
  bool mGenericState;
  bool mSoilsState;
  bool mWeatherState;
  bool mWeatherGeneratorState;
  bool mClimateProjectionState;
  bool mGridState;
  bool mCropDataTypesState;
  bool mLivestockDataTypesState;

  QString mPeriodOfRecordSpatialScale;
  QString mEconomicSpatialScale;
  QString mGenericSpatialScale;
  QString mSoilsSpatialScale;
  QString mWeatherSpatialScale;
  QString mWeatherGeneratorSpatialScale;
  QString mClimateProjectionSpatialScale;
  QString mGridUnits;

  QString mCropDataTypesFieldExperimentsSpatialScale;
  QString mCropDataTypesGeneticSpatialScale;
  QString mCropDataTypesManagementSpatialScale;
  QString mCropDataTypesPathogensSpatialScale;
  QString mCropDataTypesPhysiologySpatialScale;

  QString mLivestockDataTypesGeneticSpatialScale;
  QString mLivestockDataTypesManagementSpatialScale;
  QString mLivestockDataTypesPathogensSpatialScale;
  QString mLivestockDataTypesPhysiologySpatialScale;
};

#endif // MADDATASETOVERVIEW_H
