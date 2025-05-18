#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <QGraphicsEllipseItem>
#include <QGraphicsSceneMouseEvent>
#include <QString>
#include <QList>

class GraphEdge;

class GraphNode : public QGraphicsEllipseItem {
public:
    GraphNode(QString label, QPointF pos);
    QString getLabel() const;
    void addEdge(GraphEdge* edge);
    QVariant itemChange(GraphicsItemChange change, const QVariant& value) override;

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*) override;

private:
    QString label;
    QList<GraphEdge*> edges; //list of edges assigned to the node
};

#endif
