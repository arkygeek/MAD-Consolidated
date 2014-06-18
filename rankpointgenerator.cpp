#include "rankpointgenerator.h"
#include <QDebug>

RankPointGenerator::RankPointGenerator(QObject *parent) :
    QObject(parent)
{
}

// Management
double RankPointGenerator::mgmtMethod(double theObservations, double theWeight)
{
  // the calculation of total points for Management
 double myTotal = theObservations * theWeight;
 return myTotal;
}

// phenology
double RankPointGenerator::phenologyMethod(double theObservations, double theWeight)
{
 // the calculation of total points for Phenology
 double myTotal = theObservations * theWeight;
 qDebug() << "phenologyMethod myTotal:" << myTotal;
 return myTotal;
}

// previous crop
double RankPointGenerator::previousCropMethod(double theObservations, double theWeight)
{
  // the calculation of total points for prev. crop
  double myTotal = theObservations * theWeight;
  qDebug() << "previousCropMethod myTotal:" << myTotal;

  return myTotal;
}

// initial values
double RankPointGenerator::initialValuesMethod(double theObservations, double theWeight, double theDepth)
{
  // the calculation of total points for initial values
  // MIN(Depth,1.25) * MIN(Observations/2,1.2) * Weight
  double myTotal = (theDepth<1.25?theDepth:1.25) * (theObservations/2<1.2?theObservations/2:1.2) * theWeight;
  qDebug() << "initialValuesMethod myTotal:" << myTotal;
  return myTotal;
}

// soil
double RankPointGenerator::soilMethod1(double theDepth, double theLayers, double theWeight)
{
  // min(depth/1.5,1.25) * MIN(layers/3,1.2) * weight
  double myTotal;
  double myMinLayers = theLayers/3.0 < 1.2 ? theLayers/3.0 : 1.2;
  myTotal = (theDepth/1.5 < 1.25 ? theDepth/1.5:1.25) * myMinLayers * theWeight;
  qDebug() << "soilMethod1 myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::soilMethod2(double theDepth, double theLayers, double theWeight)
{
  // min(depth/3,1.25) * MIN(layers,1.2) * weight
  double myTotal;
  double myMinLayers = theLayers < 1.2 ? theLayers : 1.2;
  myTotal = (theDepth/0.3<1.25?theDepth/0.3:1.25) * myMinLayers * theWeight;
  qDebug() << "soilMethod2 myTotal:" << myTotal;
  return myTotal;
}

// site
double RankPointGenerator::siteMethod(double theObservations, double theWeight)
{
  // the calculation of total points for site
  double myTotal = theObservations * theWeight;
  qDebug() << "siteMethod myTotal:" << myTotal;
  return myTotal;
}

// Weather
double RankPointGenerator::weatherMethod2(bool theIsMeasured, double theWeight)
{
  double myTotal = 0;
  if (theIsMeasured == true)
  {
    myTotal = theWeight;
  }
  qDebug() << "weatherMethod2 myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::weatherMethod1(double theDistance, double theWeight,
                                             int theAltDif, double theFactor,
                                             int theOptimalDistance)
{
  // this is for: Precip, TAve, TMin, TMax, RelHumid, and WindSpeed

  // two temp totals are needed to determine which method is the minimum
  double myTempTotalA = theWeight; // theWeight is the default if theDistance < D.opt
  double myTempTotalB = theWeight; // theWeight is the default if theAltDif > 30
  double myTotal = 0;
  //qDebug() << "theWeight" << theWeight;

  //double myMax = 0;
  // calculate first value
  if (theDistance > theOptimalDistance)
  {
    myTempTotalA = theWeight / (theDistance/theOptimalDistance > 1 ? theDistance/theOptimalDistance : 1);
  }
  //else myTempTotalA = 0;

  // calculate second value
  if (theAltDif > 30)
  {
    double myInnerMaxValue;
    double myFirstValue;
    // .0 in 30.0 important or rounding errors because theAltDif is int
    myInnerMaxValue = theAltDif/30.0 > 1 ? theAltDif/30.0 : 1;
    myFirstValue = theWeight - (theFactor * myInnerMaxValue);

    myTempTotalB = myFirstValue > 0 ? myFirstValue : 0;
  }

  // find and return the minimum of the two values
  myTotal = (myTempTotalA < myTempTotalB) ? myTempTotalA : myTempTotalB;
  qDebug() << "weatherMethod1 myTotal:" << myTotal;
  return myTotal;
}

// State Variables
double RankPointGenerator::SVCropYield(int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =F49*E49+(G49-1)*0.5

  double myTotal;
  // check to see if this can go negative with the minus 1 below
  myTotal = (theWeight * theObservations) + ((theReplicates-1.0)*0.5);
  qDebug() << "SVCropYield myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVCropAGrBiomass(int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E50/3,1.25)*F50*MIN(G50/3,1.2)
  //  ^myMinObservations  ^myMinReplicates

  // min(observations/3,1.25) * weight * min(replicates/3,1.2)

  double myTotal;
  double myMinObservations;
  double myMinReplicates;

  myMinObservations = theObservations/3.0 < 1.25 ? theObservations/3.0 : 1.25;
  myMinReplicates = theReplicates/3.0 < 1.2 ? theReplicates/3.0 : 1.2;
  myTotal = (myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVCropAGrBiomass myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVCropWeightOrgans(int theLayers, int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(D51/3,1.25)*MIN(E51/3,1.2)*F51*MIN(G51/3,1.1)
  //  ^myMinLayers    ^myMinObservations ^myMinReplicates

  // min(layers/3,1.25) * min(observations/3,1.2) * weight * min(replicates/3,1.1)

  double myTotal;
  double myMinLayers;
  double myMinObservations;
  double myMinReplicates;

  myMinLayers = theLayers/3.0 < 1.25 ? theLayers/3.0 : 1.25;
  myMinObservations = theObservations/3.0 < 1.2 ? theObservations/3.0 : 1.2;
  myMinReplicates = theReplicates/3.0 < 1.1 ? theReplicates/3.0 : 1.1;
  myTotal = (myMinLayers * myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVCropWeightOrgans myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVCropRootBiomass(int theLayers, int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(D52/3,1.25)*MIN(E52/3,1.2)*F52*MIN(G52/3,1.1)
  //  ^myMinLayers    ^myMinObservations ^myMinReplicates

  // min(layers/3,1.25) * min(observations/3,1.2) * weight * min(replicates/3,1.1)

  double myTotal;
  double myMinLayers;
  double myMinObservations;
  double myMinReplicates;

  myMinLayers = theLayers/3.0 < 1.25 ? theLayers/3.0 : 1.25;
  myMinObservations = theObservations/3.0 < 1.2 ? theObservations/3.0 : 1.2;
  myMinReplicates = theReplicates/3.0 < 1.1 ? theReplicates/3.0 : 1.1;
  myTotal = (myMinLayers * myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVCropRootBiomass myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVCropNInAGrBiomass(int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E53/3,1.2) * F53 * MIN(G53/3,1.1)
  //  ^myMinObservations     ^myMinReplicates

  // min(observations/3,1.2) * weight * min(replicates/3,1.1)

  double myTotal;
  double myMinObservations;
  double myMinReplicates;

  myMinObservations = theObservations/3.0 < 1.2 ? theObservations/3.0 : 1.2;
  myMinReplicates = theReplicates/3.0 < 1.1 ? theReplicates/3.0 : 1.1;
  myTotal = (myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVCropNInAGrBiomass myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVCropNInOrgans(int theLayers, int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(D54/2,1.25) * MIN(E54,1.2) * F54 * MIN(G54/3,1.1)
  //  ^myMinLayers    ^myMinObservations     ^myMinReplicates

  // min(layers/2,1.25) * min(observations,1.2) * weight * min(replicates/3,1.1)

  double myTotal;
  double myMinLayers;
  double myMinObservations;
  double myMinReplicates;

  myMinLayers = theLayers/2.0 < 1.25 ? theLayers/2.0 : 1.25;
  myMinObservations = theObservations < 1.2 ? theObservations : 1.2;
  myMinReplicates = theReplicates/3.0 < 1.1 ? theReplicates/3.0 : 1.1;
  myTotal = (myMinLayers * myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVCropNInOrgans myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVCropLAI(int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E55/5,1) * F55 * MIN(G55/3,1)
  //  ^myMinObservations   ^myMinReplicates

  // min(observations/5,1) * weight * min(replicates/3,1)

  double myTotal;
  double myMinObservations;
  double myMinReplicates;

  myMinObservations = theObservations/5.0 < 1 ? theObservations/5.0 : 1;
  myMinReplicates = theReplicates/3.0 < 1 ? theReplicates/3.0 : 1;
  myTotal = (myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVCropLAI myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSoilSoilWaterGrav(int theLayers, int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(D56/3,1.25)*MIN(E56/5,1.2)*F56*MIN(G56/3,1.1)
  //  ^myMinLayers    ^myMinObservations ^myMinReplicates

  // min(layers/3,1.25) * min(observations/5,1.2) * weight * min(replicates/3,1.1)

  double myTotal;
  double myMinLayers;
  double myMinObservations;
  double myMinReplicates;

  myMinLayers = theLayers/3.0 < 1.25 ? theLayers/3.0 : 1.25;
  myMinObservations = theObservations/5.0 < 1.2 ? theObservations/5.0 : 1.2;
  myMinReplicates = theReplicates/3.0 < 1.1 ? theReplicates/3.0 : 1.1;
  myTotal = (myMinLayers * myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVSoilSoilWaterGrav myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSoilPressureHeads(int theLayers, int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(D57/3,1.25)*MIN(E57/20,1.2)*F57*MIN(G57/3,1.1)
  //  ^myMinLayers    ^myMinObservations  ^myMinReplicates

  // min(layers/3,1.25) * min(observations/20,1.2) * weight * min(replicates/3,1.1)

  double myTotal;
  double myMinLayers;
  double myMinObservations;
  double myMinReplicates;

  myMinLayers = theLayers/3.0 < 1.25 ? theLayers/3.0 : 1.25;
  myMinObservations = theObservations/20.0 < 1.2 ? theObservations/20.0 : 1.2;
  myMinReplicates = theReplicates/3.0 < 1.1 ? theReplicates/3.0 : 1.1;
  myTotal = (myMinLayers * myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVSoilPressureHeads myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSoilNMin(int theLayers, int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(D58/3,1.25)*MIN(E58/3,1.2)*F58*MIN(G58/3,1.1)
  //  ^myMinLayers    ^myMinObservations  ^myMinReplicates

  // min(layers/3,1.25) * min(observations/3,1.2) * weight * min(replicates/3,1.1)

  double myTotal;
  double myMinLayers;
  double myMinObservations;
  double myMinReplicates;

  myMinLayers = theLayers/3.0 < 1.25 ? theLayers/3.0 : 1.25;
  myMinObservations = theObservations/3.0 < 1.2 ? theObservations/3.0 : 1.2;
  myMinReplicates = theReplicates/3.0 < 1.1 ? theReplicates/3.0 : 1.1;
  myTotal = (myMinLayers * myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVSoilNMin myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSoilSoilWaterSensorCal(int theLayers, int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(D59/3,1.25)*MIN(E59/50,1.2)*F59*MIN(G59/3,1.1)
  //  ^myMinLayers    ^myMinObservations  ^myMinReplicates

  // min(layers/3,1.25) * min(observations/50,1.2) * weight * min(replicates/3,1.1)

  double myTotal;
  double myMinLayers;
  double myMinObservations;
  double myMinReplicates;

  myMinLayers = theLayers/3.0 < 1.25 ? theLayers/3.0 : 1.25;
  myMinObservations = theObservations/50.0 < 1.2 ? theObservations/50.0 : 1.2;
  myMinReplicates = theReplicates/3.0 < 1.1 ? theReplicates/3.0 : 1.1;
  myTotal = (myMinLayers * myMinObservations * theWeight * myMinReplicates);
  qDebug() << "SVSoilSoilWaterSensorCal myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSoilWaterFluxBottomRoot(int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E60/10.0,1.25)*F60*G60/3

  double myTotal;
  myTotal = ((theObservations/10.0>1.25?1.25:theObservations/10.0) * theWeight * theReplicates) / 3.0;
  qDebug() << "SVSoilWaterFluxBottomRoot myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSoilNFluxBottomRoot(int theObservations, double theWeight, double theReplicates)
{
  // D==layers E==observations F==weight  G==replicates
  // =E61*F61*G61/3
  // (observations x weight x replicates) / 3

  double myTotal;
  myTotal = (theObservations * theWeight * theReplicates) / 3.0;
  qDebug() << "SVSoilNFluxBottomRoot myTotal:" << myTotal;
  return myTotal;
}

double RankPointGenerator::SVSurfaceFluxesET(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E62,1)*F62
  // min (observations,1) x weight

  double myTotal;
  myTotal = (theObservations>1?1:theObservations) * theWeight;
  qDebug() << "SVSurfaceFluxesET myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSurfaceFluxesNH3Loss(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E63,1)*F63
  // min (observations,1) x weight

  double myTotal;
  myTotal = (theObservations>1?1:theObservations) * theWeight;
  qDebug() << "SVSurfaceFluxesNH3Loss myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSurfaceFluxesN2OLoss(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E64,1)*F64
  // min (observations,1) x weight

  double myTotal;
  myTotal = (theObservations>1?1:theObservations) * theWeight;
  qDebug() << "SVSurfaceFluxesN2OLoss myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSurfaceFluxesN2Loss(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E65,1)*F65
  // min (observations,1) x weight

  double myTotal;
  myTotal = (theObservations>1?1:theObservations) * theWeight;
  qDebug() << "SVSurfaceFluxesN2Loss myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSurfaceFluxesCH4Loss(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E66,1)*F66
  // min (observations,1) x weight

  double myTotal;
  myTotal = (theObservations>1?1:theObservations) * theWeight;
  qDebug() << "SVSurfaceFluxesCH4Loss myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSurfaceFluxesNOLoss(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E64,1)*F64
  // min (observations,1) x weight

  double myTotal;
  myTotal = (theObservations>1?1:theObservations) * theWeight;
  qDebug() << "SVSurfaceFluxesNOLoss myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVSurfaceFluxesCO2Loss(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =MIN(E64,1)*F64
  // min (observations,1) x weight

  double myTotal;
  myTotal = (theObservations>1?1:theObservations) * theWeight;
  qDebug() << "SVSurfaceFluxesCO2Loss myTotal:" << myTotal;
  return myTotal;
}

double RankPointGenerator::SVObservationsLodging(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =E67*F67
  // observations x weight

  double myTotal;
  myTotal = theObservations * theWeight;
  qDebug() << "SVObservationsLodging myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVObservationsPests(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =E68*F68
  // observations x weight

  double myTotal;
  myTotal = theObservations * theWeight;
  qDebug() << "SVObservationsPests myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVObservationsDamages(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =E69*F69
  // observations x weight

  double myTotal;
  myTotal = theObservations * theWeight;
  qDebug() << "SVObservationsDamages myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SVObservationsWeeds(int theObservations, double theWeight)
{
  // D==layers E==observations F==weight  G==replicates
  // =E69*F69
  // observations x weight

  double myTotal;
  myTotal = theObservations * theWeight;
  qDebug() << "SVObservationsWeeds myTotal:" << myTotal;
  return myTotal;
}

// Seasons
double RankPointGenerator::SeasonsMethod1(int theNumber, double theWeight)
{
  // MIN(theNumber*TheWeight,5)
  double myTotal;
  double mySubTotal;
  mySubTotal = theNumber*theWeight;
  myTotal = mySubTotal<5 ? mySubTotal : 5.0;
  qDebug() << "SeasonsMethod1 myTotal:" << myTotal;
  return myTotal;
}
double RankPointGenerator::SeasonsMethod2(int theNumber, double theWeight)
{
  double myTotal;
  myTotal = theNumber*theWeight;
  qDebug() << "SeasonsMethod2 myTotal:" << myTotal;
  return myTotal;
}

    //-----------------------------//
   //     Overall calculations    //
  //-----------------------------//


double RankPointGenerator::multiplier(double theSeasonsTotal)
{
  double myTotal;
  // 1 + [(theSeasonsTotal / 7) - 1] * 0.1
  myTotal = 1 + (((theSeasonsTotal/7) - 1) * 0.1);
  qDebug() << "multiplier is:" << myTotal;
  return myTotal;
}

QString RankPointGenerator::getRankManagement(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

   if (theTotal >= 24) myRankNumber=24;
   else if (theTotal >= 20) myRankNumber=20;
   else if (theTotal >= 17) myRankNumber=17;
   else if (theTotal >= 15) myRankNumber=15;

   switch (myRankNumber)
   {
     case 24: myRank = "Platinum";
              break;

     case 20: myRank = "Gold";
              break;

     case 17: myRank = "Silver";
              break;

     case 15: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }

   return myRank;
}

QString RankPointGenerator::getRankPhenology(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

  if (theTotal >= 13) myRankNumber=13;
  else if (theTotal >= 11) myRankNumber=11;
  else if (theTotal >= 8) myRankNumber=8;
  else if (theTotal >= 5) myRankNumber=5;

   switch (myRankNumber)
   {
     case 13: myRank = "Platinum";
              break;

     case 11: myRank = "Gold";
              break;

     case 8: myRank = "Silver";
              break;

     case 5: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }
   return myRank;
}

QString RankPointGenerator::getRankPrevCrop(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

  if (theTotal >= 17) myRankNumber=17;
  else if (theTotal >= 15) myRankNumber=15;
  else if (theTotal >= 12) myRankNumber=12;
  else if (theTotal >= 9) myRankNumber=9;

   switch (myRankNumber)
   {
     case 17: myRank = "Platinum";
              break;

     case 15: myRank = "Gold";
              break;

     case 12: myRank = "Silver";
              break;

     case 9: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }

   return myRank;
}

QString RankPointGenerator::getRankInitialValues(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

  if (theTotal >= 10) myRankNumber=10;
  else if (theTotal >= 7) myRankNumber=7;
  else if (theTotal >= 4) myRankNumber=4;
  else if (theTotal >= 1) myRankNumber=1;

   switch (myRankNumber)
   {
     case 10: myRank = "Platinum";
              break;

     case 7: myRank = "Gold";
              break;

     case 4: myRank = "Silver";
              break;

     case 1: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }

   return myRank;
}

QString RankPointGenerator::getRankSoil(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

  if (theTotal >= 28) myRankNumber=28;
  else if (theTotal >= 20) myRankNumber=20;
  else if (theTotal >= 12) myRankNumber=12;
  else if (theTotal >= 5) myRankNumber=5;

   switch (myRankNumber)
   {
     case 28: myRank = "Platinum";
              break;

     case 20: myRank = "Gold";
              break;

     case 12: myRank = "Silver";
              break;

     case 5: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }

   return myRank;
}

QString RankPointGenerator::getRankSite(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

  if (theTotal >= 12) myRankNumber=12;
  else if (theTotal >= 11) myRankNumber=11;
  else if (theTotal >= 8) myRankNumber=8;
  else if (theTotal >= 5) myRankNumber=5;

   switch (myRankNumber)
   {
     case 12: myRank = "Platinum";
              break;

     case 11: myRank = "Gold";
              break;

     case 8: myRank = "Silver";
              break;

     case 5: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }

   return myRank;
}

QString RankPointGenerator::getRankWeather(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

  if (theTotal >= 33) myRankNumber=33;
  else if (theTotal >= 30) myRankNumber=30;
  else if (theTotal >= 22) myRankNumber=22;
  else if (theTotal >= 14) myRankNumber=14;

   switch (myRankNumber)
   {
     case 33: myRank = "Platinum";
              break;

     case 30: myRank = "Gold";
              break;

     case 22: myRank = "Silver";
              break;

     case 14: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }

   return myRank;
}

QString RankPointGenerator::getRankSV(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

  if (theTotal >= 40) myRankNumber=40;
  else if (theTotal >= 25) myRankNumber=25;
  else if (theTotal >= 10) myRankNumber=10;
  else if (theTotal >= 6) myRankNumber=6;

   switch (myRankNumber)
   {
     case 40: myRank = "Platinum";
              break;

     case 25: myRank = "Gold";
              break;

     case 10: myRank = "Silver";
              break;

     case 6: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }

   return myRank;
}

QString RankPointGenerator::getRank(int theTotal)
{
  int myRankNumber = 0;
  QString myRank;

  double myTotal = theTotal;
  // might have to adjust theTotal here...

  if (myTotal >= 180) myRankNumber=180;
  else if (myTotal >= 145) myRankNumber=145;
  else if (myTotal >= 90) myRankNumber=90;
  else if (myTotal >= 60) myRankNumber=60;

   switch (myRankNumber)
   {
     case 180: myRank = "Platinum";
              break;

     case 145: myRank = "Gold";
              break;

     case 90: myRank = "Silver";
              break;

     case 60: myRank = "Copper";
              break;

     default: myRank = "na";
              break;
   }

   return myRank;
}
