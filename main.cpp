#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Apply to entire application
    qApp->setStyleSheet(R"(
    style.css
)");

    // OR apply to specific window
    MainWindow w;
    w.setStyleSheet(R"(
    style.css
)");
    w.show();
    w.show();

    return a.exec();
}
