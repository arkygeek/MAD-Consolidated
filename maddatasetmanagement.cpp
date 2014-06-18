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
#include "maddatasetmanagement.h"
#include "mad.h"

MadDatasetManagement::MadDatasetManagement()
{
}

MadDatasetManagement::~MadDatasetManagement()
{
}

// accessors

QString MadDatasetManagement::notes() const
{
  return mNotes;
}

bool MadDatasetManagement::varietyState() const
{
  return mVarietyState;
}

bool MadDatasetManagement::sowingState() const
{
  return mSowingState;
}

bool MadDatasetManagement::harvestState() const
{
  return mHarvestState;
}

bool MadDatasetManagement::fertilisationState() const
{
  return mFertilisationState;
}

bool MadDatasetManagement::irrigationState() const
{
  return mIrrigationState;
}

bool MadDatasetManagement::seedDensityState() const
{
  return mSeedDensityState;
}

bool MadDatasetManagement::tillageState() const
{
  return mTillageState;
}



int MadDatasetManagement::varietyObservations() const
{
  return mVarietyObservations;
}
int MadDatasetManagement::sowingObservations() const
{
  return mSowingObservations;
}
int MadDatasetManagement::harvestObservations() const
{
  return mHarvestObservations;
}
int MadDatasetManagement::fertilisationObservations() const
{
  return mFertilisationObservations;
}
int MadDatasetManagement::irrigationObservations() const
{
  return mIrrigationObservations;
}
int MadDatasetManagement::seedDensityObservations() const
{
  return mSeedDensityObservations;
}
int MadDatasetManagement::tillageObservations() const
{
  return mTillageObservations;
}



double MadDatasetManagement::varietyWeight() const
{
  return mVarietyWeight;
}
double MadDatasetManagement::sowingWeight() const
{
  return mSowingWeight;
}
double MadDatasetManagement::harvestWeight() const
{
  return mHarvestWeight;
}
double MadDatasetManagement::fertilisationWeight() const
{
  return mFertilisationWeight;
}
double MadDatasetManagement::irrigationWeight() const
{
  return mIrrigationWeight;
}
double MadDatasetManagement::seedDensityWeight() const
{
  return mSeedDensityWeight;
}
double MadDatasetManagement::tillageWeight() const
{
  return mTillageWeight;
}

// mutators

void MadDatasetManagement::setNotes(QString theNotes)
{
  mNotes = theNotes;
}

void MadDatasetManagement::setVarietyState(bool theVarietyState)
{
  mVarietyState = theVarietyState;
}

void MadDatasetManagement::setSowingState(bool theSowingState)
{
  mSowingState = theSowingState;
}

void MadDatasetManagement::setHarvestState(bool theHarvestState)
{
  mHarvestState = theHarvestState;
}

void MadDatasetManagement::setFertilisationState(bool theFertilisationState)
{
  mFertilisationState = theFertilisationState;
}

void MadDatasetManagement::setIrrigationState(bool theIrrigationState)
{
  mIrrigationState = theIrrigationState;
}

void MadDatasetManagement::setSeedDensityState(bool theSeedDensityState)
{
  mSeedDensityState = theSeedDensityState;
}

void MadDatasetManagement::setTillageState(bool theTillageState)
{
  mTillageState = theTillageState;
}

void MadDatasetManagement::setVarietyObservations(int theVarietyObservations)
  {
    mVarietyObservations = theVarietyObservations;
  }
void MadDatasetManagement::setSowingObservations(int theSowingObservations)
  {
    mSowingObservations = theSowingObservations;
  }
void MadDatasetManagement::setHarvestObservations(int theHarvestObservations)
  {
    mHarvestObservations = theHarvestObservations;
  }
void MadDatasetManagement::setFertilisationObservations(int theFertilisationObservations)
  {
    mFertilisationObservations = theFertilisationObservations;
  }
void MadDatasetManagement::setIrrigationObservations(int theIrrigationObservations)
  {
    mIrrigationObservations = theIrrigationObservations;
  }
void MadDatasetManagement::setSeedDensityObservations(int theSeedDensityObservations)
  {
    mSeedDensityObservations = theSeedDensityObservations;
  }
void MadDatasetManagement::setTillageObservations(int theTillageObservations)
  {
    mTillageObservations = theTillageObservations;
  }

void MadDatasetManagement::setVarietyWeight(double theVarietyWeight)
  {
    mVarietyWeight = theVarietyWeight;
  }
void MadDatasetManagement::setSowingWeight(double theSowingWeight)
  {
    mSowingWeight = theSowingWeight;
  }
void MadDatasetManagement::setHarvestWeight(double theHarvestWeight)
  {
    mHarvestWeight = theHarvestWeight;
  }
void MadDatasetManagement::setFertilisationWeight(double theFertilisationWeight)
  {
    mFertilisationWeight = theFertilisationWeight;
  }
void MadDatasetManagement::setIrrigationWeight(double theIrrigationWeight)
  {
    mIrrigationWeight = theIrrigationWeight;
  }
void MadDatasetManagement::setSeedDensityWeight(double theSeedDensityWeight)
  {
    mSeedDensityWeight = theSeedDensityWeight;
  }
void MadDatasetManagement::setTillageWeight(double theTillageWeight)
  {
    mTillageWeight = theTillageWeight;
  }
