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

#ifndef MADDATASETPHENOLOGY_H
#define MADDATASETPHENOLOGY_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the overview tab.
 * @author Jason Jorgenson
 */

class MadDatasetPhenology
{
public:
  MadDatasetPhenology();

  ~MadDatasetPhenology();

  // accessors
  QString notes() const;

  bool emergenceState() const;
  bool stemElongationState() const;
  bool earEmergenceState() const;
  bool floweringState() const;
  bool yellowRipenessState() const;

  int emergenceObservations() const;
  int stemElongationObservations() const;
  int earEmergenceObservations() const;
  int floweringObservations() const;
  int yellowRipenessObservations() const;

  double emergenceWeight() const;
  double stemElongationWeight() const;
  double earEmergenceWeight() const;
  double floweringWeight() const;
  double yellowRipenessWeight() const;

  // mutators

  void setNotes (QString theNotes);

  void setEmergenceState (bool theEmergenceState);
  void setStemElongationState (bool theStemElongationState);
  void setEarEmergenceState (bool theEarEmergenceState);
  void setFloweringState (bool theFloweringState);
  void setYellowRipenessState (bool theYellowRipenessState);

  void setEmergenceObservations (int theEmergenceObservations);
  void setStemElongationObservations (int theStemElongationObservations);
  void setEarEmergenceObservations (int theEarEmergenceObservations);
  void setFloweringObservations (int theFloweringObservations);
  void setYellowRipenessObservations (int theYellowRipenessObservations);

  void setEmergenceWeight (double theEmergenceWeight);
  void setStemElongationWeight (double theStemElongationWeight);
  void setEarEmergenceWeight (double theEarEmergenceWeight);
  void setFloweringWeight (double theFloweringWeight);
  void setYellowRipenessWeight (double theYellowRipenessWeight);

private:
  QString mNotes;

  bool mEmergenceState;
  bool mStemElongationState;
  bool mEarEmergenceState;
  bool mFloweringState;
  bool mYellowRipenessState;

  int mEmergenceObservations;
  int mStemElongationObservations;
  int mEarEmergenceObservations;
  int mFloweringObservations;
  int mYellowRipenessObservations;

  double mEmergenceWeight;
  double mStemElongationWeight;
  double mEarEmergenceWeight;
  double mFloweringWeight;
  double mYellowRipenessWeight;
};

#endif // MADDATASETPHENOLOGY_H
