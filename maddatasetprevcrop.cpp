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


#include "maddatasetprevcrop.h"

MadDatasetPrevCrop::MadDatasetPrevCrop()
{
}

MadDatasetPrevCrop::~MadDatasetPrevCrop()
{
}

// accessors

QString MadDatasetPrevCrop::notes() const
{
  return mNotes;
}

bool MadDatasetPrevCrop::cropState() const
{
  return mCropState;
}
bool MadDatasetPrevCrop::sowingDateState() const
{
  return mSowingDateState;
}
bool MadDatasetPrevCrop::harvestDateState() const
{
  return mHarvestDateState;
}
bool MadDatasetPrevCrop::yieldState() const
{
  return mYieldState;
}
bool MadDatasetPrevCrop::residueManagementState() const
{
  return mResidueManagementState;
}
bool MadDatasetPrevCrop::fertilisationState() const
{
  return mFertilisationState;
}
bool MadDatasetPrevCrop::irrigationState() const
{
  return mIrrigationState;
}

int MadDatasetPrevCrop::cropObservations() const
{
  return mCropObservations;
}
int MadDatasetPrevCrop::sowingDateObservations() const
{
  return mSowingDateObservations;
}
int MadDatasetPrevCrop::harvestDateObservations() const
{
  return mHarvestDateObservations;
}
int MadDatasetPrevCrop::yieldObservations() const
{
  return mYieldObservations;
}
int MadDatasetPrevCrop::residueManagementObservations() const
{
  return mResidueManagementObservations;
}
int MadDatasetPrevCrop::fertilisationObservations() const
{
  return mFertilisationObservations;
}
int MadDatasetPrevCrop::irrigationObservations() const
{
  return mIrrigationObservations;
}

double MadDatasetPrevCrop::cropWeight() const
{
  return mCropWeight;
}
double MadDatasetPrevCrop::sowingDateWeight() const
{
  return mSowingDateWeight;
}
double MadDatasetPrevCrop::harvestDateWeight() const
{
  return mHarvestDateWeight;
}
double MadDatasetPrevCrop::yieldWeight() const
{
  return mYieldWeight;
}
double MadDatasetPrevCrop::residueManagementWeight() const
{
  return mResidueManagementWeight;
}
double MadDatasetPrevCrop::fertilisationWeight() const
{
  return mFertilisationWeight;
}
double MadDatasetPrevCrop::irrigationWeight() const
{
  return mIrrigationWeight;
}


// mutators

void MadDatasetPrevCrop::setNotes(QString theNotes)
{
  mNotes = theNotes;
}

void MadDatasetPrevCrop::setCropState (bool theCropState)
{
  mCropState = theCropState;
}
void MadDatasetPrevCrop::setSowingDateState (bool theSowingDateState)
{
  mSowingDateState = theSowingDateState;
}
void MadDatasetPrevCrop::setHarvestDateState (bool theHarvestDateState)
{
  mHarvestDateState = theHarvestDateState;
}
void MadDatasetPrevCrop::setYieldState (bool theYieldState)
{
  mYieldState = theYieldState;
}
void MadDatasetPrevCrop::setResidueManagementState (bool theResidueManagementState)
{
  mResidueManagementState = theResidueManagementState;
}
void MadDatasetPrevCrop::setFertilisationState (bool theFertilisationState)
{
  mFertilisationState = theFertilisationState;
}
void MadDatasetPrevCrop::setIrrigationState (bool theIrrigationState)
{
  mIrrigationState = theIrrigationState;
}

void MadDatasetPrevCrop::setCropObservations (int theCropObservations)
{
  mCropObservations = theCropObservations;
}
void MadDatasetPrevCrop::setSowingDateObservations (int theSowingDateObservations)
{
  mSowingDateObservations = theSowingDateObservations;
}
void MadDatasetPrevCrop::setHarvestDateObservations (int theHarvestDateObservations)
{
  mHarvestDateObservations = theHarvestDateObservations;
}
void MadDatasetPrevCrop::setYieldObservations (int theYieldObservations)
{
  mYieldObservations = theYieldObservations;
}
void MadDatasetPrevCrop::setResidueManagementObservations (int theResidueManagementObservations)
{
  mResidueManagementObservations = theResidueManagementObservations;
}
void MadDatasetPrevCrop::setFertilisationObservations (int theFertilisationObservations)
{
  mFertilisationObservations = theFertilisationObservations;
}
void MadDatasetPrevCrop::setIrrigationObservations (int theIrrigationObservations)
{
  mIrrigationObservations = theIrrigationObservations;
}

void MadDatasetPrevCrop::setCropWeight (double theCropWeight)
{
  mCropWeight = theCropWeight;
}
void MadDatasetPrevCrop::setSowingDateWeight (double theSowingDateWeight)
{
  mSowingDateWeight = theSowingDateWeight;
}
void MadDatasetPrevCrop::setHarvestDateWeight (double theHarvestDateWeight)
{
  mHarvestDateWeight = theHarvestDateWeight;
}
void MadDatasetPrevCrop::setYieldWeight (double theYieldWeight)
{
  mYieldWeight = theYieldWeight;
}
void MadDatasetPrevCrop::setResidueManagementWeight (double theResidueManagementWeight)
{
  mResidueManagementWeight = theResidueManagementWeight;
}
void MadDatasetPrevCrop::setFertilisationWeight (double theFertilisationWeight)
{
  mFertilisationWeight = theFertilisationWeight;
}
void MadDatasetPrevCrop::setIrrigationWeight (double theIrrigationWeight)
{
  mIrrigationWeight = theIrrigationWeight;
}
