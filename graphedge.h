#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H

#include <QGraphicsLineItem>
#include <QGraphicsTextItem>
#include <QPen>
#include <QString>

class GraphNode;

class GraphEdge : public QGraphicsLineItem {
public:
    GraphEdge(GraphNode* sourceNode, GraphNode* destNode, int weight = 1);

    void updatePosition();
    GraphNode* sourceNode() const;
    GraphNode* destNode() const;
    void setHighlight(bool on); 

private:
    GraphNode* source;
    GraphNode* dest;
    int weight;
    QGraphicsTextItem* weightLabel;
    QPen normalPen;
    QPen highlightPen;
};

#endif 