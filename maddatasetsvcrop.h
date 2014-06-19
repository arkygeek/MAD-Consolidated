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

#ifndef MADDATASETSVCROP_H
#define MADDATASETSVCROP_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the svcrop tab.
 * @author Jason Jorgenson
 */

class MadDatasetSVCrop
{
public:
  MadDatasetSVCrop();
  ~MadDatasetSVCrop();

  // accessors

    QString notes() const;

    bool yieldState() const;
    bool aGrBiomassState() const;
    bool weightOrgansState() const;
    bool rootBiomassState() const;
    bool nInAGrBiomassState() const;
    bool nInOrgansState() const;
    bool lAIState() const;

    double yieldLayers() const;
    double aGrBiomassLayers() const;
    double weightOrgansLayers() const;
    double rootBiomassLayers() const;
    double nInAGrBiomassLayers() const;
    double nInOrgansLayers() const;
    double lAILayers() const;

    int yieldObservations() const;
    int aGrBiomassObservations() const;
    int weightOrgansObservations() const;
    int rootBiomassObservations() const;
    int nInAGrBiomassObservations() const;
    int nInOrgansObservations() const;
    int lAIObservations() const;

    double yieldWeight() const;
    double aGrBiomassWeight() const;
    double weightOrgansWeight() const;
    double rootBiomassWeight() const;
    double nInAGrBiomassWeight() const;
    double nInOrgansWeight() const;
    double lAIWeight() const;

    double yieldReplicates() const;
    double aGrBiomassReplicates() const;
    double weightOrgansReplicates() const;
    double rootBiomassReplicates() const;
    double nInAGrBiomassReplicates() const;
    double nInOrgansReplicates() const;
    double lAIReplicates() const;



    // mutators

    void setNotes (QString theNotes);

    void setYieldState (bool theYieldState);
    void setAGrBiomassState (bool theAGrBiomassState);
    void setWeightOrgansState (bool theWeightOrgansState);
    void setRootBiomassState (bool theRootBiomassState);
    void setNInAGrBiomassState (bool theNInAGrBiomassState);
    void setNInOrgansState (bool theNInOrgansState);
    void setLAIState (bool theLAIState);

    void setYieldLayers (double theYieldLayers);
    void setAGrBiomassLayers (double theAGrBiomassLayers);
    void setWeightOrgansLayers (double theWeightOrgansLayers);
    void setRootBiomassLayers (double theRootBiomassLayers);
    void setNInAGrBiomassLayers (double theNInAGrBiomassLayers);
    void setNInOrgansLayers (double theNInOrgansLayers);
    void setLAILayers (double theLAILayers);

    void setYieldObservations (int theYieldObservations);
    void setAGrBiomassObservations (int theAGrBiomassObservations);
    void setWeightOrgansObservations (int theWeightOrgansObservations);
    void setRootBiomassObservations (int theRootBiomassObservations);
    void setNInAGrBiomassObservations (int theNInAGrBiomassObservations);
    void setNInOrgansObservations (int theNInOrgansObservations);
    void setLAIObservations (int theLAIObservations);

    void setYieldWeight (double theYieldWeight);
    void setAGrBiomassWeight (double theAGrBiomassWeight);
    void setWeightOrgansWeight (double theWeightOrgansWeight);
    void setRootBiomassWeight (double theRootBiomassWeight);
    void setNInAGrBiomassWeight (double theNInAGrBiomassWeight);
    void setNInOrgansWeight (double theNInOrgansWeight);
    void setLAIWeight (double theLAIWeight);

    void setYieldReplicates (double theYieldReplicates);
    void setAGrBiomassReplicates (double theAGrBiomassReplicates);
    void setWeightOrgansReplicates (double theWeightOrgansReplicates);
    void setRootBiomassReplicates (double theRootBiomassReplicates);
    void setNInAGrBiomassReplicates (double theNInAGrBiomassReplicates);
    void setNInOrgansReplicates (double theNInOrgansReplicates);
    void setLAIReplicates (double theLAIReplicates);


  private:
    QString mNotes;

    bool mYieldState;
    bool mAGrBiomassState;
    bool mWeightOrgansState;
    bool mRootBiomassState;
    bool mNInAGrBiomassState;
    bool mNInOrgansState;
    bool mLAIState;

    double mYieldLayers;
    double mAGrBiomassLayers;
    double mWeightOrgansLayers;
    double mRootBiomassLayers;
    double mNInAGrBiomassLayers;
    double mNInOrgansLayers;
    double mLAILayers;

    int mYieldObservations;
    int mAGrBiomassObservations;
    int mWeightOrgansObservations;
    int mRootBiomassObservations;
    int mNInAGrBiomassObservations;
    int mNInOrgansObservations;
    int mLAIObservations;

    double mYieldWeight;
    double mAGrBiomassWeight;
    double mWeightOrgansWeight;
    double mRootBiomassWeight;
    double mNInAGrBiomassWeight;
    double mNInOrgansWeight;
    double mLAIWeight;

    double mYieldReplicates;
    double mAGrBiomassReplicates;
    double mWeightOrgansReplicates;
    double mRootBiomassReplicates;
    double mNInAGrBiomassReplicates;
    double mNInOrgansReplicates;
    double mLAIReplicates;


};

#endif // MADDATASETSVCROP_H
