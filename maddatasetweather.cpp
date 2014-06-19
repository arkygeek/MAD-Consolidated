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


#include "maddatasetweather.h"

MadDatasetWeather::MadDatasetWeather()
{
}

MadDatasetWeather::~MadDatasetWeather()
{
}

// accessors

QString MadDatasetWeather::notes() const {return mNotes;}

bool MadDatasetWeather::precipitationMeasured() const{return mPrecipitationMeasured;}
bool MadDatasetWeather::tAveMeasured() const{return mTAveMeasured;}
bool MadDatasetWeather::tMinMeasured() const{return mTMinMeasured;}
bool MadDatasetWeather::tMaxMeasured() const{return mTMaxMeasured;}
bool MadDatasetWeather::relativeHumidityMeasured() const{return mRelativeHumidityMeasured;}
bool MadDatasetWeather::windSpeedMeasured() const{return mWindSpeedMeasured;}
bool MadDatasetWeather::globalRadiationMeasured() const{return mGlobalRadiationMeasured;}
bool MadDatasetWeather::sunshineHoursMeasured() const{return mSunshineHoursMeasured;}
bool MadDatasetWeather::leafWetnessMeasured() const{return mLeafWetnessMeasured;}
bool MadDatasetWeather::soilTempMeasured() const{return mSoilTempMeasured;}

double MadDatasetWeather::precipitationKmToSite() const{return mPrecipitationKmToSite;}
double MadDatasetWeather::tAveKmToSite() const{return mTAveKmToSite;}
double MadDatasetWeather::tMinKmToSite() const{return mTMinKmToSite;}
double MadDatasetWeather::tMaxKmToSite() const{return mTMaxKmToSite;}
double MadDatasetWeather::relativeHumidityKmToSite() const{return mRelativeHumidityKmToSite;}
double MadDatasetWeather::windSpeedKmToSite() const{return mWindSpeedKmToSite;}
double MadDatasetWeather::globalRadiationKmToSite() const{return mGlobalRadiationKmToSite;}
double MadDatasetWeather::sunshineHoursKmToSite() const{return mSunshineHoursKmToSite;}
double MadDatasetWeather::leafWetnessKmToSite() const{return mLeafWetnessKmToSite;}
double MadDatasetWeather::soilTempKmToSite() const{return mSoilTempKmToSite;}

int MadDatasetWeather::precipitationAltitudeDif() const{return mPrecipitationAltitudeDif;}
int MadDatasetWeather::tAveAltitudeDif() const{return mTAveAltitudeDif;}
int MadDatasetWeather::tMinAltitudeDif() const{return mTMinAltitudeDif;}
int MadDatasetWeather::tMaxAltitudeDif() const{return mTMaxAltitudeDif;}
int MadDatasetWeather::relativeHumidityAltitudeDif() const{return mRelativeHumidityAltitudeDif;}
int MadDatasetWeather::windSpeedAltitudeDif() const{return mWindSpeedAltitudeDif;}
int MadDatasetWeather::globalRadiationAltitudeDif() const{return mGlobalRadiationAltitudeDif;}
int MadDatasetWeather::sunshineHoursAltitudeDif() const{return mSunshineHoursAltitudeDif;}
int MadDatasetWeather::leafWetnessAltitudeDif() const{return mLeafWetnessAltitudeDif;}
int MadDatasetWeather::soilTempAltitudeDif() const{return mSoilTempAltitudeDif;}

int MadDatasetWeather::precipitationOptimumDistance() const{return mPrecipitationOptimumDistance;}
int MadDatasetWeather::tAveOptimumDistance() const{return mTAveOptimumDistance;}
int MadDatasetWeather::tMinOptimumDistance() const{return mTMinOptimumDistance;}
int MadDatasetWeather::tMaxOptimumDistance() const{return mTMaxOptimumDistance;}
int MadDatasetWeather::relativeHumidityOptimumDistance() const{return mRelativeHumidityOptimumDistance;}
int MadDatasetWeather::windSpeedOptimumDistance() const{return mWindSpeedOptimumDistance;}
int MadDatasetWeather::globalRadiationOptimumDistance() const{return mGlobalRadiationOptimumDistance;}
int MadDatasetWeather::sunshineHoursOptimumDistance() const{return mSunshineHoursOptimumDistance;}
int MadDatasetWeather::leafWetnessOptimumDistance() const{return mLeafWetnessOptimumDistance;}
int MadDatasetWeather::soilTempOptimumDistance() const{return mSoilTempOptimumDistance;}

double MadDatasetWeather::precipitationWeight() const{return mPrecipitationWeight;}
double MadDatasetWeather::tAveWeight() const{return mTAveWeight;}
double MadDatasetWeather::tMinWeight() const{return mTMinWeight;}
double MadDatasetWeather::tMaxWeight() const{return mTMaxWeight;}
double MadDatasetWeather::relativeHumidityWeight() const{return mRelativeHumidityWeight;}
double MadDatasetWeather::windSpeedWeight() const{return mWindSpeedWeight;}
double MadDatasetWeather::globalRadiationWeight() const{return mGlobalRadiationWeight;}
double MadDatasetWeather::sunshineHoursWeight() const{return mSunshineHoursWeight;}
double MadDatasetWeather::leafWetnessWeight() const{return mLeafWetnessWeight;}
double MadDatasetWeather::soilTempWeight() const{return mSoilTempWeight;}

bool MadDatasetWeather::precipitationState() const{return mPrecipitationState;}
bool MadDatasetWeather::tAveState() const{return mTAveState;}
bool MadDatasetWeather::tMinState() const{return mTMinState;}
bool MadDatasetWeather::tMaxState() const{return mTMaxState;}
bool MadDatasetWeather::relativeHumidityState() const{return mRelativeHumidityState;}
bool MadDatasetWeather::windSpeedState() const{return mWindSpeedState;}
bool MadDatasetWeather::globalRadiationState() const{return mGlobalRadiationState;}
bool MadDatasetWeather::sunshineHoursState() const{return mSunshineHoursState;}
bool MadDatasetWeather::leafWetnessState() const{return mLeafWetnessState;}
bool MadDatasetWeather::soilTempState() const{return mSoilTempState;}

// mutators
void MadDatasetWeather::setNotes(QString theNotes){mNotes = theNotes;}

void MadDatasetWeather::setPrecipitationMeasured (bool thePrecipitationMeasured){mPrecipitationMeasured = thePrecipitationMeasured;}
void MadDatasetWeather::setTAveMeasured (bool theTAveMeasured){mTAveMeasured = theTAveMeasured;}
void MadDatasetWeather::setTMinMeasured (bool theTMinMeasured){mTMinMeasured = theTMinMeasured;}
void MadDatasetWeather::setTMaxMeasured (bool theTMaxMeasured){mTMaxMeasured = theTMaxMeasured;}
void MadDatasetWeather::setRelativeHumidityMeasured (bool theRelativeHumidityMeasured){mRelativeHumidityMeasured = theRelativeHumidityMeasured;}
void MadDatasetWeather::setWindSpeedMeasured (bool theWindSpeedMeasured){mWindSpeedMeasured = theWindSpeedMeasured;}
void MadDatasetWeather::setGlobalRadiationMeasured (bool theGlobalRadiationMeasured){mGlobalRadiationMeasured = theGlobalRadiationMeasured;}
void MadDatasetWeather::setSunshineHoursMeasured (bool theSunshineHoursMeasured){mSunshineHoursMeasured = theSunshineHoursMeasured;}
void MadDatasetWeather::setLeafWetnessMeasured (bool theLeafWetnessMeasured){mLeafWetnessMeasured = theLeafWetnessMeasured;}
void MadDatasetWeather::setSoilTempMeasured (bool theSoilTempMeasured){mSoilTempMeasured = theSoilTempMeasured;}

void MadDatasetWeather::setPrecipitationKmToSite (double thePrecipitationKmToSite){mPrecipitationKmToSite = thePrecipitationKmToSite;}
void MadDatasetWeather::setTAveKmToSite (double theTAveKmToSite){mTAveKmToSite = theTAveKmToSite;}
void MadDatasetWeather::setTMinKmToSite (double theTMinKmToSite){mTMinKmToSite = theTMinKmToSite;}
void MadDatasetWeather::setTMaxKmToSite (double theTMaxKmToSite){mTMaxKmToSite = theTMaxKmToSite;}
void MadDatasetWeather::setRelativeHumidityKmToSite (double theRelativeHumidityKmToSite){mRelativeHumidityKmToSite = theRelativeHumidityKmToSite;}
void MadDatasetWeather::setWindSpeedKmToSite (double theWindSpeedKmToSite){mWindSpeedKmToSite = theWindSpeedKmToSite;}
void MadDatasetWeather::setGlobalRadiationKmToSite (double theGlobalRadiationKmToSite){mGlobalRadiationKmToSite = theGlobalRadiationKmToSite;}
void MadDatasetWeather::setSunshineHoursKmToSite (double theSunshineHoursKmToSite){mSunshineHoursKmToSite = theSunshineHoursKmToSite;}
void MadDatasetWeather::setLeafWetnessKmToSite (double theLeafWetnessKmToSite){mLeafWetnessKmToSite = theLeafWetnessKmToSite;}
void MadDatasetWeather::setSoilTempKmToSite (double theSoilTempKmToSite){mSoilTempKmToSite = theSoilTempKmToSite;}

void MadDatasetWeather::setPrecipitationAltitudeDif (int thePrecipitationAltitudeDif){mPrecipitationAltitudeDif = thePrecipitationAltitudeDif;}
void MadDatasetWeather::setTAveAltitudeDif (int theTAveAltitudeDif){mTAveAltitudeDif = theTAveAltitudeDif;}
void MadDatasetWeather::setTMinAltitudeDif (int theTMinAltitudeDif){mTMinAltitudeDif = theTMinAltitudeDif;}
void MadDatasetWeather::setTMaxAltitudeDif (int theTMaxAltitudeDif){mTMaxAltitudeDif = theTMaxAltitudeDif;}
void MadDatasetWeather::setRelativeHumidityAltitudeDif (int theRelativeHumidityAltitudeDif){mRelativeHumidityAltitudeDif = theRelativeHumidityAltitudeDif;}
void MadDatasetWeather::setWindSpeedAltitudeDif (int theWindSpeedAltitudeDif){mWindSpeedAltitudeDif = theWindSpeedAltitudeDif;}
void MadDatasetWeather::setGlobalRadiationAltitudeDif (int theGlobalRadiationAltitudeDif){mGlobalRadiationAltitudeDif = theGlobalRadiationAltitudeDif;}
void MadDatasetWeather::setSunshineHoursAltitudeDif (int theSunshineHoursAltitudeDif){mSunshineHoursAltitudeDif = theSunshineHoursAltitudeDif;}
void MadDatasetWeather::setLeafWetnessAltitudeDif (int theLeafWetnessAltitudeDif){mLeafWetnessAltitudeDif = theLeafWetnessAltitudeDif;}
void MadDatasetWeather::setSoilTempAltitudeDif (int theSoilTempAltitudeDif){mSoilTempAltitudeDif = theSoilTempAltitudeDif;}

void MadDatasetWeather::setPrecipitationOptimumDistance (int thePrecipitationOptimumDistance){mPrecipitationOptimumDistance = thePrecipitationOptimumDistance;}
void MadDatasetWeather::setTAveOptimumDistance (int theTAveOptimumDistance){mTAveOptimumDistance = theTAveOptimumDistance;}
void MadDatasetWeather::setTMinOptimumDistance (int theTMinOptimumDistance){mTMinOptimumDistance = theTMinOptimumDistance;}
void MadDatasetWeather::setTMaxOptimumDistance (int theTMaxOptimumDistance){mTMaxOptimumDistance = theTMaxOptimumDistance;}
void MadDatasetWeather::setRelativeHumidityOptimumDistance (int theRelativeHumidityOptimumDistance){mRelativeHumidityOptimumDistance = theRelativeHumidityOptimumDistance;}
void MadDatasetWeather::setWindSpeedOptimumDistance (int theWindSpeedOptimumDistance){mWindSpeedOptimumDistance = theWindSpeedOptimumDistance;}
void MadDatasetWeather::setGlobalRadiationOptimumDistance (int theGlobalRadiationOptimumDistance){mGlobalRadiationOptimumDistance = theGlobalRadiationOptimumDistance;}
void MadDatasetWeather::setSunshineHoursOptimumDistance (int theSunshineHoursOptimumDistance){mSunshineHoursOptimumDistance = theSunshineHoursOptimumDistance;}
void MadDatasetWeather::setLeafWetnessOptimumDistance (int theLeafWetnessOptimumDistance){mLeafWetnessOptimumDistance = theLeafWetnessOptimumDistance;}
void MadDatasetWeather::setSoilTempOptimumDistance (int theSoilTempOptimumDistance){mSoilTempOptimumDistance = theSoilTempOptimumDistance;}

void MadDatasetWeather::setPrecipitationWeight (double thePrecipitationWeight){mPrecipitationWeight = thePrecipitationWeight;}
void MadDatasetWeather::setTAveWeight (double theTAveWeight){mTAveWeight = theTAveWeight;}
void MadDatasetWeather::setTMinWeight (double theTMinWeight){mTMinWeight = theTMinWeight;}
void MadDatasetWeather::setTMaxWeight (double theTMaxWeight){mTMaxWeight = theTMaxWeight;}
void MadDatasetWeather::setRelativeHumidityWeight (double theRelativeHumidityWeight){mRelativeHumidityWeight = theRelativeHumidityWeight;}
void MadDatasetWeather::setWindSpeedWeight (double theWindSpeedWeight){mWindSpeedWeight = theWindSpeedWeight;}
void MadDatasetWeather::setGlobalRadiationWeight (double theGlobalRadiationWeight){mGlobalRadiationWeight = theGlobalRadiationWeight;}
void MadDatasetWeather::setSunshineHoursWeight (double theSunshineHoursWeight){mSunshineHoursWeight = theSunshineHoursWeight;}
void MadDatasetWeather::setLeafWetnessWeight (double theLeafWetnessWeight){mLeafWetnessWeight = theLeafWetnessWeight;}
void MadDatasetWeather::setSoilTempWeight (double theSoilTempWeight){mSoilTempWeight = theSoilTempWeight;}

void MadDatasetWeather::setPrecipitationState (bool thePrecipitationState){mPrecipitationState = thePrecipitationState;}
void MadDatasetWeather::setTAveState (bool theTAveState){mTAveState = theTAveState;}
void MadDatasetWeather::setTMinState (bool theTMinState){mTMinState = theTMinState;}
void MadDatasetWeather::setTMaxState (bool theTMaxState){mTMaxState = theTMaxState;}
void MadDatasetWeather::setRelativeHumidityState (bool theRelativeHumidityState){mRelativeHumidityState = theRelativeHumidityState;}
void MadDatasetWeather::setWindSpeedState (bool theWindSpeedState){mWindSpeedState = theWindSpeedState;}
void MadDatasetWeather::setGlobalRadiationState (bool theGlobalRadiationState){mGlobalRadiationState = theGlobalRadiationState;}
void MadDatasetWeather::setSunshineHoursState (bool theSunshineHoursState){mSunshineHoursState = theSunshineHoursState;}
void MadDatasetWeather::setLeafWetnessState (bool theLeafWetnessState){mLeafWetnessState = theLeafWetnessState;}
void MadDatasetWeather::setSoilTempState (bool theSoilTempState){mSoilTempState = theSoilTempState;}

