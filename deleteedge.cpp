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
    ui->edge_warning->hide();
    connect(ui->deleteEdgeConfirmButton, &QPushButton::toggled,
            this,&DeleteEdge::on_deleteEdgeConfirmButton_clicked);
}

DeleteEdge::~DeleteEdge()
{
    delete ui;
}
string deletedFirstCity, deletedSecondCity, deletedWeight;

/*CityGraph tempGraph2(2,3);*/   // replace with the user's graph


void DeleteEdge::on_deleteEdgeConfirmButton_clicked()
{
    deletedFirstCity = ui->deleteEdgeFirstCityNameLineEdit->text().toStdString();
    deletedSecondCity = ui->deleteEdgeSecondCityNameLineEdit->text().toStdString();
    deletedWeight = ui->deleteEdgeWeightLineEdit->text().toStdString();
    if(deletedFirstCity.empty()){
        addgraph::waringlab(ui->cityone_warning,"write city1 name");
        return;

    }else{
        if(deletedSecondCity.empty()){
            addgraph::waringlab(ui->citytwo_warning,"write city2 name");
            return;
        }else{
            if(deletedWeight.empty()){
                addgraph::waringlab(ui->edge_warning,"write the weight");
                return;
            }else{
                CityGraph* shared=addgraph::getGraph();

                if(shared->deleteEdge2(deletedFirstCity, deletedSecondCity)){
                    QMessageBox::information(this,"Success", "Edge deleted!");
                }
                else{
                    QMessageBox::information(this,"Error", "No edge between those cities!");

                }

            }
        }
    }

}

