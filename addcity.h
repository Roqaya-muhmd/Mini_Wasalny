#ifndef ADDCITY_H
#define ADDCITY_H
#include <QLabel>  // Or QLineEdit, QPushButton, etc.
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
private slots:
    void on_addCityConfirmButton_clicked(bool checked);

private:
    Ui::AddCity *ui;
};

#endif // ADDCITY_H
