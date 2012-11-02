#include "stalkat.h"
#include "ui_stalkatbase.h"

StalKat::StalKat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StalKat)
{
    ui->setupUi(this);
    ui->mui_biglogo->setBackgroundBrush(QImage(":/images/stalkat.svg"));
    ui->mui_biglogo->setCacheMode(QGraphicsView::CacheBackground);
}

StalKat::~StalKat()
{
    delete ui;
}
