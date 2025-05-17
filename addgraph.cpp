#include "addgraph.h"
#include "ui_addgraph.h"
#include "CityGraph.h"
#include "Qstring"
using namespace std;
#include "iostream"
 CityGraph addgraph::graph ;

addgraph::addgraph(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addgraph)

{
    ui->setupUi(this);
    ui->label_warning->hide();
    ui->label_waring2->hide();
    ui->label_waring3->hide();
    ui->label_waring4->hide();
    connect(ui->pushButton, &QPushButton::toggled,
            this,&addgraph::on_pushButton_clicked);
    connect(ui->pushButton_2, &QPushButton::toggled,
            this,&addgraph::on_pushButton_2_clicked);

}

addgraph::~addgraph()
{
    delete ui;
}

void addgraph::on_pushButton_clicked()
{

    string c2,c1;
    int e1;
    QString message1;
    if (!isGraphInitialized) {
        // add error label
        waringlab(ui->label_warning,"The graph name is empty");
        qDebug() << "The graph name is empty";
        return;
    }else{

        if (ui->lineEdit->text().isEmpty()) {
            // add error label
            waringlab(ui->label_waring2,"The city1 is empty");
            qDebug() << "The city1 is empty";
            return;
        }
        else{
            ui->label_waring2->hide();
            c1=ui->lineEdit->text().toStdString();
            message1=QString::fromStdString(graph.addCity(c1));
            // ui->label_4->setText(message1);

            if (ui->lineEdit_2->text().isEmpty()) {
                // add error label
                waringlab(ui->label_waring3,"The city2 is empty");
                qDebug() << "The city2 is empty";
                return;
            }

            else{
                ui->label_waring3->hide();
                c2=ui->lineEdit_2->text().toStdString();

                message1=QString::fromStdString(graph.addCity(c2));
                // ui->label_2->setText(message1);
            }

            if (ui->lineEdit_3->text().isEmpty()){
                waringlab(ui->label_waring4,"The no edge added");
                qDebug() << "The no edge added";
                return;
            }
            else{
                ui->label_waring4->hide();
                e1=ui->lineEdit_3->text().trimmed().toInt();
                message1=QString::fromStdString(graph.addEdge(c1,c2,e1));
                // ui->label_3->setText(message1);
            }




        }
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
      // qDebug() << "City found:" << graph.cityFound("cairo");


    }

}


void addgraph::on_pushButton_2_clicked()
{
    if (ui->lineEdit_4->text().isEmpty()) {
        waringlab(ui->label_warning,"The graph name is empty");
        qDebug() << "The graph name is empty";
        return;
    }else{
        ui->label_warning->hide();
        QString graphName = ui->lineEdit_4->text();
        auto it = graphCollec.find(graphName.toStdString());

        if (it == graphCollec.end()) {
            qDebug() << "";
            // Create new graph
            CityGraph& newGraph= graphCollec[graphName.toStdString()];
            // graphCollec[graphName.toStdString()] = newGraph;
            graph = newGraph;  // Set as current graph
            isGraphInitialized = true;
            qDebug() << "Created new graph:" << graphName;
            return ;
        }

        graph = it->second;  // Set as current graph
        isGraphInitialized = true;
        qDebug() << "Switched to existing graph:" << graphName;
         graphCollec[graphName.toStdString()].cityFound("cc");      // for(auto it :graphCollec){
        //     for(auto i:it.second.getAdjacencyList()){
        //         qDebug() <<"jj";
        //         qDebug() <<i.first<<" "<<i.second;
        //     }
        // }


    }

}
void addgraph::waringlab(QLabel *l,QString m){
   l->setText(m);
   l->setStyleSheet(
        "QLabel {"
        "   color: #721c24;"
        "   background-color: #f8d7da;"
        "   border: 1px solid #f5c6cb;"
        "   border-radius: 4px;"
        "   padding: 4px;"


        "}"
        );
   l->show();
}
