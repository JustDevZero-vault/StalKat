#include <QtGui/QApplication>
#include "stalkat.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StalKat skat;
    skat.show();
    
    return a.exec();
}
