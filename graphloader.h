#ifndef GRAPHLOADER_H
#define GRAPHLOADER_H

#include <QGraphicsScene>
#include <QString>
#include <unordered_map>
#include <vector>
#include <string>

class GraphLoader {
public:
    static void loadGraph( //sending el parameters
        const std::string& graphName, //choosing our graph
        const std::unordered_map<std::string, std::unordered_map<std::string, std::vector<std::pair<std::string, int>>>>& allGraphs, //all graphs since i cant access files
        const std::vector<std::string>& highlightedPath, //if there is a path
        QGraphicsScene* scene


    );

};

#endif // GRAPHLOADER_H
