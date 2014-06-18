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

#ifndef MADDATASETMANAGEMENT_H
#define MADDATASETMANAGEMENT_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the overview tab.
 * @author Jason Jorgenson
 */

class MadDatasetManagement
{
public:
  MadDatasetManagement();

  ~MadDatasetManagement();

  // accessors
  QString notes() const;

  bool varietyState() const;
  bool sowingState() const;
  bool harvestState() const;
  bool fertilisationState() const;
  bool irrigationState() const;
  bool seedDensityState() const;
  bool tillageState() const;

  int varietyObservations() const;
  int sowingObservations() const;
  int harvestObservations() const;
  int fertilisationObservations() const;
  int irrigationObservations() const;
  int seedDensityObservations() const;
  int tillageObservations() const;

  double varietyWeight() const;
  double sowingWeight() const;
  double harvestWeight() const;
  double fertilisationWeight() const;
  double irrigationWeight() const;
  double seedDensityWeight() const;
  double tillageWeight() const;

  // mutators
  void setNotes (QString theNotes);

  void setVarietyState (bool theVarietyState);
  void setSowingState (bool theSowingState);
  void setHarvestState (bool theHarvestState);
  void setFertilisationState (bool theFertilisationState);
  void setIrrigationState (bool theIrrigationState);
  void setSeedDensityState (bool theSeedDensityState);
  void setTillageState (bool theTillageState);

  void setVarietyObservations (int theVarietyObservations);
  void setSowingObservations (int theSowingObservations);
  void setHarvestObservations (int theHarvestObservations);
  void setFertilisationObservations (int theFertilisationObservations);
  void setIrrigationObservations (int theIrrigationObservations);
  void setSeedDensityObservations (int theSeedDensityObservations);
  void setTillageObservations (int theTillageObservations);

  void setVarietyWeight (double theVarietyWeight);
  void setSowingWeight (double theSowingWeight);
  void setHarvestWeight (double theHarvestWeight);
  void setFertilisationWeight (double theFertilisationWeight);
  void setIrrigationWeight (double theIrrigationWeight);
  void setSeedDensityWeight (double theSeedDensityWeight);
  void setTillageWeight (double theTillageWeight);

private:
  QString mNotes;

  bool mVarietyState;
  bool mSowingState;
  bool mHarvestState;
  bool mFertilisationState;
  bool mIrrigationState;
  bool mSeedDensityState;
  bool mTillageState;

  int mVarietyObservations;
  int mSowingObservations;
  int mHarvestObservations;
  int mFertilisationObservations;
  int mIrrigationObservations;
  int mSeedDensityObservations;
  int mTillageObservations;

  double mVarietyWeight;
  double mSowingWeight;
  double mHarvestWeight;
  double mFertilisationWeight;
  double mIrrigationWeight;
  double mSeedDensityWeight;
  double mTillageWeight;

};

#endif // MADDATASETMANAGEMENT_H
