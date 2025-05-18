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
    void showEvent(QShowEvent *event) override;
    ~AddEdge();
private slots:
    void on_addEdgeConfirmButton_clicked();


private:
    Ui::AddEdge *ui;
};

#endif // ADDEDGE_H
