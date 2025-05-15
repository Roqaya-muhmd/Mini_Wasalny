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
    ~DeleteEdge();

private:
    Ui::DeleteEdge *ui;
};

#endif // DELETEEDGE_H
