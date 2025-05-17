#ifndef DELETEEDGE_H
#define DELETEEDGE_H

#include <QWidget>

namespace Ui {
class DeleteEdge;
}

class DeleteEdge : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteEdge(QWidget *parent = nullptr);
    void showEvent(QShowEvent *event) override;
    ~DeleteEdge();

private slots:
    void on_deleteEdgeConfirmButton_clicked();

private:
    Ui::DeleteEdge *ui;
};

#endif // DELETEEDGE_H
