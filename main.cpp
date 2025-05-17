#include "addgraph.h"
#include "mainwindow.h"

#include <QApplication>
#include <QFileInfo>
#include "File.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    File file;
    unordered_map<string, CityGraph>&Collec=addgraph::getCollec();

    qDebug()<<file.loadAllGraphs("savedData.txt",Collec);
    // Verify file exists
    QFileInfo checkFile("savedData.txt");
    if (!checkFile.exists()) {
        qDebug() << "File not found at:" << checkFile.absoluteFilePath();
    }
    // OR apply to specific window
    MainWindow w;
    w.show();


    // 4. Setup auto-saving on exit
    QObject::connect(&a, &QApplication::aboutToQuit, [&]() {
        try {
            qDebug() << "Saving graphs before exit...";
            file.saveAllGraphs("savedData.txt",addgraph::getCollec());
            qDebug() << "Successfully saved" << addgraph::getCollec().size() << "graphs";
        } catch (const std::exception& e) {
            qCritical() << "Failed to save graphs:" << e.what();
            // Note: Can't show GUI message here as app is quitting
        }
    });
     return a.exec();
}
