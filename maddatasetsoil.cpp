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


#include "maddatasetsoil.h"

MadDatasetSoil::MadDatasetSoil()
{
}
MadDatasetSoil::~MadDatasetSoil()
{
}

// accessors

QString MadDatasetSoil::notes() const
{
  return mNotes;
}

bool MadDatasetSoil::cOrgState() const
{
  return mCOrgState;
}
bool MadDatasetSoil::nOrgState() const
{
  return mNOrgState;
}
//
bool MadDatasetSoil::textureState() const
{
  return mTextureState;
}
bool MadDatasetSoil::bulkDensityState() const
{
  return mBulkDensityState;
}
bool MadDatasetSoil::fieldCapacityState() const
{
  return mFieldCapacityState;
}
bool MadDatasetSoil::wiltingPointState() const
{
  return mWiltingPointState;
}
bool MadDatasetSoil::pfCurveState() const
{
  return mPfCurveState;
}
bool MadDatasetSoil::hydrCondCurveState() const
{
  return mHydrCondCurveState;
}
bool MadDatasetSoil::pHState() const
{
  return mPHState;
}

double MadDatasetSoil::cOrgDepth() const
{
  return mCOrgDepth;
}
double MadDatasetSoil::nOrgDepth() const
{
  return mNOrgDepth;
}
double MadDatasetSoil::textureDepth() const
{
  return mTextureDepth;
}
double MadDatasetSoil::bulkDensityDepth() const
{
  return mBulkDensityDepth;
}
double MadDatasetSoil::fieldCapacityDepth() const
{
  return mFieldCapacityDepth;
}
double MadDatasetSoil::wiltingPointDepth() const
{
  return mWiltingPointDepth;
}
double MadDatasetSoil::pfCurveDepth() const
{
  return mPfCurveDepth;
}
double MadDatasetSoil::hydrCondCurveDepth() const
{
  return mHydrCondCurveDepth;
}
double MadDatasetSoil::pHDepth() const
{
  return mPHDepth;
}

int MadDatasetSoil::cOrgObservations() const
{
  return mCOrgObservations;
}
int MadDatasetSoil::nOrgObservations() const
{
  return mNOrgObservations;
}
//
int MadDatasetSoil::textureObservations() const
{
  return mTextureObservations;
}
int MadDatasetSoil::bulkDensityObservations() const
{
  return mBulkDensityObservations;
}
int MadDatasetSoil::fieldCapacityObservations() const
{
  return mFieldCapacityObservations;
}
int MadDatasetSoil::wiltingPointObservations() const
{
  return mWiltingPointObservations;
}
int MadDatasetSoil::pfCurveObservations() const
{
  return mPfCurveObservations;
}
int MadDatasetSoil::hydrCondCurveObservations() const
{
  return mHydrCondCurveObservations;
}
int MadDatasetSoil::pHObservations() const
{
  return mPHObservations;
}

double MadDatasetSoil::cOrgWeight() const
{
  return mCOrgWeight;
}
double MadDatasetSoil::nOrgWeight() const
{
  return mNOrgWeight;
}
//
double MadDatasetSoil::textureWeight() const
{
  return mTextureWeight;
}
double MadDatasetSoil::bulkDensityWeight() const
{
  return mBulkDensityWeight;
}
double MadDatasetSoil::fieldCapacityWeight() const
{
  return mFieldCapacityWeight;
}
double MadDatasetSoil::wiltingPointWeight() const
{
  return mWiltingPointWeight;
}
double MadDatasetSoil::pfCurveWeight() const
{
  return mPfCurveWeight;
}
double MadDatasetSoil::hydrCondCurveWeight() const
{
  return mHydrCondCurveWeight;
}
double MadDatasetSoil::pHWeight() const
{
  return mPHWeight;
}

// mutators

void MadDatasetSoil::setNotes(QString theNotes)
{
  mNotes = theNotes;
}

void MadDatasetSoil::setCOrgState (bool theCOrgState)
{
  mCOrgState = theCOrgState;
}
void MadDatasetSoil::setNOrgState (bool theNOrgState)
{
  mNOrgState = theNOrgState;
}
void MadDatasetSoil::setTextureState (bool theTextureState)
{
  mTextureState = theTextureState;
}
void MadDatasetSoil::setBulkDensityState (bool theBulkDensityState)
{
  mBulkDensityState = theBulkDensityState;
}
void MadDatasetSoil::setFieldCapacityState (bool theFieldCapacityState)
{
  mFieldCapacityState = theFieldCapacityState;
}
void MadDatasetSoil::setWiltingPointState (bool theWiltingPointState)
{
  mWiltingPointState = theWiltingPointState;
}
void MadDatasetSoil::setPfCurveState (bool thePfCurveState)
{
  mPfCurveState = thePfCurveState;
}
void MadDatasetSoil::setHydrCondCurveState (bool theHydrCondCurveState)
{
  mHydrCondCurveState = theHydrCondCurveState;
}
void MadDatasetSoil::setPHState (bool thePHState)
{
  mPHState = thePHState;
}

void MadDatasetSoil::setCOrgDepth (double theCOrgDepth)
{
  mCOrgDepth = theCOrgDepth;
}
void MadDatasetSoil::setNOrgDepth (double theNOrgDepth)
{
  mNOrgDepth = theNOrgDepth;
}
void MadDatasetSoil::setTextureDepth (double theTextureDepth)
{
  mTextureDepth = theTextureDepth;
}
void MadDatasetSoil::setBulkDensityDepth (double theBulkDensityDepth)
{
  mBulkDensityDepth = theBulkDensityDepth;
}
void MadDatasetSoil::setFieldCapacityDepth (double theFieldCapacityDepth)
{
  mFieldCapacityDepth = theFieldCapacityDepth;
}
void MadDatasetSoil::setWiltingPointDepth (double theWiltingPointDepth)
{
  mWiltingPointDepth = theWiltingPointDepth;
}
void MadDatasetSoil::setPfCurveDepth (double thePfCurveDepth)
{
  mPfCurveDepth = thePfCurveDepth;
}
void MadDatasetSoil::setHydrCondCurveDepth (double theHydrCondCurveDepth)
{
  mHydrCondCurveDepth = theHydrCondCurveDepth;
}
void MadDatasetSoil::setPHDepth (double thePHDepth)
{
  mPHDepth = thePHDepth;
}

void MadDatasetSoil::setCOrgObservations (int theCOrgObservations)
{
  mCOrgObservations = theCOrgObservations;
}
void MadDatasetSoil::setNOrgObservations (int theNOrgObservations)
{
  mNOrgObservations = theNOrgObservations;
}
void MadDatasetSoil::setTextureObservations (int theTextureObservations)
{
  mTextureObservations = theTextureObservations;
}
void MadDatasetSoil::setBulkDensityObservations (int theBulkDensityObservations)
{
  mBulkDensityObservations = theBulkDensityObservations;
}
void MadDatasetSoil::setFieldCapacityObservations (int theFieldCapacityObservations)
{
  mFieldCapacityObservations = theFieldCapacityObservations;
}
void MadDatasetSoil::setWiltingPointObservations (int theWiltingPointObservations)
{
  mWiltingPointObservations = theWiltingPointObservations;
}
void MadDatasetSoil::setPfCurveObservations (int thePfCurveObservations)
{
  mPfCurveObservations = thePfCurveObservations;
}
void MadDatasetSoil::setHydrCondCurveObservations (int theHydrCondCurveObservations)
{
  mHydrCondCurveObservations = theHydrCondCurveObservations;
}
void MadDatasetSoil::setPHObservations (int thePHObservations)
{
  mPHObservations = thePHObservations;
}

void MadDatasetSoil::setCOrgWeight (double theCOrgWeight)
{
  mCOrgWeight = theCOrgWeight;
}
void MadDatasetSoil::setNOrgWeight (double theNOrgWeight)
{
  mNOrgWeight = theNOrgWeight;
}
void MadDatasetSoil::setTextureWeight (double theTextureWeight)
{
  mTextureWeight = theTextureWeight;
}
void MadDatasetSoil::setBulkDensityWeight (double theBulkDensityWeight)
{
  mBulkDensityWeight = theBulkDensityWeight;
}
void MadDatasetSoil::setFieldCapacityWeight (double theFieldCapacityWeight)
{
  mFieldCapacityWeight = theFieldCapacityWeight;
}
void MadDatasetSoil::setWiltingPointWeight (double theWiltingPointWeight)
{
  mWiltingPointWeight = theWiltingPointWeight;
}
void MadDatasetSoil::setPfCurveWeight (double thePfCurveWeight)
{
  mPfCurveWeight = thePfCurveWeight;
}
void MadDatasetSoil::setHydrCondCurveWeight (double theHydrCondCurveWeight)
{
  mHydrCondCurveWeight = theHydrCondCurveWeight;
}
void MadDatasetSoil::setPHWeight (double thePHWeight)
{
  mPHWeight = thePHWeight;
}
