#ifndef ADDCITY_H
#define ADDCITY_H

#include <QWidget>

namespace Ui {
class AddCity;
}

class AddCity : public QWidget
{
    Q_OBJECT

public:
    explicit AddCity(QWidget *parent = nullptr);
    ~AddCity();

private:
    Ui::AddCity *ui;
};

#endif // ADDCITY_H
