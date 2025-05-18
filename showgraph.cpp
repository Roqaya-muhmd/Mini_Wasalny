#include "showgraph.h"
#include "ui_showgraph.h"
#include "graphloader.h"
#include "string.h"
#include "QGraphicsView.h"
#include "addgraph.h"
#include "Dijkstra.h"
#include "BFS.h"
#include "DFS.h"

ShowGraph::ShowGraph(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowGraph)
{
    ui->setupUi(this);

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
        DFS df;
        if(ui->source->text().isEmpty()){

        }else{
            string ans=ui->source->text().toStdString();
            if(ui->distanation->text().isEmpty()){

            }else{
                string ans2=ui->distanation->text().toStdString();
                df.dfs_displays2(*addgraph::getGraph(),ans,ans2);
                shortestPath=df.getPath();

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
    if(addgraph::getisGraphInitialized()){
        vector<string> shortestPath ;
        Dijkstra d;
        if(ui->source->text().isEmpty()){

        }else{
            string ans=ui->source->text().toStdString();
            d.dijkstra(*addgraph::getGraph(),ans);
            if(ui->distanation->text().isEmpty()){

            }else{
                string ans2=ui->distanation->text().toStdString();
                stack<string>st=  d.checkPath(d.getparent(),ans,ans2);

                while(!st.empty()){
                    shortestPath.push_back(st.top());
                    st.pop();
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

            }
        }
    }else{
        qDebug()<<"nullllll";
    }
}

