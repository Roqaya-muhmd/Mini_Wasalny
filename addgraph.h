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
<<<<<<< HEAD
    static CityGraph* getGraph() { return graph; }
    static unordered_map<string, CityGraph>& getCollec() {return graphCollec;}
=======
    static CityGraph& getGraph() { return graph; }
    static bool getisGraphInitialized(){return isGraphInitialized; }
>>>>>>> 5985a37409e3c36de279f07ffa22368660b66abd
    ~addgraph();
    static void waringlab(QLabel *l,QString m);


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::addgraph *ui;
<<<<<<< HEAD

    static CityGraph* graph;
    static string graphName;
    bool isGraphInitialized = false;
    unordered_map<string, unordered_map<string, vector<pair<string, int>>>> allGraphs;
    static unordered_map<string, CityGraph>graphCollec;
    unordered_map < string, unordered_map<pair<string, string>, int, pair_hash>> edgeLists;
=======
    static CityGraph graph;
    static bool isGraphInitialized ;
    unordered_map<string,CityGraph> graphCollec;
>>>>>>> 5985a37409e3c36de279f07ffa22368660b66abd
};

#endif // ADDGRAPH_H
