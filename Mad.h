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


#ifndef MAD_H
#define MAD_H

#include <QMap>
#include <QPair>
#include <QString>
//#include <madfoodsource.h>

typedef QMap <QString,QPair<bool,QString> > MadTripleMap;

typedef QPair <QPair<QString,QString>, QPair<QString,QString> > MadDoublePair;
//typedef QMap < QString, MadFoodSource > MadFoodSourceMap;
typedef QMap <QString,QPair<QString,float> > MadReportMap;

enum Priority {None, High, Medium, Low};
enum LandBeingGrazed {Common, Unique};
enum AreaUnits {Acre, Dunum, Hectare};



#endif // MAD_H
