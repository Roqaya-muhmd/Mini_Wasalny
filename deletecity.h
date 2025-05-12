#ifndef DELETECITY_H
#define DELETECITY_H

#include <QWidget>

namespace Ui {
class DeleteCity;
}

class DeleteCity : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteCity(QWidget *parent = nullptr);
    ~DeleteCity();

private:
    Ui::DeleteCity *ui;
};

#endif // DELETECITY_H
