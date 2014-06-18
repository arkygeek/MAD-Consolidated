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

#ifndef MADDATASETSOIL_H
#define MADDATASETSOIL_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the soil tab.
 * @author Jason Jorgenson
 */

class MadDatasetSoil
{
public:
  MadDatasetSoil();
  ~MadDatasetSoil();

  // accessors

    QString notes() const;

    bool cOrgState() const;
    bool nOrgState() const;
    bool textureState() const;
    bool bulkDensityState() const;
    bool fieldCapacityState() const;
    bool wiltingPointState() const;
    bool pfCurveState() const;
    bool hydrCondCurveState() const;
    bool pHState() const;


    double cOrgDepth() const;
    double nOrgDepth() const;
    double textureDepth() const;
    double bulkDensityDepth() const;
    double fieldCapacityDepth() const;
    double wiltingPointDepth() const;
    double pfCurveDepth() const;
    double hydrCondCurveDepth() const;
    double pHDepth() const;

    int cOrgObservations() const;
    int nOrgObservations() const;
    int textureObservations() const;
    int bulkDensityObservations() const;
    int fieldCapacityObservations() const;
    int wiltingPointObservations() const;
    int pfCurveObservations() const;
    int hydrCondCurveObservations() const;
    int pHObservations() const;

    double cOrgWeight() const;
    double nOrgWeight() const;
    double textureWeight() const;
    double bulkDensityWeight() const;
    double fieldCapacityWeight() const;
    double wiltingPointWeight() const;
    double pfCurveWeight() const;
    double hydrCondCurveWeight() const;
    double pHWeight() const;


    // mutators

    void setNotes (QString theNotes);

    void setCOrgState (bool theCOrgState);
    void setNOrgState (bool theNOrgState);
    void setTextureState (bool theTextureState);
    void setBulkDensityState (bool theBulkDensityState);
    void setFieldCapacityState (bool theFieldCapacityState);
    void setWiltingPointState (bool theWiltingPointState);
    void setPfCurveState (bool thePfCurveState);
    void setHydrCondCurveState (bool theHydrCondCurveState);
    void setPHState (bool thePHState);

    void setCOrgDepth (double theCOrgDepth);
    void setNOrgDepth (double theNOrgDepth);
    void setTextureDepth (double theTextureDepth);
    void setBulkDensityDepth (double theBulkDensityDepth);
    void setFieldCapacityDepth (double theFieldCapacityDepth);
    void setWiltingPointDepth (double theWiltingPointDepth);
    void setPfCurveDepth (double thePfCurveDepth);
    void setHydrCondCurveDepth (double theHydrCondCurveDepth);
    void setPHDepth (double thePHDepth);

    void setCOrgObservations (int theCOrgObservations);
    void setNOrgObservations (int theNOrgObservations);
    void setTextureObservations (int theTextureObservations);
    void setBulkDensityObservations (int theBulkDensityObservations);
    void setFieldCapacityObservations (int theFieldCapacityObservations);
    void setWiltingPointObservations (int theWiltingPointObservations);
    void setPfCurveObservations (int thePfCurveObservations);
    void setHydrCondCurveObservations (int theHydrCondCurveObservations);
    void setPHObservations (int thePHObservations);

    void setCOrgWeight (double theCOrgWeight);
    void setNOrgWeight (double theNOrgWeight);
    void setTextureWeight (double theTextureWeight);
    void setBulkDensityWeight (double theBulkDensityWeight);
    void setFieldCapacityWeight (double theFieldCapacityWeight);
    void setWiltingPointWeight (double theWiltingPointWeight);
    void setPfCurveWeight (double thePfCurveWeight);
    void setHydrCondCurveWeight (double theHydrCondCurveWeight);
    void setPHWeight (double thePHWeight);

  private:
    QString mNotes;

    bool mCOrgState;
    bool mNOrgState;
    bool mTextureState;
    bool mBulkDensityState;
    bool mFieldCapacityState;
    bool mWiltingPointState;
    bool mPfCurveState;
    bool mHydrCondCurveState;
    bool mPHState;

    double mCOrgDepth;
    double mNOrgDepth;
    double mTextureDepth;
    double mBulkDensityDepth;
    double mFieldCapacityDepth;
    double mWiltingPointDepth;
    double mPfCurveDepth;
    double mHydrCondCurveDepth;
    double mPHDepth;

    int mCOrgObservations;
    int mNOrgObservations;
    int mTextureObservations;
    int mBulkDensityObservations;
    int mFieldCapacityObservations;
    int mWiltingPointObservations;
    int mPfCurveObservations;
    int mHydrCondCurveObservations;
    int mPHObservations;

    double mCOrgWeight;
    double mNOrgWeight;
    double mTextureWeight;
    double mBulkDensityWeight;
    double mFieldCapacityWeight;
    double mWiltingPointWeight;
    double mPfCurveWeight;
    double mHydrCondCurveWeight;
    double mPHWeight;

};

#endif // MADDATASETSOIL_H
