#ifndef ADDGRAPH_H
#define ADDGRAPH_H

#include <QWidget>

namespace Ui {
class addgraph;
}

class addgraph : public QWidget
{
    Q_OBJECT

public:
    explicit addgraph(QWidget *parent = nullptr);
    ~addgraph();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addgraph *ui;
};

#endif // ADDGRAPH_H
