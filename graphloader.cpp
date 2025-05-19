#include "graphloader.h"
#include "graphnode.h"
#include "graphedge.h"

#include <QPointF>
#include <QDebug>
#include <QMap>
#include <unordered_set>
#include <cstdlib>
#include <ctime>
#include <QTimer>

void GraphLoader::loadGraph(
    const std::string& graphName,
    const std::unordered_map<std::string, std::unordered_map<std::string, std::vector<std::pair<std::string, int>>>>& allGraphs,
    const std::vector<std::string>& highlightedPath,
    QGraphicsScene* scene

)
{


    if (allGraphs.find(graphName) == allGraphs.end()) {
        qDebug() << "Graph not found:" << QString::fromStdString(graphName); //we want to handle it in another way in GUI
        return;
    }

    const auto& adjacency = allGraphs.at(graphName);
    QMap<QString, GraphNode*> nodeMap;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    const int sceneWidth = 800; //PAY ATTENTION HERE THIS SHOULD BE CHANGED WHEN WE MOVE THIS CODE TO MINIWASALNY GUI
    const int sceneHeight = 600;

    
    for (const auto& [from, edges] : adjacency) //iterating through the adjacency list, from da is our city
    {
        QString qFrom = QString::fromStdString(from); //qfrom is our src node or first node
        if (!nodeMap.contains(qFrom)) {
            QPointF pos(rand() % sceneWidth, rand() % sceneHeight);
            GraphNode* node = new GraphNode(qFrom, pos);
            scene->addItem(node);
            nodeMap[qFrom] = node;
        }

		for (const auto& [to, weight] : edges) { //iterating through the edges (city,and weight) of the src node
            QString qTo = QString::fromStdString(to);
			if (!nodeMap.contains(qTo)) { //checking if the node exists
                QPointF pos(rand() % sceneWidth, rand() % sceneHeight);
                GraphNode* node = new GraphNode(qTo, pos);
                scene->addItem(node);
                nodeMap[qTo] = node;
            }

            
            std::unordered_set<std::string> drawnEdges; //set to avoid duplication
            std::string edgeKey = from < to ? from + "_" + to : to + "_" + from; //ensuring en howa howa same edge regardless of node starting position in the string
            if (drawnEdges.count(edgeKey)) continue;
            drawnEdges.insert(edgeKey);

            GraphEdge* edge = new GraphEdge(nodeMap[qFrom], nodeMap[qTo], weight);
            scene->addItem(edge); //adding the edge
        }
    }

    //the code that highlights paths and etc
    int cost = 0;
    for (size_t i = 0; i + 1 < highlightedPath.size(); ++i)
    { //el condition da so we dont fall into errors
        QString from = QString::fromStdString(highlightedPath[i]);
        QString to = QString::fromStdString(highlightedPath[i + 1]);

        for (QGraphicsItem* item : scene->items()) {
            GraphEdge* edge = dynamic_cast<GraphEdge*>(item);
            if (edge) {
                QString s = edge->sourceNode()->getLabel();
                QString d = edge->destNode()->getLabel();
                if ((s == from && d == to) || (s == to && d == from)) {
                    edge->setHighlight(true);

                }
            }
        }


		if (nodeMap.contains(from)) nodeMap[from]->setBrush(Qt::green); //colouring the nodes of the shortest path
        if (nodeMap.contains(to))   nodeMap[to]->setBrush(Qt::green);
    }
}
