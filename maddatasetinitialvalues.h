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

#ifndef MADDATASETINITIALVALUES_H
#define MADDATASETINITIALVALUES_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the overview tab.
 * @author Jason Jorgenson
 */

class MadDatasetInitialValues
{
public:
  MadDatasetInitialValues();
  ~MadDatasetInitialValues();

  // accessors

    QString notes() const;

    bool soilMoistureState() const;
    bool nMinState() const;

    double soilMoistureDepth() const;
    double nMinDepth() const;

    int soilMoistureObservations() const;
    int nMinObservations() const;

    double soilMoistureWeight() const;
    double nMinWeight() const;


    // mutators

    void setNotes (QString theNotes);

    void setSoilMoistureState (bool theSoilMoistureState);
    void setNMinState (bool theNMinState);

    void setSoilMoistureDepth (double theSoilMoistureDepth);
    void setNMinDepth (double theNMinDepth);

    void setSoilMoistureObservations (int theSoilMoistureObservations);
    void setNMinObservations (int theNMinObservations);

    void setSoilMoistureWeight (double theSoilMoistureWeight);
    void setNMinWeight (double theNMinWeight);

  private:
    QString mNotes;

    bool mSoilMoistureState;
    bool mNMinState;

    double mSoilMoistureDepth;
    double mNMinDepth;

    int mSoilMoistureObservations;
    int mNMinObservations;

    double mSoilMoistureWeight;
    double mNMinWeight;

};

#endif // MADDATASETINITIALVALUES_H
