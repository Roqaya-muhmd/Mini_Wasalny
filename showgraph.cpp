#include "showgraph.h"
#include "ui_showgraph.h"

ShowGraph::ShowGraph(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowGraph)
{
    ui->setupUi(this);
}

ShowGraph::~ShowGraph()
{
    delete ui;
}
