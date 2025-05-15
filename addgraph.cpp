#include "addgraph.h"
#include "ui_addgraph.h"
#include "CityGraph.h"
#include "Qstring"
addgraph::addgraph(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addgraph)
{
    ui->setupUi(this);
        string graphName=ui->lineEdit_4->text().toStdString();


}

addgraph::~addgraph()
{
    delete ui;
}
