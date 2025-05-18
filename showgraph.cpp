#include "showgraph.h"
#include "ui_showgraph.h"

ShowGraph::ShowGraph(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowGraph)
{
    ui->setupUi(this);
    for(int i=0;i<5;i++){
        ui->listWidget->addItem(QString::number(i)+"item here");

    }
    ui->listWidget->setStyleSheet(
        "QListWidget {"
        "   background: #F0F0F0;"
        "   border: 1px solid #C0C0C0;"
        "   font-size: 14px;"
        "}"
        "QListWidget::item {"
        "   height: 25px;"
        "   border-bottom: 1px solid #E0E0E0;"
        "}"
        "QListWidget::item:selected {"
        "   background: #3DAEE9;"
        "   color: white;"
        "}"
        );
}

ShowGraph::~ShowGraph()
{
    delete ui;
}
