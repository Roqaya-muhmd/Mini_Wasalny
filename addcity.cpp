#include "addcity.h"
#include "ui_addcity.h"
#include <QGridLayout>  // For QGridLayout

AddCity::AddCity(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddCity)
{
    ui->setupUi(this);

}

AddCity::~AddCity()
{
    delete ui;
}
