#ifndef RANKPOINTGENERATOR_H
#define RANKPOINTGENERATOR_H

#include <QObject>

class RankPointGenerator : public QObject
{
    Q_OBJECT
public:
    explicit RankPointGenerator(QObject *parent = 0);


    //--------------------//
   //  calculate points  //
  //--------------------//

  // management
  double mgmtMethod(double theObservations, double theWeight);

  // phenology
  double phenologyMethod(double theObservations, double theWeight);

  // previous crop
  double previousCropMethod(double theObservations, double theWeight);

  // initial values
  double initialValuesMethod(double theObservations, double theWeight, double theDepth);

  //soil
  double soilMethod1(double theDepth, double theLayers, double theWeight);
  double soilMethod2(double theDepth, double theLayers, double theWeight);

  //site
  double siteMethod(double theObservations, double theWeight);

  //weather
  double weatherMethod1(double theDistance, double theWeight, int theAltDif, double theFactor, int theOptimalDistance);
  double weatherMethod2(bool theIsMeasured, double theWeight);

  //state variables
  double SVCropYield(int theObservations, double theWeight, double theReplicates);
  double SVCropAGrBiomass(int theObservations, double theWeight, double theReplicates);
  double SVCropWeightOrgans(int theLayers, int theObservations, double theWeight, double theReplicates);
  double SVCropRootBiomass(int theLayers, int theObservations, double theWeight, double theReplicates);
  double SVCropNInAGrBiomass(int theObservations, double theWeight, double theReplicates);
  double SVCropNInOrgans(int theLayers, int theObservations, double theWeight, double theReplicates);
  double SVCropLAI(int theObservations, double theWeight, double theReplicates);

  double SVSoilSoilWaterGrav(int theLayers, int theObservations, double theWeight, double theReplicates);
  double SVSoilPressureHeads(int theLayers, int theObservations, double theWeight, double theReplicates);
  double SVSoilNMin(int theLayers, int theObservations, double theWeight, double theReplicates);
  double SVSoilSoilWaterSensorCal(int theLayers, int theObservations, double theWeight, double theReplicates);
  double SVSoilWaterFluxBottomRoot(int theObservations, double theWeight, double theReplicates);
  double SVSoilNFluxBottomRoot(int theObservations, double theWeight, double theReplicates);

  double SVSurfaceFluxesET(int theObservations, double theWeight);
  double SVSurfaceFluxesNH3Loss(int theObservations, double theWeight);
  double SVSurfaceFluxesN2OLoss(int theObservations, double theWeight);
  double SVSurfaceFluxesN2Loss(int theObservations, double theWeight);
  double SVSurfaceFluxesCH4Loss(int theObservations, double theWeight);
  double SVSurfaceFluxesNOLoss(int theObservations, double theWeight);
  double SVSurfaceFluxesCO2Loss(int theObservations, double theWeight);

  double SVObservationsLodging(int theObservations, double theWeight);
  double SVObservationsPests(int theObservations, double theWeight);
  double SVObservationsDamages(int theObservations, double theWeight);
  double SVObservationsWeeds(int theObservations, double theWeight);

  //seasons
  double SeasonsMethod1(int theNumber, double theWeight);
  double SeasonsMethod2(int theNumber, double theWeight);

    //-----------------------------//
   //     Overall calculations    //
  //-----------------------------//

  double multiplier(double theSeasonsTotal);

  QString getRankManagement(int theTotal);
  QString getRankPhenology(int theTotal);
  QString getRankPrevCrop(int theTotal);
  QString getRankInitialValues(int theTotal);
  QString getRankSoil(int theTotal);
  QString getRankSite(int theTotal);
  QString getRankWeather(int theTotal);
  QString getRankSV(int theTotal);
  QString getRank(int theTotal);








signals:

public slots:

};

#endif // RANKPOINTGENERATOR_H
