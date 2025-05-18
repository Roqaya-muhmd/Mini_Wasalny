#include "graphedge.h"
#include "graphnode.h"

#include <QPainter>
#include <QFont>
#include <QGraphicsScene>

GraphEdge::GraphEdge(GraphNode* sourceNode, GraphNode* destNode, int weight)
    : source(sourceNode), dest(destNode), weight(weight)
{
    setZValue(-1); //34an el edge yeb2a wara el node mesh odamha

    normalPen = QPen(Qt::black, 2);
    highlightPen = QPen(Qt::green, 5); //el colour bta3 el shortest path
    setPen(normalPen);

    source->addEdge(this);
    dest->addEdge(this); //both nodes get assigned the same edge

    
    weightLabel = new QGraphicsTextItem(QString::number(weight), this);
    QFont font = weightLabel->font();
    font.setPointSize(18); 
    font.setBold(true);
    weightLabel->setFont(font);
    weightLabel->setDefaultTextColor(Qt::blue);

    updatePosition(); 
}

void GraphEdge::updatePosition() {
    if (!source || !dest) return;

    QPointF sourceCenter = source->sceneBoundingRect().center(); //first node center
    QPointF destCenter = dest->sceneBoundingRect().center(); //etc etc
    setLine(QLineF(sourceCenter, destCenter)); //drawing el edge men el center lel center of both nodes

    
    QPointF mid = (sourceCenter + destCenter) / 2; //bageeb el midpoint mabeen el centers 34an el weight
    weightLabel->setPos(mid.x() - weightLabel->boundingRect().width() / 2,
        mid.y() - weightLabel->boundingRect().height() / 2);
}

GraphNode* GraphEdge::sourceNode() const {
    return source;
}

GraphNode* GraphEdge::destNode() const {
    return dest;
}

void GraphEdge::setHighlight(bool on) { //i change el pen w el text colour here
    setPen(on ? highlightPen : normalPen);
    weightLabel->setDefaultTextColor(on ? Qt::blue : Qt::blue);
}
