#include "mainwindow.h"
#include "addcity.h"
#include "addedge.h"
#include "deletecity.h"
#include "deleteedge.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();

    // AddCity addcity;
    // addcity.show();

    // AddEdge addedge;
    // addedge.show();


    // DeleteCity deletecity;
    // deletecity.show();


    DeleteEdge deleteedge;
    deleteedge.show();

    return a.exec();
}
