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

#ifndef MADDATASETPREVCROP_H
#define MADDATASETPREVCROP_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the overview tab.
 * @author Jason Jorgenson
 */

class MadDatasetPrevCrop
{
public:
  MadDatasetPrevCrop();

  ~MadDatasetPrevCrop();

  // accessors

  QString notes() const;

  bool cropState() const;
  bool sowingDateState() const;
  bool harvestDateState() const;
  bool yieldState() const;
  bool residueManagementState() const;
  bool fertilisationState() const;
  bool irrigationState() const;

  int cropObservations() const;
  int sowingDateObservations() const;
  int harvestDateObservations() const;
  int yieldObservations() const;
  int residueManagementObservations() const;
  int fertilisationObservations() const;
  int irrigationObservations() const;

  double cropWeight() const;
  double sowingDateWeight() const;
  double harvestDateWeight() const;
  double yieldWeight() const;
  double residueManagementWeight() const;
  double fertilisationWeight() const;
  double irrigationWeight() const;

  // mutators

  void setNotes (QString theNotes);

  void setCropState (bool theCropState);
  void setSowingDateState (bool theSowingDateState);
  void setHarvestDateState (bool theHarvestDateState);
  void setYieldState (bool theYieldState);
  void setResidueManagementState (bool theResidueManagementState);
  void setFertilisationState (bool theFertilisationState);
  void setIrrigationState (bool theIrrigationState);

  void setCropObservations (int theCropObservations);
  void setSowingDateObservations (int theSowingDateObservations);
  void setHarvestDateObservations (int theHarvestDateObservations);
  void setYieldObservations (int theYieldObservations);
  void setResidueManagementObservations (int theResidueManagementObservations);
  void setFertilisationObservations (int theFertilisationObservations);
  void setIrrigationObservations (int theIrrigationObservations);

  void setCropWeight (double theCropWeight);
  void setSowingDateWeight (double theSowingDateWeight);
  void setHarvestDateWeight (double theHarvestDateWeight);
  void setYieldWeight (double theYieldWeight);
  void setResidueManagementWeight (double theResidueManagementWeight);
  void setFertilisationWeight (double theFertilisationWeight);
  void setIrrigationWeight (double theIrrigationWeight);

private:
  QString mNotes;

  bool mCropState;
  bool mSowingDateState;
  bool mHarvestDateState;
  bool mYieldState;
  bool mResidueManagementState;
  bool mFertilisationState;
  bool mIrrigationState;

  int mCropObservations;
  int mSowingDateObservations;
  int mHarvestDateObservations;
  int mYieldObservations;
  int mResidueManagementObservations;
  int mFertilisationObservations;
  int mIrrigationObservations;

  double mCropWeight;
  double mSowingDateWeight;
  double mHarvestDateWeight;
  double mYieldWeight;
  double mResidueManagementWeight;
  double mFertilisationWeight;
  double mIrrigationWeight;
};

#endif // MADDATASETPREVCROP_H
