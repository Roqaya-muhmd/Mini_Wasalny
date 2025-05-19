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
    bool check_in();

private:
    Ui::ShowGraph *ui;
   static std:: string ans;
    static std::string ans2;
};

#endif // SHOWGRAPH_H
