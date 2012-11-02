/*
 * skfunctions.ch
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

#ifndef SKFUNCTIONS_H
#define SKFUNCTIONS_H


#include <QDir>
#include <QFile>
#include <QUrl>
#include <QString>
#include <QString>
#include <QMessageBox>
#include <QDesktopServices>
#include <QTextStream>

#include <stdio.h>

#ifdef Q_OS_WIN32
	#include <qt_windows.h>
#endif

#include "skdefs.h"

void SK_EXPORT skMsgInfo ( QString cad, QWidget *parent = 0 );
void SK_EXPORT skMsgWarning ( QString cad, QWidget *parent = 0 );
void SK_EXPORT skMsgError ( QString cad, QWidget *parent = 0 );


void SK_EXPORT skWebBrowser(const QString &uri, const QString &defbrowser="");

QString SK_EXPORT skGetEnv( const char *varName );

#ifdef Q_OS_WIN32
wchar_t* SK_EXPORT skQStringToWCHAR (QString inString);
#endif



/// Copies a file from one location to another
bool SK_EXPORT skCopyFile(const QString &oldName, const QString &newName);

/// Moves a file from one location to another
bool SK_EXPORT skMoveFile(const QString &oldName, const QString &newName);

/// Deletes a file
bool SK_EXPORT skRemove(const QString &filetoremove);



#endif // SKFUNCTIONS_H
