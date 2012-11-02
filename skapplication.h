/*
 * skapplication.h
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

#ifndef SKAPPLICATION_H
#define SKAPPLICATION_H

#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include "skdefs.h"
//#include "skconfig.h"


class SK_EXPORT SkApplication : public QApplication
{
    Q_OBJECT

private:
    QMainWindow *m_mainWindow;

public:
    SkApplication ( int &argc, char **argv );
    ~SkApplication();
    
#if CONFIG_DEBUG == TRUE
    virtual bool notify ( QObject *object, QEvent *event );
#endif
    
    //void emitDbTableChanged(const QString &table);

//signals:
    //void dbTableChanged(const QString &);

};


/// Declaramos la variable g_theApp como extern para que funcione con un entorno multilibreria.
extern SK_EXPORT SkApplication *g_theApp;


#endif

