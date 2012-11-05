#include "stalkat.h"
#include "ui_stalkatbase.h"
#include "skfunctions.h"

StalKat::StalKat(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);

    g_computerip = "";

    mui_os->addItem(QString(_("Select your Operative System")), QString("0") );
    mui_os->addItem(QString("GNU/Linux"), QString("linux") );
    mui_os->addItem(QString("GNU/KFreeBSD"), QString("linux") );
    mui_os->addItem(QString("FreeBSD"), QString("freebsd") );
    mui_os->addItem(QString("NetBSD"), QString("netbsd") );
    mui_os->addItem(QString("MacOsX"), QString("macosx") );
    mui_os->addItem(QString("Windows XP"), QString("windowsxp") );
    mui_os->addItem(QString("Windows Vista"), QString("windowsvista") );
    mui_os->addItem(QString("Windows 7"), QString("windows7") );
    mui_os->addItem(QString("Windows 8"), QString("windows8") );

    mui_willdo->addItem(QString(_("Shutdown")), QString());
    mui_willdo->addItem(QString(_("Reboot")), QString());
    mui_willdo->addItem(QString(_("Hibernate")), QString());
    mui_willdo->addItem(QString(_("Sleep")), QString());
}

StalKat::~StalKat()
{
    //delete ui;
}


void StalKat::on_actionFullScreen_triggered()
{
    fullScreen();
}

void StalKat::fullScreen(){
    if ( isFullScreen() ) {
        showNormal();
    } else {
        showFullScreen();
    } // end if
}

void StalKat::on_actionWeb_Page_triggered()
{
    skWebBrowser("http://danielripoll.es");
}

void StalKat::on_mui_addcomputer_clicked()
{
    mui_statusbar->showMessage("s");
    createComputer();
    mui_statusbar->showMessage(g_computerip);
}

void StalKat::createComputer()
{
    g_computerip = mui_ip_a->text() + "." + mui_ip_b->text() + "." + mui_ip_c->text() + "." + mui_ip_d->text();

    resetComputer();
}

void StalKat::resetComputer()
{
    // This ...
    mui_ip_a->setValue(0);
    mui_ip_b->setValue(0);
    mui_ip_c->setValue(0);
    mui_ip_d->setValue(0);
    mui_monday->setChecked(false);
    mui_tuesday->setChecked(false);
    mui_wednesday->setChecked(false);
    mui_thursday->setChecked(false);
    mui_fryday->setChecked(false);
    mui_saturday->setChecked(false);
    mui_sunday->setChecked(false);
    g_computerip.clear();
    g_days.clear();
    mui_os->setCurrentIndex(0);
    mui_willdo->setCurrentIndex(0);
    mui_time->setTime(QTime(00,00));
}

void StalKat::on_mui_reset_clicked()
{
    resetComputer();
}
void StalKat::on_mui_monday_clicked(bool checked)
{
    if (checked == true)
    {
        g_days.append(1);
    }
    else
    {
        g_days.removeAt(g_days.indexOf(1));
    }
}

void StalKat::on_mui_tuesday_clicked(bool checked)
{
    if (checked == true)
    {
        g_days.append(2);
    }
    else
    {
        g_days.removeAt(g_days.indexOf(2));
    }
}

void StalKat::on_mui_wednesday_clicked(bool checked)
{
    if (checked == true)
    {
        g_days.append(3);
    }
    else
    {
        g_days.removeAt(g_days.indexOf(3));
    }
}

void StalKat::on_mui_thursday_clicked(bool checked)
{
    if (checked == true)
    {
        g_days.append(4);
    }
    else
    {
        g_days.removeAt(g_days.indexOf(4));
    }
}

void StalKat::on_mui_fryday_clicked(bool checked)
{
    if (checked == true)
    {
        g_days.append(5);
    }
    else
    {
        g_days.removeAt(g_days.indexOf(5));
    }
}

void StalKat::on_mui_saturday_clicked(bool checked)
{
    if (checked == true)
    {
        g_days.append(6);
    }
    else
    {
        g_days.removeAt(g_days.indexOf(6));
    }
}

void StalKat::on_mui_sunday_clicked(bool checked)
{
    if (checked == true)
    {
        g_days.append(7);
    }
    else
    {
        g_days.removeAt(g_days.indexOf(7));
    }
}

QString StalKat::_(QString quote)
{
    return quote;
}
