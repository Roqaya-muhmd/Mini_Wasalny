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

    string c2,c1;
    int e1;
    QString message1;
    if (!isGraphInitialized) {
        // add error label
        qDebug() << "The graph name is empty";
        return;
    }else{

         if (ui->lineEdit->text().isEmpty()) {
             // add error label
            qDebug() << "The city1 is empty";
            return;
            }
         else{

            c1=ui->lineEdit->text().toStdString();
            message1=QString::fromStdString(graph.addCity(c1));
            ui->label_4->setText(message1);

                if (ui->lineEdit_2->text().isEmpty()) {
                 // add error label
                qDebug() << "The city2 is empty";
                return;
                }

                else{

                    c2=ui->lineEdit_2->text().toStdString();

                    message1=QString::fromStdString(graph.addCity(c2));
                    ui->label_2->setText(message1);
                    }

                if (ui->lineEdit_3->text().isEmpty()){
                    qDebug() << "The no edge added";
                    return;
                 }
                else{

                    e1=ui->lineEdit_2->text().trimmed().toInt();
                    message1=QString::fromStdString(graph.addEdge(c1,c2,e1));
                    ui->label_3->setText(message1);
                 }




         }



    }

}


void addgraph::on_pushButton_2_clicked()
{
    if (ui->lineEdit_4->text().isEmpty()) {
        // add error label
        qDebug() << "The graph name is empty";
        return;
    }else{

        QString graphName = ui->lineEdit_4->text();
        auto it = graphCollec.find(graphName.toStdString());

        if (it == graphCollec.end()) {
            qDebug() << "";
            // Create new graph
            CityGraph newGraph;
            graphCollec[graphName.toStdString()] = newGraph;
            graph = newGraph;  // Set as current graph
            isGraphInitialized = true;
            qDebug() << "Created new graph:" << graphName;
            return ;
        }

        graph = it->second;  // Set as current graph
        isGraphInitialized = true;
        qDebug() << "Switched to existing graph:" << graphName;
    }

}

