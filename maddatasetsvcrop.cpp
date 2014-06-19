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


#include "maddatasetsvcrop.h"

MadDatasetSVCrop::MadDatasetSVCrop()
{
}
MadDatasetSVCrop::~MadDatasetSVCrop()
{
}


// accessors

QString MadDatasetSVCrop::notes() const {return mNotes;}

bool MadDatasetSVCrop::yieldState() const {return mYieldState;}
bool MadDatasetSVCrop::aGrBiomassState() const{return mAGrBiomassState;}
bool MadDatasetSVCrop::weightOrgansState() const{return mWeightOrgansState;}
bool MadDatasetSVCrop::rootBiomassState() const{return mRootBiomassState;}
bool MadDatasetSVCrop::nInAGrBiomassState() const{return mNInAGrBiomassState;}
bool MadDatasetSVCrop::nInOrgansState() const{return mNInOrgansState;}
bool MadDatasetSVCrop::lAIState() const{return mLAIState;}


double MadDatasetSVCrop::yieldLayers() const {return mYieldLayers;}
double MadDatasetSVCrop::aGrBiomassLayers() const{return mAGrBiomassLayers;}
double MadDatasetSVCrop::weightOrgansLayers() const{return mWeightOrgansLayers;}
double MadDatasetSVCrop::rootBiomassLayers() const{return mRootBiomassLayers;}
double MadDatasetSVCrop::nInAGrBiomassLayers() const{return mNInAGrBiomassLayers;}
double MadDatasetSVCrop::nInOrgansLayers() const{return mNInOrgansLayers;}
double MadDatasetSVCrop::lAILayers() const{return mLAILayers;}


int MadDatasetSVCrop::yieldObservations() const{return mYieldObservations;}
int MadDatasetSVCrop::aGrBiomassObservations() const{return mAGrBiomassObservations;}
int MadDatasetSVCrop::weightOrgansObservations() const{return mWeightOrgansObservations;}
int MadDatasetSVCrop::rootBiomassObservations() const{return mRootBiomassObservations;}
int MadDatasetSVCrop::nInAGrBiomassObservations() const{return mNInAGrBiomassObservations;}
int MadDatasetSVCrop::nInOrgansObservations() const{return mNInOrgansObservations;}
int MadDatasetSVCrop::lAIObservations() const{return mLAIObservations;}


double MadDatasetSVCrop::yieldWeight() const{return mYieldWeight;}
double MadDatasetSVCrop::aGrBiomassWeight() const{return mAGrBiomassWeight;}
double MadDatasetSVCrop::weightOrgansWeight() const{return mWeightOrgansWeight;}
double MadDatasetSVCrop::rootBiomassWeight() const{return mRootBiomassWeight;}
double MadDatasetSVCrop::nInAGrBiomassWeight() const{return mNInAGrBiomassWeight;}
double MadDatasetSVCrop::nInOrgansWeight() const{return mNInOrgansWeight;}
double MadDatasetSVCrop::lAIWeight() const{return mLAIWeight;}


double MadDatasetSVCrop::yieldReplicates() const{return mYieldReplicates;}
double MadDatasetSVCrop::aGrBiomassReplicates() const{return mAGrBiomassReplicates;}
double MadDatasetSVCrop::weightOrgansReplicates() const{return mWeightOrgansReplicates;}
double MadDatasetSVCrop::rootBiomassReplicates() const{return mRootBiomassReplicates;}
double MadDatasetSVCrop::nInAGrBiomassReplicates() const{return mNInAGrBiomassReplicates;}
double MadDatasetSVCrop::nInOrgansReplicates() const{return mNInOrgansReplicates;}
double MadDatasetSVCrop::lAIReplicates() const{return mLAIReplicates;}



// mutators
void MadDatasetSVCrop::setNotes(QString theNotes){mNotes = theNotes;}

void MadDatasetSVCrop::setYieldState (bool theYieldState){mYieldState = theYieldState;}
void MadDatasetSVCrop::setAGrBiomassState (bool theAGrBiomassState){mAGrBiomassState = theAGrBiomassState;}
void MadDatasetSVCrop::setWeightOrgansState (bool theWeightOrgansState){mWeightOrgansState = theWeightOrgansState;}
void MadDatasetSVCrop::setRootBiomassState (bool theRootBiomassState){mRootBiomassState = theRootBiomassState;}
void MadDatasetSVCrop::setNInAGrBiomassState (bool theNInAGrBiomassState){mNInAGrBiomassState = theNInAGrBiomassState;}
void MadDatasetSVCrop::setNInOrgansState (bool theNInOrgansState){mNInOrgansState = theNInOrgansState;}
void MadDatasetSVCrop::setLAIState (bool theLAIState){mLAIState = theLAIState;}


void MadDatasetSVCrop::setYieldLayers (double theYieldLayers){mYieldLayers = theYieldLayers;}
void MadDatasetSVCrop::setAGrBiomassLayers (double theAGrBiomassLayers){mAGrBiomassLayers = theAGrBiomassLayers;}
void MadDatasetSVCrop::setWeightOrgansLayers (double theWeightOrgansLayers){mWeightOrgansLayers = theWeightOrgansLayers;}
void MadDatasetSVCrop::setRootBiomassLayers (double theRootBiomassLayers){mRootBiomassLayers = theRootBiomassLayers;}
void MadDatasetSVCrop::setNInAGrBiomassLayers (double theNInAGrBiomassLayers){mNInAGrBiomassLayers = theNInAGrBiomassLayers;}
void MadDatasetSVCrop::setNInOrgansLayers (double theNInOrgansLayers){mNInOrgansLayers = theNInOrgansLayers;}
void MadDatasetSVCrop::setLAILayers (double theLAILayers){mLAILayers = theLAILayers;}


void MadDatasetSVCrop::setYieldObservations (int theYieldObservations){mYieldObservations = theYieldObservations;}
void MadDatasetSVCrop::setAGrBiomassObservations (int theAGrBiomassObservations){mAGrBiomassObservations = theAGrBiomassObservations;}
void MadDatasetSVCrop::setWeightOrgansObservations (int theWeightOrgansObservations){mWeightOrgansObservations = theWeightOrgansObservations;}
void MadDatasetSVCrop::setRootBiomassObservations (int theRootBiomassObservations){mRootBiomassObservations = theRootBiomassObservations;}
void MadDatasetSVCrop::setNInAGrBiomassObservations (int theNInAGrBiomassObservations){mNInAGrBiomassObservations = theNInAGrBiomassObservations;}
void MadDatasetSVCrop::setNInOrgansObservations (int theNInOrgansObservations){mNInOrgansObservations = theNInOrgansObservations;}
void MadDatasetSVCrop::setLAIObservations (int theLAIObservations){mLAIObservations = theLAIObservations;}


void MadDatasetSVCrop::setYieldWeight (double theYieldWeight){mYieldWeight = theYieldWeight;}
void MadDatasetSVCrop::setAGrBiomassWeight (double theAGrBiomassWeight){mAGrBiomassWeight = theAGrBiomassWeight;}
void MadDatasetSVCrop::setWeightOrgansWeight (double theWeightOrgansWeight){mWeightOrgansWeight = theWeightOrgansWeight;}
void MadDatasetSVCrop::setRootBiomassWeight (double theRootBiomassWeight){mRootBiomassWeight = theRootBiomassWeight;}
void MadDatasetSVCrop::setNInAGrBiomassWeight (double theNInAGrBiomassWeight){mNInAGrBiomassWeight = theNInAGrBiomassWeight;}
void MadDatasetSVCrop::setNInOrgansWeight (double theNInOrgansWeight){mNInOrgansWeight = theNInOrgansWeight;}
void MadDatasetSVCrop::setLAIWeight (double theLAIWeight){mLAIWeight = theLAIWeight;}


void MadDatasetSVCrop::setYieldReplicates (double theYieldReplicates){mYieldReplicates = theYieldReplicates;}
void MadDatasetSVCrop::setAGrBiomassReplicates (double theAGrBiomassReplicates){mAGrBiomassReplicates = theAGrBiomassReplicates;}
void MadDatasetSVCrop::setWeightOrgansReplicates (double theWeightOrgansReplicates){mWeightOrgansReplicates = theWeightOrgansReplicates;}
void MadDatasetSVCrop::setRootBiomassReplicates (double theRootBiomassReplicates){mRootBiomassReplicates = theRootBiomassReplicates;}
void MadDatasetSVCrop::setNInAGrBiomassReplicates (double theNInAGrBiomassReplicates){mNInAGrBiomassReplicates = theNInAGrBiomassReplicates;}
void MadDatasetSVCrop::setNInOrgansReplicates (double theNInOrgansReplicates){mNInOrgansReplicates = theNInOrgansReplicates;}
void MadDatasetSVCrop::setLAIReplicates (double theLAIReplicates){mLAIReplicates = theLAIReplicates;}


