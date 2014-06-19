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

#ifndef MADDATASETWEATHER_H
#define MADDATASETWEATHER_H

// Qt includes
#include <QString>

// local includes
#include "mad.h"

/**
 * This class represents all of the required data for setting labels in the weather tab.
 * @author Jason Jorgenson
 */

class MadDatasetWeather
{
public:
  MadDatasetWeather();
  ~MadDatasetWeather();

  // accessors

    QString notes() const;

    bool precipitationMeasured() const;
    bool tAveMeasured() const;
    bool tMinMeasured() const;
    bool tMaxMeasured() const;
    bool relativeHumidityMeasured() const;
    bool windSpeedMeasured() const;
    bool globalRadiationMeasured() const;
    bool sunshineHoursMeasured() const;
    bool leafWetnessMeasured() const;
    bool soilTempMeasured() const;

    double precipitationKmToSite() const;
    double tAveKmToSite() const;
    double tMinKmToSite() const;
    double tMaxKmToSite() const;
    double relativeHumidityKmToSite() const;
    double windSpeedKmToSite() const;
    double globalRadiationKmToSite() const;
    double sunshineHoursKmToSite() const;
    double leafWetnessKmToSite() const;
    double soilTempKmToSite() const;

    int precipitationAltitudeDif() const;
    int tAveAltitudeDif() const;
    int tMinAltitudeDif() const;
    int tMaxAltitudeDif() const;
    int relativeHumidityAltitudeDif() const;
    int windSpeedAltitudeDif() const;
    int globalRadiationAltitudeDif() const;
    int sunshineHoursAltitudeDif() const;
    int leafWetnessAltitudeDif() const;
    int soilTempAltitudeDif() const;

    int precipitationOptimumDistance() const;
    int tAveOptimumDistance() const;
    int tMinOptimumDistance() const;
    int tMaxOptimumDistance() const;
    int relativeHumidityOptimumDistance() const;
    int windSpeedOptimumDistance() const;
    int globalRadiationOptimumDistance() const;
    int sunshineHoursOptimumDistance() const;
    int leafWetnessOptimumDistance() const;
    int soilTempOptimumDistance() const;

    double precipitationWeight() const;
    double tAveWeight() const;
    double tMinWeight() const;
    double tMaxWeight() const;
    double relativeHumidityWeight() const;
    double windSpeedWeight() const;
    double globalRadiationWeight() const;
    double sunshineHoursWeight() const;
    double leafWetnessWeight() const;
    double soilTempWeight() const;

    bool precipitationState() const;
    bool tAveState() const;
    bool tMinState() const;
    bool tMaxState() const;
    bool relativeHumidityState() const;
    bool windSpeedState() const;
    bool globalRadiationState() const;
    bool sunshineHoursState() const;
    bool leafWetnessState() const;
    bool soilTempState() const;


    // mutators

    void setNotes (QString theNotes);

    void setPrecipitationMeasured (bool thePrecipitationMeasured);
    void setTAveMeasured (bool theTAveMeasured);
    void setTMinMeasured (bool theTMinMeasured);
    void setTMaxMeasured (bool theTMaxMeasured);
    void setRelativeHumidityMeasured (bool theRelativeHumidityMeasured);
    void setWindSpeedMeasured (bool theWindSpeedMeasured);
    void setGlobalRadiationMeasured (bool theGlobalRadiationMeasured);
    void setSunshineHoursMeasured (bool theSunshineHoursMeasured);
    void setLeafWetnessMeasured (bool theLeafWetnessMeasured);
    void setSoilTempMeasured (bool theSoilTempMeasured);

    void setPrecipitationKmToSite (double thePrecipitationKmToSite);
    void setTAveKmToSite (double theTAveKmToSite);
    void setTMinKmToSite (double theTMinKmToSite);
    void setTMaxKmToSite (double theTMaxKmToSite);
    void setRelativeHumidityKmToSite (double theRelativeHumidityKmToSite);
    void setWindSpeedKmToSite (double theWindSpeedKmToSite);
    void setGlobalRadiationKmToSite (double theGlobalRadiationKmToSite);
    void setSunshineHoursKmToSite (double theSunshineHoursKmToSite);
    void setLeafWetnessKmToSite (double theLeafWetnessKmToSite);
    void setSoilTempKmToSite (double theSoilTempKmToSite);

    void setPrecipitationAltitudeDif (int thePrecipitationAltitudeDif);
    void setTAveAltitudeDif (int theTAveAltitudeDif);
    void setTMinAltitudeDif (int theTMinAltitudeDif);
    void setTMaxAltitudeDif (int theTMaxAltitudeDif);
    void setRelativeHumidityAltitudeDif (int theRelativeHumidityAltitudeDif);
    void setWindSpeedAltitudeDif (int theWindSpeedAltitudeDif);
    void setGlobalRadiationAltitudeDif (int theGlobalRadiationAltitudeDif);
    void setSunshineHoursAltitudeDif (int theSunshineHoursAltitudeDif);
    void setLeafWetnessAltitudeDif (int theLeafWetnessAltitudeDif);
    void setSoilTempAltitudeDif (int theSoilTempAltitudeDif);

    void setPrecipitationOptimumDistance (int thePrecipitationOptimumDistance);
    void setTAveOptimumDistance (int theTAveOptimumDistance);
    void setTMinOptimumDistance (int theTMinOptimumDistance);
    void setTMaxOptimumDistance (int theTMaxOptimumDistance);
    void setRelativeHumidityOptimumDistance (int theRelativeHumidityOptimumDistance);
    void setWindSpeedOptimumDistance (int theWindSpeedOptimumDistance);
    void setGlobalRadiationOptimumDistance (int theGlobalRadiationOptimumDistance);
    void setSunshineHoursOptimumDistance (int theSunshineHoursOptimumDistance);
    void setLeafWetnessOptimumDistance (int theLeafWetnessOptimumDistance);
    void setSoilTempOptimumDistance (int theSoilTempOptimumDistance);

    void setPrecipitationWeight (double thePrecipitationWeight);
    void setTAveWeight (double theTAveWeight);
    void setTMinWeight (double theTMinWeight);
    void setTMaxWeight (double theTMaxWeight);
    void setRelativeHumidityWeight (double theRelativeHumidityWeight);
    void setWindSpeedWeight (double theWindSpeedWeight);
    void setGlobalRadiationWeight (double theGlobalRadiationWeight);
    void setSunshineHoursWeight (double theSunshineHoursWeight);
    void setLeafWetnessWeight (double theLeafWetnessWeight);
    void setSoilTempWeight (double theSoilTempWeight);

    void setPrecipitationState (bool thePrecipitationState);
    void setTAveState (bool theTAveState);
    void setTMinState (bool theTMinState);
    void setTMaxState (bool theTMaxState);
    void setRelativeHumidityState (bool theRelativeHumidityState);
    void setWindSpeedState (bool theWindSpeedState);
    void setGlobalRadiationState (bool theGlobalRadiationState);
    void setSunshineHoursState (bool theSunshineHoursState);
    void setLeafWetnessState (bool theLeafWetnessState);
    void setSoilTempState (bool theSoilTempState);

  private:
    QString mNotes;

    bool mPrecipitationMeasured;
    bool mTAveMeasured;
    bool mTMinMeasured;
    bool mTMaxMeasured;
    bool mRelativeHumidityMeasured;
    bool mWindSpeedMeasured;
    bool mGlobalRadiationMeasured;
    bool mSunshineHoursMeasured;
    bool mLeafWetnessMeasured;
    bool mSoilTempMeasured;

    double mPrecipitationKmToSite;
    double mTAveKmToSite;
    double mTMinKmToSite;
    double mTMaxKmToSite;
    double mRelativeHumidityKmToSite;
    double mWindSpeedKmToSite;
    double mGlobalRadiationKmToSite;
    double mSunshineHoursKmToSite;
    double mLeafWetnessKmToSite;
    double mSoilTempKmToSite;

    int mPrecipitationAltitudeDif;
    int mTAveAltitudeDif;
    int mTMinAltitudeDif;
    int mTMaxAltitudeDif;
    int mRelativeHumidityAltitudeDif;
    int mWindSpeedAltitudeDif;
    int mGlobalRadiationAltitudeDif;
    int mSunshineHoursAltitudeDif;
    int mLeafWetnessAltitudeDif;
    int mSoilTempAltitudeDif;

    int mPrecipitationOptimumDistance;
    int mTAveOptimumDistance;
    int mTMinOptimumDistance;
    int mTMaxOptimumDistance;
    int mRelativeHumidityOptimumDistance;
    int mWindSpeedOptimumDistance;
    int mGlobalRadiationOptimumDistance;
    int mSunshineHoursOptimumDistance;
    int mLeafWetnessOptimumDistance;
    int mSoilTempOptimumDistance;

    double mPrecipitationWeight;
    double mTAveWeight;
    double mTMinWeight;
    double mTMaxWeight;
    double mRelativeHumidityWeight;
    double mWindSpeedWeight;
    double mGlobalRadiationWeight;
    double mSunshineHoursWeight;
    double mLeafWetnessWeight;
    double mSoilTempWeight;

    bool mPrecipitationState;
    bool mTAveState;
    bool mTMinState;
    bool mTMaxState;
    bool mRelativeHumidityState;
    bool mWindSpeedState;
    bool mGlobalRadiationState;
    bool mSunshineHoursState;
    bool mLeafWetnessState;
    bool mSoilTempState;




};

#endif // MADDATASETWEATHER_H
