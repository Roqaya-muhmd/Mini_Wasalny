#include "addgraph.h"
#include "ui_addgraph.h"
#include "CityGraph.h"
#include "Qstring"
using namespace std;

#include "iostream"

#include <QFileInfo>

CityGraph* addgraph::graph = nullptr;  // Starts as nullptr
string addgraph::graphName;
unordered_map<string, CityGraph> addgraph::graphCollec;
bool addgraph::isGraphInitialized= false;
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
    for(auto it:addgraph::graphCollec){
        ui->listWidget->addItem(QString::fromStdString(it.first));

    }

    ui->listWidget->setStyleSheet(
        // Style for the QListWidget container
        "QListWidget {"
        "   background-color: #f0fff4;"      // Very light green background
        "   border: 1px solid #c6f6d5;"      // Soft green border
        "   border-radius: 6px;"             // Slightly more rounded corners
        "   padding: 3px;"                   // Slightly more padding
        "   font-family: 'Segoe UI';"
        "   font-size: 13px;"                // Slightly larger font
        "}"

        // Style for individual items
        "QListWidget::item {"
        "   height: 28px;"                   // Taller items
        "   padding: 5px 10px;"              // More padding
        "   border-bottom: 1px solid #e6ffed;"  // Light green separator
        "   color: #2d3748;"                 // Dark gray text for better contrast
        "}"

        // Hover effect
        "QListWidget::item:hover {"
        "   background-color: #e6ffed;"      // Light mint green hover
        "}"

        // Selected item style
        "QListWidget::item:selected {"
        "   background-color: #48bb78;"      // Medium green selection
        "   color: white;"                   // White text
        "   font-weight: bold;"
        "}"

        // Optional: Scrollbar styling
        "QScrollBar:vertical {"
        "   width: 10px;"
        "   background: #f0fff4;"
        "}"
        "QScrollBar::handle:vertical {"
        "   background: #c6f6d5;"
        "   min-height: 20px;"
        "   border-radius: 5px;"
        "}"
        );

}
void addgraph::showEvent(QShowEvent *event) {
    QWidget::showEvent(event); // Call base class implementation
    ui->label_warning->hide();
    ui->label_waring2->hide();
    ui->label_waring3->hide();
    ui->label_waring4->hide();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    qDebug() << "addgraph is now visible";

}
addgraph::~addgraph()
{
    delete ui;
}

void addgraph::on_pushButton_clicked()
{
    string c2,c1;
    int e1;
    QString message1,message2,message3;
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
            message1=QString::fromStdString(graph->addCity(c1));
            waringlab(ui->label_waring2, message1);

            // ui->label_4->setText(message1);

            if (ui->lineEdit_2->text().isEmpty()) {
                // add error label
                if( message1!= "City already exist! try again")
                    ui->label_waring2->hide();

                waringlab(ui->label_waring3, "The city2 is empty");
                qDebug() << "The city2 is empty";
                return;
            }
            else{
                ui->label_waring3->hide();
                c2=ui->lineEdit_2->text().toStdString();
                message2=QString::fromStdString(graph->addCity(c2));
                waringlab(ui->label_waring3, message2);

                // ui->label_2->setText(message1);
            }

            if (ui->lineEdit_3->text().isEmpty()){
                waringlab(ui->label_waring4,"edge is empty");
                qDebug() << "The no edge added";
                return;
            }
            else{
                ui->label_waring4->hide();
                e1=ui->lineEdit_3->text().trimmed().toInt();
                message3=QString::fromStdString(graph->addEdge(c1,c2,e1));
                // ui->label_3->setText(message1);
                waringlab(ui->label_waring4,message3);

            }


           //file.saveGraphToFile("savedData.txt", graphName, graph.getAdjacencyList());

        }
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
      // qDebug() << "City found:" << graph.cityFound("cairo");

        for ( auto& [graphName, cityGraph] : graphCollec) {
            const auto& adjList = cityGraph.getAdjacencyList();

            // Graph header
            qDebug().noquote() << QString("\nGraph: %1 (Cities: %2)")
                                      .arg(QString::fromStdString(graphName))
                                      .arg(adjList.size());
            qDebug() << QString(50, '-');

            // Print cities and connections
            for (const auto& [city, neighbors] : adjList) {
                QString connections;
                if (neighbors.empty()) {
                    connections = "[No connections]";
                } else {
                    for (size_t i = 0; i < neighbors.size(); ++i) {
                        if (i > 0) connections += ", ";
                        connections += QString("%1 (%2)")
                                           .arg(QString::fromStdString(neighbors[i].first))
                                           .arg(neighbors[i].second);
                    }
                }

                qDebug().noquote() << QString("• %1 → %2")
                                          .arg(QString::fromStdString(city).leftJustified(15, ' '))
                                          .arg(connections);
            }
        }


    }


}


void addgraph::on_pushButton_2_clicked()
{
    if (ui->lineEdit_4->text().isEmpty()) {
        waringlab(ui->label_warning,"The graph name is empty");
        qDebug() << "The graph name is empty";
        return;}

        ui->label_warning->hide();
        QString ghname = ui->lineEdit_4->text().trimmed();
        string graphNameStr = ghname.toStdString();

        // Check if the graph exists in graphCollec
        auto it = graphCollec.find(graphNameStr);

        if (it != graphCollec.end()) {
            // Graph exists → Switch to it
            graph = &it->second;
            graphName = graphNameStr;
            isGraphInitialized = true;
            qDebug() << "Switched to existing graph:" << ghname;
        } else {
            // Graph doesn't exist → Create new one
            CityGraph newGraph;
            graphCollec[graphNameStr] = newGraph;
            graph = &graphCollec[graphNameStr];
            graphName = graphNameStr;
            isGraphInitialized = true;
            qDebug() << "Created new graph:" << ghname;
        }
        qDebug() << "Loaded graphs:";
        for (const auto& [name, _] : graphCollec) {
            qDebug() << "-" << QString::fromStdString(name);
        }
        // graphCollec[graphName.toStdString()].cityFound("cc");      // for(auto it :graphCollec){
        //     for(auto i:it.second.getAdjacencyList()){
        //         qDebug() <<"jj";
        //         qDebug() <<i.first<<" "<<i.second;
        //     }
        // }




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
