#include "addgraph.h"
#include "ui_addgraph.h"
#include "CityGraph.h"
#include "Qstring"
addgraph::addgraph(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addgraph)
{
    ui->setupUi(this);


}

addgraph::~addgraph()
{
    delete ui;
}

void addgraph::on_pushButton_clicked()
{
    if (ui->lineEdit_4->text().isEmpty()) {
        // add error label
        qDebug() << "The graph name is empty";
    }else{
     string graphName=ui->lineEdit_4->text().toStdString();
     CityGraph graph=CityGraph();

         if (ui->lineEdit->text().isEmpty()) {
             // add error label
             qDebug() << "The city1 is empty";}
         else{
             string c1=ui->lineEdit->text().toStdString();
             string message1=graph.addCity(c1);

             if (ui->lineEdit_2->text().isEmpty()) {
                 // add error label
                 qDebug() << "The city2 is empty";}
             else{
                 string c2=ui->lineEdit_2->text().toStdString();
                 string message2=graph.addCity(c2);

                 if (ui->lineEdit_3->text().isEmpty()){
                     qDebug() << "The no edge added";
                 }else{
                    int e1=ui->lineEdit_2->text().trimmed().toInt();
                     string message3=graph.addEdge(c1,c2,e1);
                 }

             }

         }



    }




}

