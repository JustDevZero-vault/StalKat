/*
 * skapplication.cpp
 * StalKat: Utility for registering when the computer is switched on
 * Copyright (C) 2012  Daniel Ripoll <info@danielripoll.es>
 * http://danielripoll.es

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#include <QWidget>
#include "skapplication.h"
//#include "skform.h"
#include "skfunctions.h"


/// Definimos la variable global g_theApp.
SkApplication *g_theApp = NULL;


///
/**
\param argc
\param argv
**/
SkApplication::SkApplication ( int &argc, char **argv ) : QApplication ( argc, argv )
{
  //SK_FUNC_DEBUG
}


///
/**
**/
SkApplication::~SkApplication()
{
  //SK_FUNC_DEBUG
}


#if CONFIG_DEBUG == TRUE
///
/**
\param object
\param event
\return
**/
bool SkApplication::notify ( QObject *object, QEvent *event )
{
    /// This function is called all the time, this is why its not tracked by debug system

    try {
        return QApplication::notify ( object, event );
    } catch ( ... ) {
        fprintf(stderr, QString("Unexped error on notification sistem.\n").toAscii());
        return FALSE;
    } // end try

}
#endif


/*
void SkApplication::emitDbTableChanged ( const QString &table )
{
  SK_FUNC_DEBUG
  emit dbTableChanged ( table );
}

*/
