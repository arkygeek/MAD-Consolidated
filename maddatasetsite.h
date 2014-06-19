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

#ifndef MADDATASETSITE_H
#define MADDATASETSITE_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the soil tab.
 * @author Jason Jorgenson
 */

class MadDatasetSite
{
public:
  MadDatasetSite();
  ~MadDatasetSite();

  // accessors

    QString notes() const;

    bool latitudeState() const;
    bool longitudeState() const;
    bool altitudeState() const;
    bool slopeExpositionState() const;

    int latitudeObservations() const;
    int longitudeObservations() const;
    int altitudeObservations() const;
    int slopeExpositionObservations() const;

    double latitudeWeight() const;
    double longitudeWeight() const;
    double altitudeWeight() const;
    double slopeExpositionWeight() const;


    // mutators

    void setNotes (QString theNotes);

    void setLatitudeState (bool theLatitudeState);
    void setLongitudeState (bool theLongitudeState);
    void setAltitudeState (bool theAltitudeState);
    void setSlopeExpositionState (bool theSlopeExpositionState);

    void setLatitudeDepth (double theLatitudeDepth);
    void setLongitudeDepth (double theLongitudeDepth);
    void setAltitudeDepth (double theAltitudeDepth);
    void setSlopeExpositionDepth (double theSlopeExpositionDepth);

    void setLatitudeObservations (int theLatitudeObservations);
    void setLongitudeObservations (int theLongitudeObservations);
    void setAltitudeObservations (int theAltitudeObservations);
    void setSlopeExpositionObservations (int theSlopeExpositionObservations);

    void setLatitudeWeight (double theLatitudeWeight);
    void setLongitudeWeight (double theLongitudeWeight);
    void setAltitudeWeight (double theAltitudeWeight);
    void setSlopeExpositionWeight (double theSlopeExpositionWeight);

  private:
    QString mNotes;

    bool mLatitudeState;
    bool mLongitudeState;
    bool mAltitudeState;
    bool mSlopeExpositionState;

    double mLatitudeDepth;
    double mLongitudeDepth;
    double mAltitudeDepth;
    double mSlopeExpositionDepth;

    int mLatitudeObservations;
    int mLongitudeObservations;
    int mAltitudeObservations;
    int mSlopeExpositionObservations;

    double mLatitudeWeight;
    double mLongitudeWeight;
    double mAltitudeWeight;
    double mSlopeExpositionWeight;

};

#endif // MADDATASETSITE_H
