#ifndef ADDGRAPH_H
#define ADDGRAPH_H

#include "CityGraph.h"
#include <QWidget>
#include "File.h"
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
    static unordered_map<string, CityGraph>& getCollec() {return graphCollec;}
    ~addgraph();
    static void waringlab(QLabel *l,QString m);


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addgraph *ui;

    static CityGraph graph;
    static string graphName;
    bool isGraphInitialized = false;
    unordered_map<string, unordered_map<string, vector<pair<string, int>>>> allGraphs;
    static unordered_map<string, CityGraph>graphCollec;
    unordered_map < string, unordered_map<pair<string, string>, int, pair_hash>> edgeLists;
};

#endif // ADDGRAPH_H
