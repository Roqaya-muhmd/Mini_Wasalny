#include "addgraph.h"
#include "mainwindow.h"

#include <QApplication>
#include <QFileInfo>
#include "File.h"
#include <QDir>
#include <QIcon>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    File file;
    unordered_map<string, CityGraph>& Collec=addgraph::getCollec();
    QDir dir(QCoreApplication::applicationDirPath());
    dir.cdUp();  // Go up from build-debug to MyQtProject
    dir.cdUp();
    dir.cdUp();
    QString filePath = dir.filePath("savedData.txt");

    qDebug()<<file.loadAllGraphs(filePath,Collec);
    // Verify file exists
    QFileInfo checkFile("savedData.txt");
    if (!checkFile.exists()) {
        qDebug() << "File not found at:" << checkFile.absoluteFilePath();
    }
    // OR apply to specific window
    MainWindow w;
    w.setWindowTitle("Mini_Wasalni");

    w.show();


    // 4. Setup auto-saving on exit
    QObject::connect(&a, &QApplication::aboutToQuit, [&]() {
        try {
            qDebug() << "Saving graphs before exit...";
            file.saveAllGraphs(filePath,Collec);
            qDebug() << "Successfully saved" << addgraph::getCollec().size() << "graphs";
        } catch (const std::exception& e) {
            qCritical() << "Failed to save graphs:" << e.what();
            // Note: Can't show GUI message here as app is quitting
        }
    });
     return a.exec();
}
