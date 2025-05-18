#include "graphnode.h"
#include "graphedge.h"
#include <QPainter>

GraphNode::GraphNode(QString lbl, QPointF pos)
    : QGraphicsEllipseItem(-20, -20, 70, 70), label(lbl) {
    setPos(pos);
    setBrush(Qt::cyan); //node colour
    setFlags(ItemIsMovable | ItemSendsGeometryChanges); //34an ne3raf n drag
    setZValue(1); //34an nothing gets on top of it
}

QString GraphNode::getLabel() const {
    return label;
}

void GraphNode::addEdge(GraphEdge* edge) {
	edges << edge; //adding el edge to the list of edges similar to push_back
}

QVariant GraphNode::itemChange(GraphicsItemChange change, const QVariant& value) {
    static bool dragging = false;

    if (change == ItemPositionChange && scene() && !dragging) {
        dragging = true;
        QPointF delta = value.toPointF() - pos(); // the difference in distance between the og position and the position we moved it to
        QSet<GraphNode*> visited; //34an n avoid duplication we used a set
        visited.insert(this);

        std::function<void(GraphNode*, QPointF, int)> propagate = [&](GraphNode* node, QPointF delta, int depth) { //lambda expression ab2a ashra7o lel doctor
            if (depth > 3) return;  

            for (GraphEdge* edge : node->edges) {
                GraphNode* other = (edge->sourceNode() == node) ? edge->destNode() : edge->sourceNode(); //to know if the node we are on is considered the dest or src node so we can move the other
                if (other && !visited.contains(other)) {
                    visited.insert(other);
					other->moveBy(delta.x() * 0.5, delta.y() * 0.5); //moving the other node
                    propagate(other, delta * 0.5, depth + 1); //moving others' other nodes through recursion
                }
            }
            };

        propagate(this, delta, 0); //ben7arak the first other node through here
        dragging = false; //i fell in an infinite loop bc of this dont forget it kids. (moustafa manga)
    }

    for (GraphEdge* edge : edges)
        edge->updatePosition(); //updating the edges positions as we move the node

    return QGraphicsEllipseItem::itemChange(change, value); //we must return something to the scene 
}


void GraphNode::paint(QPainter* p, const QStyleOptionGraphicsItem* opt, QWidget* w) { //34an nersem el nodes
    QGraphicsEllipseItem::paint(p, opt, w);
    p->drawText(boundingRect(), Qt::AlignCenter, label);
}
