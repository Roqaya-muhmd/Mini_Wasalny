#ifndef ADDGRAPH_H
#define ADDGRAPH_H

#include "CityGraph.h"
#include <QWidget>
#include "Qlabel.h"
namespace Ui {
class addgraph;
}

class addgraph : public QWidget
{
    Q_OBJECT

public:
    explicit addgraph(QWidget *parent = nullptr);
    static CityGraph& getGraph() { return graph; }
    ~addgraph();
    static void waringlab(QLabel *l,QString m);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addgraph *ui;
    static CityGraph graph;
    bool isGraphInitialized = false;
    unordered_map<string,CityGraph> graphCollec;
};

#endif // ADDGRAPH_H
