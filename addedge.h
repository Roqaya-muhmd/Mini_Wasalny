#ifndef ADDEDGE_H
#define ADDEDGE_H

#include <QWidget>

namespace Ui {
class AddEdge;
}

class AddEdge : public QWidget
{
    Q_OBJECT

public:
    explicit AddEdge(QWidget *parent = nullptr);
    ~AddEdge();
private slots:
    void on_addEdgeConfirmButton_clicked(bool checked);


private:
    Ui::AddEdge *ui;
};

#endif // ADDEDGE_H
