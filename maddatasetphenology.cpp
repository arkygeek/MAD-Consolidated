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

#include "maddatasetphenology.h"

MadDatasetPhenology::MadDatasetPhenology()
{
}

MadDatasetPhenology::~MadDatasetPhenology()
{
}


// accessors

QString MadDatasetPhenology::notes() const
{
  return mNotes;
}

bool MadDatasetPhenology::emergenceState() const
{
  return mEmergenceState;
}

// mutators

void MadDatasetPhenology::setNotes(QString theNotes)
{
  mNotes = theNotes;
}

void MadDatasetPhenology::setEmergenceState(bool theEmergenceState)
{
  mEmergenceState = theEmergenceState;
}
void MadDatasetPhenology::setStemElongationState(bool theStemElongationState)
{
  mStemElongationState = theStemElongationState;
}
void MadDatasetPhenology::setEarEmergenceState(bool theEarEmergenceState)
{
  mEarEmergenceState = theEarEmergenceState;
}
void MadDatasetPhenology::setFloweringState(bool theFloweringState)
{
  mFloweringState = theFloweringState;
}
void MadDatasetPhenology::setYellowRipenessState(bool theYellowRipenessState)
{
  mYellowRipenessState = theYellowRipenessState;
}

void MadDatasetPhenology::setEmergenceObservations(int theEmergenceObservations)
{
  mEmergenceObservations = theEmergenceObservations;
}
void MadDatasetPhenology::setStemElongationObservations(int theStemElongationObservations)
{
  mStemElongationObservations = theStemElongationObservations;
}
void MadDatasetPhenology::setEarEmergenceObservations(int theEarEmergenceObservations)
{
  mEarEmergenceObservations = theEarEmergenceObservations;
}
void MadDatasetPhenology::setFloweringObservations(int theFloweringObservations)
{
  mFloweringObservations = theFloweringObservations;
}
void MadDatasetPhenology::setYellowRipenessObservations(int theYellowRipenessObservations)
{
  mYellowRipenessObservations = theYellowRipenessObservations;
}

void MadDatasetPhenology::setEmergenceWeight(double theEmergenceWeight)
{
  mEmergenceWeight = theEmergenceWeight;
}
void MadDatasetPhenology::setStemElongationWeight(double theStemElongationWeight)
{
  mStemElongationWeight = theStemElongationWeight;
}
void MadDatasetPhenology::setEarEmergenceWeight(double theEarEmergenceWeight)
{
  mEarEmergenceWeight = theEarEmergenceWeight;
}
void MadDatasetPhenology::setFloweringWeight(double theFloweringWeight)
{
  mFloweringWeight = theFloweringWeight;
}
void MadDatasetPhenology::setYellowRipenessWeight(double theYellowRipenessWeight)
{
  mYellowRipenessWeight = theYellowRipenessWeight;
}
