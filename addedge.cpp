#include "addedge.h"
#include "ui_addedge.h"
#include "string"
#include "addgraph.h"
AddEdge::AddEdge(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddEdge)
{
    ui->setupUi(this);
    ui->city1NameNotFound->hide();
    ui->city2NameNotFound->hide();
    ui->edgeNameNotFound->hide();
    connect(ui->addEdgeConfirmButton, &QPushButton::toggled,
            this,&AddEdge::on_addEdgeConfirmButton_clicked);
}

AddEdge::~AddEdge()
{
    delete ui;
}
void AddEdge::on_addEdgeConfirmButton_clicked(bool checked){
    std::string c1,c2;int cost;
    QString message1;
    CityGraph& shared=addgraph::getGraph();

    if(checked){
        if (ui->addEdgeFirstCityNameLineEdit->text().isEmpty()) {
            // add error label
            addgraph::waringlab(ui->city1NameNotFound,"The city1 is empty");
            qDebug() << "The city1 is empty";
            return;
        }
        else{
            ui->city1NameNotFound->hide();
            c1=ui->addEdgeFirstCityNameLineEdit->text().toStdString();
            message1=QString::fromStdString(shared.addCity(c1));


            if (ui->addEdgeSecondCityNameLineEdit->text().isEmpty()) {
                // add error label
                addgraph::waringlab(ui->city2NameNotFound,"The city2 is empty");
                qDebug() << "The city2 is empty";
                return;
            }

            else{
                ui->city2NameNotFound->hide();
                c2=ui->addEdgeSecondCityNameLineEdit->text().toStdString();

                message1=QString::fromStdString(shared.addCity(c2));

            }

            if (ui->addEdgeWeightLineEdit->text().isEmpty()){
                addgraph::waringlab(ui->edgeNameNotFound,"The no edge added");
                qDebug() << "The no edge added";
                return;
            }
            else{
                ui->edgeNameNotFound->hide();
                cost=ui->addEdgeWeightLineEdit->text().trimmed().toInt();
                message1=QString::fromStdString(shared.addEdge(c1,c2,cost));

            }




        }


    }
}
