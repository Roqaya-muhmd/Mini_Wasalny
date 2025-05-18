#pragma once
#include <fstream>  
#include <iostream>  
#include <sstream>   
#include <string>
#include <utility>
#include <unordered_map>
#include <QString>
#include "CityGraph.h"


class File {

public:
    QString loadAllGraphs(const QString& filename, std::unordered_map<std::string, CityGraph>& allGraphs);
    void saveGraphToFile(const string& filename, const string& graphName, const unordered_map<string, vector<pair<string, int>>>& adjList);
	string chooseGraph(const unordered_map<string, unordered_map<string, vector<pair<string, int>>>>& allGraphs);
	static void trim(string& s);
	void saveAllGraphsExcept(const string& graphToReplace, unordered_map<string, unordered_map<string, vector<pair<string, int>>>>& allGraphs, const string& filename);
	void appendEditedGraphToFile(const string& name, const unordered_map<string, vector<pair<string, int>>>& adjList, const string& filename);
	void exportToDOT(const string& filename, const string& graphName, const unordered_map<string, vector<pair<string, int>>>& adjacencyList);

   // string saveAllGraphs(const string& filename,unordered_map<string, CityGraph>& allGraphs);
    QString getAppDataPath() ;
    bool saveToFile(const QString& filePath,
                     std::unordered_map<std::string, CityGraph>& allGraphs) ;
    //string loadAllGraphs(const string& filename,unordered_map<string, CityGraph>& allGraphs);

    QString saveAllGraphs(const QString& filename, std::unordered_map<std::string, CityGraph>& allGraphs);
};
