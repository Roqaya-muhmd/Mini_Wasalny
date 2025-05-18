#ifndef SHOWGRAPH_H
#define SHOWGRAPH_H

#include <QWidget>

namespace Ui {
class ShowGraph;
}

class ShowGraph : public QWidget
{
    Q_OBJECT

public:
    explicit ShowGraph(QWidget *parent = nullptr);
    ~ShowGraph();

private slots:
    void on_deleteEdgeConfirmButton_clicked();

private:
    Ui::ShowGraph *ui;
};

#endif // SHOWGRAPH_H
