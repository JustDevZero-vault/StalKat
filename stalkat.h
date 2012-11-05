#ifndef STALKAT_H
#define STALKAT_H

#include <QMainWindow>

#include "skdefs.h"
#include "ui_stalkatbase.h"

class StalKat : public QMainWindow, public Ui::StalKat
{
    Q_OBJECT
    
public:
    explicit StalKat(QWidget *parent = 0);
    ~StalKat();
    QString g_computerip;
    QList<int> g_days;

private slots:
    void on_actionFullScreen_triggered();
    void fullScreen();
    void on_actionWeb_Page_triggered();
    void on_mui_addcomputer_clicked();
    void createComputer();
    void resetComputer();
    QString _(QString quote);
    void on_mui_reset_clicked();
    void on_mui_monday_clicked(bool checked);
    void on_mui_tuesday_clicked(bool checked);
    void on_mui_wednesday_clicked(bool checked);
    void on_mui_thursday_clicked(bool checked);
    void on_mui_fryday_clicked(bool checked);
    void on_mui_saturday_clicked(bool checked);
    void on_mui_sunday_clicked(bool checked);
};

#endif // STALKAT
