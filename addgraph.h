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

    static CityGraph* getGraph() { return graph; }
    static unordered_map<string, CityGraph>& getCollec() {return graphCollec;}
    static string getGraphName(){return graphName;}
    static bool getisGraphInitialized(){return isGraphInitialized; }
    ~addgraph();
    static void waringlab(QLabel *l,QString m);


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void showEvent(QShowEvent *event);


private:
    Ui::addgraph *ui;

    static CityGraph* graph;
    static string graphName;
    static bool isGraphInitialized ;
    static unordered_map<string, CityGraph>graphCollec;

};

#endif // ADDGRAPH_H
