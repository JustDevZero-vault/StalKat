#include "stalkatview.h"
#include "ui_stalkatbase.h"

StalKat::StalKat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StalKat)
{
    ui->setupUi(this);
}

StalKat::~StalKat()
{
    delete ui;
}
