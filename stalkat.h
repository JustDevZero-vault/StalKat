#ifndef STALKATVIEW_H
#define STALKATVIEW_H

#include <QMainWindow>

namespace Ui {
class StalKat;
}

class StalKat : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit StalKat(QWidget *parent = 0);
    ~StalKat();
    
private:
    Ui::StalKat *ui;
};

#endif // STALKAT
