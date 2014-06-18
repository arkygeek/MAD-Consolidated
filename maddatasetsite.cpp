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


#include "maddatasetsite.h"

MadDatasetSite::MadDatasetSite()
{
}

MadDatasetSite::~MadDatasetSite()
{
}

// accessors

QString MadDatasetSite::notes() const
{
  return mNotes;
}

bool MadDatasetSite::latitudeState() const
{
  return mLatitudeState;
}
bool MadDatasetSite::longitudeState() const
{
  return mLongitudeState;
}
//
bool MadDatasetSite::altitudeState() const
{
  return mAltitudeState;
}
bool MadDatasetSite::slopeExpositionState() const
{
  return mSlopeExpositionState;
}

int MadDatasetSite::latitudeObservations() const
{
  return mLatitudeObservations;
}
int MadDatasetSite::longitudeObservations() const
{
  return mLongitudeObservations;
}
//
int MadDatasetSite::altitudeObservations() const
{
  return mAltitudeObservations;
}
int MadDatasetSite::slopeExpositionObservations() const
{
  return mSlopeExpositionObservations;
}

double MadDatasetSite::latitudeWeight() const
{
  return mLatitudeWeight;
}
double MadDatasetSite::longitudeWeight() const
{
  return mLongitudeWeight;
}
//
double MadDatasetSite::altitudeWeight() const
{
  return mAltitudeWeight;
}
double MadDatasetSite::slopeExpositionWeight() const
{
  return mSlopeExpositionWeight;
}


// mutators

void MadDatasetSite::setNotes(QString theNotes)
{
  mNotes = theNotes;
}

void MadDatasetSite::setLatitudeState (bool theLatitudeState)
{
  mLatitudeState = theLatitudeState;
}
void MadDatasetSite::setLongitudeState (bool theLongitudeState)
{
  mLongitudeState = theLongitudeState;
}
void MadDatasetSite::setAltitudeState (bool theAltitudeState)
{
  mAltitudeState = theAltitudeState;
}
void MadDatasetSite::setSlopeExpositionState (bool theSlopeExpositionState)
{
  mSlopeExpositionState = theSlopeExpositionState;
}

void MadDatasetSite::setLatitudeObservations (int theLatitudeObservations)
{
  mLatitudeObservations = theLatitudeObservations;
}
void MadDatasetSite::setLongitudeObservations (int theLongitudeObservations)
{
  mLongitudeObservations = theLongitudeObservations;
}
void MadDatasetSite::setAltitudeObservations (int theAltitudeObservations)
{
  mAltitudeObservations = theAltitudeObservations;
}
void MadDatasetSite::setSlopeExpositionObservations (int theSlopeExpositionObservations)
{
  mSlopeExpositionObservations = theSlopeExpositionObservations;
}

void MadDatasetSite::setLatitudeWeight (double theLatitudeWeight)
{
  mLatitudeWeight = theLatitudeWeight;
}
void MadDatasetSite::setLongitudeWeight (double theLongitudeWeight)
{
  mLongitudeWeight = theLongitudeWeight;
}
void MadDatasetSite::setAltitudeWeight (double theAltitudeWeight)
{
  mAltitudeWeight = theAltitudeWeight;
}
void MadDatasetSite::setSlopeExpositionWeight (double theSlopeExpositionWeight)
{
  mSlopeExpositionWeight = theSlopeExpositionWeight;
}
