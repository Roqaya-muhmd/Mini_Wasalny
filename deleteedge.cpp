#include "deleteedge.h"
#include "ui_deleteedge.h"
#include "CityGraph.h"
#include "QMessageBox"
#include "addgraph.h"
DeleteEdge::DeleteEdge(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DeleteEdge)
{
    ui->setupUi(this);
    ui->cityone_warning->hide();
    ui->citytwo_warning->hide();

    connect(ui->deleteEdgeConfirmButton, &QPushButton::toggled,
            this,&DeleteEdge::on_deleteEdgeConfirmButton_clicked);
}
void DeleteEdge::showEvent(QShowEvent *event) {
    QWidget::showEvent(event); // Call base class implementation
    ui->cityone_warning->hide();
    ui->citytwo_warning->hide();
    ui->deleteEdgeFirstCityNameLineEdit->clear();
    ui->deleteEdgeSecondCityNameLineEdit->clear();
    qDebug() << "deletecity is now visible";

}
DeleteEdge::~DeleteEdge()
{
    delete ui;
}
string deletedFirstCity, deletedSecondCity, deletedWeight;

/*CityGraph tempGraph2(2,3);*/   // replace with the user's graph


void DeleteEdge::on_deleteEdgeConfirmButton_clicked()
{  if(addgraph::getisGraphInitialized()){
    deletedFirstCity = ui->deleteEdgeFirstCityNameLineEdit->text().toStdString();
    deletedSecondCity = ui->deleteEdgeSecondCityNameLineEdit->text().toStdString();
    if(deletedFirstCity.empty()){
        addgraph::waringlab(ui->cityone_warning,"write city1 name");
        return;

    }else{
        if(deletedSecondCity.empty()){
            addgraph::waringlab(ui->citytwo_warning,"write city2 name");
            return;
        }else{
<<<<<<< HEAD
            if(deletedWeight.empty()){
                addgraph::waringlab(ui->edge_warning,"write the weight");
                return;
            }else{
                CityGraph* shared=addgraph::getGraph();
=======

                CityGraph& shared=addgraph::getGraph();
>>>>>>> 5985a37409e3c36de279f07ffa22368660b66abd

                if(shared->deleteEdge2(deletedFirstCity, deletedSecondCity)){
                    QMessageBox::information(this,"Success", "Edge deleted!");
                }
                else{
                    QMessageBox::information(this,"Error", "No edge between those cities!");

                }


        }
    }
    }else{
        addgraph::waringlab(ui->cityone_warning,"you must add a grapph fisrt");
    }

}

