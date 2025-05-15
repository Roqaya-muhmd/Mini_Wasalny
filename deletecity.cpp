#include "deletecity.h"
#include "ui_deletecity.h"

DeleteCity::DeleteCity(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DeleteCity)
{
    ui->setupUi(this);
}

DeleteCity::~DeleteCity()
{
    delete ui;
}
