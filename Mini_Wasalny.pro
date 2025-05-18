QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AStar.cpp \
    BFS.cpp \
    BidirectionalBFS.cpp \
    CityGraph.cpp \
    DFS.cpp \
    Dijkstra.cpp \
    File.cpp \
    addcity.cpp \
    addedge.cpp \
    addgraph.cpp \
    deletecity.cpp \
    deleteedge.cpp \
    graphedge.cpp \
    graphloader.cpp \
    graphnode.cpp \
    main.cpp \
    mainwindow.cpp \
    showgraph.cpp

HEADERS += \
    AStar.h \
    BFS.h \
    BidirectionalBFS.h \
    CityGraph.h \
    DFS.h \
    Dijkstra.h \
    File.h \
    addcity.h \
    addedge.h \
    addgraph.h \
    deletecity.h \
    deleteedge.h \
    graphedge.h \
    graphloader.h \
    graphnode.h \
    mainwindow.h \
    showgraph.h

FORMS += \
    addcity.ui \
    addedge.ui \
    addgraph.ui \
    deletecity.ui \
    deleteedge.ui \
    mainwindow.ui \
    showgraph.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../../../Downloads/resource.qrc \
    ../../.designer/backup/resource.qrc \
    resource.qrc \
    resource.qrc

DISTFILES +=
