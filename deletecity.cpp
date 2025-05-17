#include "deletecity.h"
#include "ui_deletecity.h"
#include "CityGraph.h"
#include "QMessageBox"
#include "addgraph.h"
DeleteCity::DeleteCity(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DeleteCity)
{
    ui->setupUi(this);
    ui->cityNotFound_warning->hide();
    connect(ui->deleteCityConfirmButton, &QPushButton::toggled,
            this,&DeleteCity::on_deleteCityConfirmButton_clicked);
}

DeleteCity::~DeleteCity()
{
    delete ui;
}
string deletedCity;

/*CityGraph tempGraph(2,3);   */// replace with the user's graph

void DeleteCity::on_deleteCityConfirmButton_clicked(bool checked)
{   if(checked){
        if(ui->deleteCityNameLineEdit->text().isEmpty()){
            addgraph::waringlab(ui->cityNotFound_warning,"write city name");
            return;
        }else{
            ui->cityNotFound_warning->hide();
            deletedCity = ui->deleteCityNameLineEdit->text().toStdString();
            CityGraph& shared=addgraph::getGraph();
            if(shared.deleteCity2(deletedCity)){
                QMessageBox::information(this,"Success", "City Deleted!");
                qDebug() << "City found 1:" << shared.cityFound("jj");

            }
            else{
                QMessageBox::information(this,"Error", "City not found!");
            }

        }
     }

}
