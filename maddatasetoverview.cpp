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

// Qt includes
#include <QString>
#include <QMap>
#include <QPair>

// local includes
#include "maddatasetoverview.h"
#include "mad.h"

MadDatasetOverview::MadDatasetOverview()
{
}

MadDatasetOverview::~MadDatasetOverview()
{
}

//accessors

QString MadDatasetOverview::datasetName() const
{
  return mDatasetName;
}
QString MadDatasetOverview::datasetVersion() const
{
  return mDatasetVersion;
}
QString MadDatasetOverview::submitter() const
{
  return mSubmitter;
}
QString MadDatasetOverview::email() const
{
  return mEmail;
}
QString MadDatasetOverview::webLink() const
{
  return mWebLink;
}
QString MadDatasetOverview::usageRestriction() const
{
  return mUsageRestriction;
}
QString MadDatasetOverview::coverageNotes() const
{
  return mCoverageNotes;
}
QString MadDatasetOverview::comments() const
{
  return mComments;
}
QString MadDatasetOverview::resolutionNotes() const
{
  return mResolutionNotes;
}
QString MadDatasetOverview::variables() const
{
  return mVariables;
}
QString MadDatasetOverview::cropNotes() const
{
  return mCropNotes;
}
QString MadDatasetOverview::livestockNotes() const
{
  return mLivestockNotes;
}
bool MadDatasetOverview::periodOfRecordState() const
{
  return mPeriodOfRecordState;
}
bool MadDatasetOverview::economicState() const
{
  return mEconomicState;
}
bool MadDatasetOverview::genericState() const
{
  return mGenericState;
}
bool MadDatasetOverview::soilsState() const
{
  return mSoilsState;

}
bool MadDatasetOverview::weatherState() const
{
  return mWeatherState;
}
bool MadDatasetOverview::weatherGeneratorState() const
{
  return mWeatherGeneratorState;
}
bool MadDatasetOverview::climateProjectionState() const
{
  return mClimateProjectionState;
}
bool MadDatasetOverview::gridState() const
{
  return mGridState;
}
bool MadDatasetOverview::cropDataTypesState() const
{
  return mCropDataTypesState;
}
bool MadDatasetOverview::livestockDataTypesState() const
{
  return mLivestockDataTypesState;
}
QString MadDatasetOverview::periodOfRecordSpatialScale() const
{
  return mPeriodOfRecordSpatialScale;
}
QString MadDatasetOverview::economicSpatialScale() const
{
  return mEconomicSpatialScale;
}
QString MadDatasetOverview::genericSpatialScale() const
{
  return mGenericSpatialScale;
}
QString MadDatasetOverview::soilsSpatialScale() const
{
  return mSoilsSpatialScale;
}
QString MadDatasetOverview::weatherSpatialScale() const
{
  return mWeatherSpatialScale;
}
QString MadDatasetOverview::weatherGeneratorSpatialScale() const
{
  return mWeatherGeneratorSpatialScale;
}
QString MadDatasetOverview::climateProjectionSpatialScale() const
{
  return mClimateProjectionSpatialScale;
}
QString MadDatasetOverview::gridUnits() const
{
  return mGridUnits;
}
QString MadDatasetOverview::cropDataTypesFieldExperimentsSpatialScale() const
{
  return mCropDataTypesFieldExperimentsSpatialScale;
}
QString MadDatasetOverview::livestockDataTypesGeneticsSpatialScale() const
{
  return mLivestockDataTypesGeneticSpatialScale;
}

//mutators

void MadDatasetOverview::setDatasetName(QString theDatasetName)
{
  mDatasetName = theDatasetName;
}
void MadDatasetOverview::setDatasetVersion(QString theDatasetVersion)
{
  mDatasetVersion = theDatasetVersion;
}
void MadDatasetOverview::setSubmitter(QString theSubmitter)
{
  mSubmitter = theSubmitter;
}
void MadDatasetOverview::setEmail(QString theEmail)
{
  mEmail = theEmail;
}
void MadDatasetOverview::setWebLink(QString theWebLink)
{
  mWebLink = theWebLink;
}
void MadDatasetOverview::setUsageRestriction(QString theUsageRestriction)
{
  mUsageRestriction = theUsageRestriction;
}
void MadDatasetOverview::setCoverageNotes(QString theCoverageNotes)
{
  mCoverageNotes = theCoverageNotes;
}
void MadDatasetOverview::setComments(QString theComments)
{
  mComments = theComments;
}
void MadDatasetOverview::setResolutionNotes(QString theResolutionNotes)
{
  mResolutionNotes = theResolutionNotes;
}
void MadDatasetOverview::setVariables(QString theVariables)
{
  mVariables = theVariables;
}
void MadDatasetOverview::setCropNotes(QString theCropNotes)
{
  mCropNotes = theCropNotes;
}
void MadDatasetOverview::setLivestockNotes(QString theLivestockNotes)
{
  mLivestockNotes = theLivestockNotes;
}

void MadDatasetOverview::setPeriodOfRecordState(bool thePeriodOfRecordState)
{
  mPeriodOfRecordState = thePeriodOfRecordState;
}
void MadDatasetOverview::setEconomicState(bool theEconomicState)
{
  mEconomicState = theEconomicState;
}
void MadDatasetOverview::setGenericState(bool theGenericState)
{
  mGenericState = theGenericState;
}
void MadDatasetOverview::setSoilsState(bool theSoilsState)
{
  mSoilsState = theSoilsState;
}
void MadDatasetOverview::setWeatherState(bool theWeatherState)
{
  mWeatherState = theWeatherState;
}
void MadDatasetOverview::setWeatherGeneratorState(bool theWeatherGeneratorState)
{
  mWeatherGeneratorState = theWeatherGeneratorState;
}
void MadDatasetOverview::setClimateProjectionState(bool theClimateProjectionState)
{
  mClimateProjectionState = theClimateProjectionState;
}
void MadDatasetOverview::setGridState(bool theGridState)
{
  mGridState = theGridState;
}
void MadDatasetOverview::setCropDataTypesState(bool theCropDataTypesState)
{
  mCropDataTypesState = theCropDataTypesState;
}
void MadDatasetOverview::setLivestockDataTypesState(bool theLivestockDataTypesState)
{
  mLivestockDataTypesState = theLivestockDataTypesState;
}

void MadDatasetOverview::setPeriodOfRecordSpatialScale(QString thePeriodOfRecordSpatialScale)
{
  mPeriodOfRecordSpatialScale = thePeriodOfRecordSpatialScale;
}
void MadDatasetOverview::setEconomicSpatialScale(QString theEconomicSpatialScale)
{
  mEconomicSpatialScale = theEconomicSpatialScale;
}
void MadDatasetOverview::setGenericSpatialScale(QString theGenericSpatialScale)
{
  mGenericSpatialScale = theGenericSpatialScale;
}
void MadDatasetOverview::setSoilsSpatialScale(QString theSoilsSpatialScale)
{
  mSoilsSpatialScale = theSoilsSpatialScale;
}
void MadDatasetOverview::setWeatherSpatialScale(QString theWeatherSpatialScale)
{
  mWeatherSpatialScale = theWeatherSpatialScale;
}
void MadDatasetOverview::setWeatherGeneratorSpatialScale(QString theWeatherGeneratorSpatialScale)
{
  mWeatherGeneratorSpatialScale = theWeatherGeneratorSpatialScale;
}
void MadDatasetOverview::setClimateProjectionSpatialScale(QString theClimateProjectionSpatialScale)
{
  mClimateProjectionSpatialScale = theClimateProjectionSpatialScale;
}
void MadDatasetOverview::setgridUnits(QString theGridUnits)
{
  mGridUnits = theGridUnits;
}
void MadDatasetOverview::setcropDataTypesFieldExperimentsSpatialScale(QString theCropDataTypesFieldExperimentsSpatialScale)
{
  mCropDataTypesFieldExperimentsSpatialScale = theCropDataTypesFieldExperimentsSpatialScale;
}
void MadDatasetOverview::setlivestockDataTypesGeneticsSpatialScale(QString theLivestockDataTypesGeneticsSpatialScale)
{
  mLivestockDataTypesGeneticSpatialScale = theLivestockDataTypesGeneticsSpatialScale;
}

void MadDatasetOverview:: setCropDataTypesFieldExperimentsSpatialScale(QString theCropDataTypesFieldExperimentsSpatialScale)
{
  mCropDataTypesFieldExperimentsSpatialScale = theCropDataTypesFieldExperimentsSpatialScale;
}
void MadDatasetOverview:: setCropDataTypesGeneticSpatialScale(QString theCropDataTypesGeneticSpatialScale)
{
  mCropDataTypesGeneticSpatialScale = theCropDataTypesGeneticSpatialScale;
}
void MadDatasetOverview:: setCropDataTypesManagementSpatialScale(QString theCropDataTypesManagementSpatialScale)
{
  mCropDataTypesManagementSpatialScale = theCropDataTypesManagementSpatialScale;
}
void MadDatasetOverview:: setCropDataTypesPathogensSpatialScale(QString theCropDataTypesPathogensSpatialScale)
{
  mCropDataTypesPathogensSpatialScale = theCropDataTypesPathogensSpatialScale;
}
void MadDatasetOverview:: setCropDataTypesPhysiologySpatialScale(QString theCropDataTypesPhysiologySpatialScale)
{
  mCropDataTypesPhysiologySpatialScale = theCropDataTypesPhysiologySpatialScale;
}

void MadDatasetOverview:: setLivestockDataTypesGeneticSpatialScale(QString theLivestockDataTypesGeneticSpatialScale)
{
  mLivestockDataTypesGeneticSpatialScale = theLivestockDataTypesGeneticSpatialScale;
}
void MadDatasetOverview:: setLivestockDataTypesManagementSpatialScale(QString theLivestockDataTypesManagementSpatialScale)
{
  mLivestockDataTypesManagementSpatialScale = theLivestockDataTypesManagementSpatialScale;
}
void MadDatasetOverview:: setLivestockDataTypesPathogensSpatialScale(QString theLivestockDataTypesPathogensSpatialScale)
{
  mLivestockDataTypesPathogensSpatialScale = theLivestockDataTypesPathogensSpatialScale;
}
void MadDatasetOverview:: setLivestockDataTypesPhysiologySpatialScale(QString theLivestockDataTypesPhysiologySpatialScale)
{
  mLivestockDataTypesPhysiologySpatialScale = theLivestockDataTypesPhysiologySpatialScale;
}
