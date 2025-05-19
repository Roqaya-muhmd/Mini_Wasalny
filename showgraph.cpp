#include "showgraph.h"
#include "ui_showgraph.h"
#include "graphloader.h"
#include "string.h"
#include "QGraphicsView.h"
#include "addgraph.h"
#include "Dijkstra.h"
#include "BFS.h"
#include "DFS.h"
#include "AStar.h"

#include <BidirectionalBFS.h>
#include <qmessagebox.h>

 string ShowGraph::ans;
string ShowGraph::ans2;


ShowGraph::ShowGraph(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowGraph)

{
    ui->setupUi(this);
    ui->listWidget->addItem(QString::fromStdString("BFS"));
    ui->listWidget->addItem(QString::fromStdString("DFS"));
    ui->listWidget->addItem(QString::fromStdString("dikstra"));
    ui->listWidget->addItem(QString::fromStdString("AStar"));
    ui->listWidget->addItem(QString::fromStdString("bidir_BFS"));


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

ShowGraph::~ShowGraph()
{
    delete ui;
}
/*void ShowGraph::on_deleteEdgeConfirmButton_clicked()
{
{
    if(addgraph::getisGraphInitialized()){
        vector<string> shortestPath ;
        BFS b;
        if(ui->source->text().isEmpty()){

        }else{
            string ans=ui->source->text().toStdString();
            if(ui->distanation->text().isEmpty()){

            }else{
                string ans2=ui->distanation->text().toStdString();
                qDebug()<< QString::fromStdString(b.bfs_displays(*addgraph::getGraph(),ans,ans2));
                shortestPath=b.getPath();


                QGraphicsScene* scene = new QGraphicsScene();
                QGraphicsView* view = new QGraphicsView(scene);
                view->setRenderHint(QPainter::Antialiasing);
                view->setWindowTitle("City Graph Viewer");
                view->resize(1000, 800);
                unordered_map<string, unordered_map<string, vector<pair<string, int>>>> allGraphs;
                for(auto it :addgraph::getCollec()){
                    allGraphs[it.first]=it.second.getAdjacencyList();
                }

                GraphLoader loader;
                loader.loadGraph(addgraph::getGraphName(), allGraphs, shortestPath, scene);

                view->show();

            }
        }
    }else{
        qDebug()<<"nullllll";
    }
}
}



{
    if(addgraph::getisGraphInitialized()){
        vector<string> shortestPath ;
        AStar a ;
        if(ui->source->text().isEmpty()){

        }else{
            string ans=ui->source->text().toStdString();
            if(ui->distanation->text().isEmpty()){

            }else{
                string ans2=ui->distanation->text().toStdString();
                a.astars_display(*addgraph::getGraph(),ans,ans2);
                shortestPath=a.getPath();

                QGraphicsScene* scene = new QGraphicsScene();
                QGraphicsView* view = new QGraphicsView(scene);
                view->setRenderHint(QPainter::Antialiasing);
                view->setWindowTitle("City Graph Viewer");
                view->resize(1000, 800);
                unordered_map<string, unordered_map<string, vector<pair<string, int>>>> allGraphs;
                for(auto it :addgraph::getCollec()){
                    allGraphs[it.first]=it.second.getAdjacencyList();
                }

                GraphLoader loader;
                loader.loadGraph(addgraph::getGraphName(), allGraphs, shortestPath, scene);

                view->show();

            }
        }
    }else{
        qDebug()<<"nullllll";
    }
}

{
    if(addgraph::getisGraphInitialized()){
        vector<string> shortestPath ;
        BidirectionalBFS bid ;
        if(ui->source->text().isEmpty()){

        }else{
            string ans=ui->source->text().toStdString();
            if(ui->distanation->text().isEmpty()){

            }else{
                string ans2=ui->distanation->text().toStdString();
                bid.bidir_bfs_display(*addgraph::getGraph(),ans,ans2);
                shortestPath=bid.getPath();

                QGraphicsScene* scene = new QGraphicsScene();
                QGraphicsView* view = new QGraphicsView(scene);
                view->setRenderHint(QPainter::Antialiasing);
                view->setWindowTitle("City Graph Viewer");
                view->resize(1000, 800);
                unordered_map<string, unordered_map<string, vector<pair<string, int>>>> allGraphs;
                for(auto it :addgraph::getCollec()){
                    allGraphs[it.first]=it.second.getAdjacencyList();
                }

                GraphLoader loader;
                loader.loadGraph(addgraph::getGraphName(), allGraphs, shortestPath, scene);

                view->show();

            }
        }
    }else{
        qDebug()<<"nullllll";
    }
}


*/
void ShowGraph::on_deleteEdgeConfirmButton_clicked()
{
    vector<string> shortestPath ;
    string   algo="";
    qDebug()<<"4";

    if(addgraph::getisGraphInitialized()){
        qDebug()<<"11";
         if(!ui->listWidget->selectedItems().isEmpty()){
            algo= ui->listWidget->currentItem()->text().toStdString();
            qDebug()<<QString::fromStdString(algo);
            qDebug()<<"22";

         }else{
             qDebug()<<"66";
         }
    if(!algo.empty()){
         if(algo=="dikstra"){
            if(!check_in())
             { Dijkstra d;
                d.dijkstra(*addgraph::getGraph(),ans);
                stack<string>st=  d.checkPath(d.getparent(),ans,ans2);
                d.dijkstra_displays(*addgraph::getGraph(),ans,ans2);
                while(!st.empty()){
                    shortestPath.push_back(st.top());
                    st.pop();
                }
            }
         }else if(algo=="DFS"){
             if(!check_in()){
                 DFS df;
                 df.dfs_displays2(*addgraph::getGraph(),ans,ans2);
                 shortestPath=df.getPath();

             }

         }else if(algo=="BFS"){
             if(!check_in()){
                 BFS b;
                 //ui->label_3->setText(QString::fromStdString(b.bfs_displays(*addgraph::getGraph(),ans,ans2)));
                 QMessageBox::information(this,"Message",  QString::fromStdString(b.bfs_displays(*addgraph::getGraph(),ans,ans2)));

                 shortestPath=b.getPath();

             }

         }else if (algo=="bidir_BFS"){
             if(!check_in()){
                 BidirectionalBFS bid ;
                 bid.bidir_bfs_display(*addgraph::getGraph(),ans,ans2);
                 shortestPath=bid.getPath();

             }

         }else if(algo=="AStar"){
             if(!check_in()){
                 AStar a;
                 a.astar_displays(*addgraph::getGraph(),ans,ans2);
                 shortestPath=a.getPath();

             }
         }


                QGraphicsScene* scene = new QGraphicsScene();
                QGraphicsView* view = new QGraphicsView(scene);
                view->setRenderHint(QPainter::Antialiasing);
                view->setWindowTitle("City Graph Viewer");
                view->resize(1000, 800);

                unordered_map<string, unordered_map<string, vector<pair<string, int>>>> allGraphs;
                for(auto it :addgraph::getCollec()){
                    allGraphs[it.first]=it.second.getAdjacencyList();
                }

                GraphLoader loader;
                loader.loadGraph(addgraph::getGraphName(), allGraphs, shortestPath, scene);

                view->show();


    }else{
        qDebug()<<"nullllll";
        QMessageBox::information(this,"Error",  "please select a algorithm");

        }

    }else{
        QMessageBox::information(this,"Error",  "please select an graph");

    }

}

bool ShowGraph::check_in(){
    if(ui->source->text().isEmpty()&&ui->distanation->text().isEmpty()){
        return true;
    }
     ans=ui->source->text().toStdString();
     ans2=ui->distanation->text().toStdString();


    return false;

}
