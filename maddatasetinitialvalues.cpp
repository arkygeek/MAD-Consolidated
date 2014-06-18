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


#include "maddatasetinitialvalues.h"

MadDatasetInitialValues::MadDatasetInitialValues()
{
}
MadDatasetInitialValues::~MadDatasetInitialValues()
{
}

// accessors

QString MadDatasetInitialValues::notes() const
{
  return mNotes;
}

bool MadDatasetInitialValues::soilMoistureState() const
{
  return mSoilMoistureState;
}
bool MadDatasetInitialValues::nMinState() const
{
  return mNMinState;
}

double MadDatasetInitialValues::soilMoistureDepth() const
{
  return mSoilMoistureDepth;
}
double MadDatasetInitialValues::nMinDepth() const
{
  return mNMinDepth;
}

int MadDatasetInitialValues::soilMoistureObservations() const
{
  return mSoilMoistureObservations;
}
int MadDatasetInitialValues::nMinObservations() const
{
  return mNMinObservations;
}


double MadDatasetInitialValues::soilMoistureWeight() const
{
  return mSoilMoistureWeight;
}
double MadDatasetInitialValues::nMinWeight() const
{
  return mNMinWeight;
}



// mutators

void MadDatasetInitialValues::setNotes(QString theNotes)
{
  mNotes = theNotes;
}

void MadDatasetInitialValues::setSoilMoistureState (bool theSoilMoistureState)
{
  mSoilMoistureState = theSoilMoistureState;
}
void MadDatasetInitialValues::setNMinState (bool theNMinState)
{
  mNMinState = theNMinState;
}

void MadDatasetInitialValues::setSoilMoistureDepth (double theSoilMoistureDepth)
{
  mSoilMoistureDepth = theSoilMoistureDepth;
}
void MadDatasetInitialValues::setNMinDepth (double theNMinDepth)
{
  mNMinDepth = theNMinDepth;
}

void MadDatasetInitialValues::setSoilMoistureObservations (int theSoilMoistureObservations)
{
  mSoilMoistureObservations = theSoilMoistureObservations;
}
void MadDatasetInitialValues::setNMinObservations (int theNMinObservations)
{
  mNMinObservations = theNMinObservations;
}


void MadDatasetInitialValues::setSoilMoistureWeight (double theSoilMoistureWeight)
{
  mSoilMoistureWeight = theSoilMoistureWeight;
}
void MadDatasetInitialValues::setNMinWeight (double theNMinWeight)
{
  mNMinWeight = theNMinWeight;
}


