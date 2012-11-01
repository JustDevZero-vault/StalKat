#include <QtGui/QApplication>
#include "stalkatview.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StalKat w;
    w.show();
    
    return a.exec();
}
