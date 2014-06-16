/***************************************************************************
                          madguid.cpp  -  description
                             -------------------
    begin                : Sept 2006
    copyright            : (C) 2006 by Tim Sutton  tim@linfiniti.com
                         : (C) 2014 by Jason Jorgenson  jjorgenson@gmailcom
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "madguid.h"
#include <QUuid>

MadGuid::MadGuid() {}
MadGuid::~MadGuid(){}

QString MadGuid::guid() const { return mGuid; }

void MadGuid::setGuid(QString theGuid)
{
  if (theGuid.isEmpty())
    {
      mGuid=QUuid::createUuid().toString().replace("{","").replace("}","");
    }
  else
    {
      mGuid=theGuid;
    }
}
