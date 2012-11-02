//#include <QtGui/QApplication>

#include "stalkat.h"

int main(int argc, char **argv)
{
    bool valorExit = 0;

    StalKat skat;
    QApplication theApp(argc, argv);
    skat = new StalKat();
    skat.show();
    
    return theApp.exec();
}
