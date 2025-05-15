#pragma once
#include <fstream>  
#include <iostream>  
#include <sstream>   
#include <string>
#include <utility>
#include <unordered_map>
#include "CityGraph.h"


class File {

public:
	void loadAllGraphs(const string& filename, unordered_map<string, unordered_map<string, vector<pair<string, int>>>>& allGraphs, unordered_map<string, unordered_map<pair<string, string>, int, pair_hash>>& edgeLists);
	void saveGraphToFile(const string& filename, const string& graphName, const unordered_map<string, vector<pair<string, int>>>& adjList);
	string chooseGraph(const unordered_map<string, unordered_map<string, vector<pair<string, int>>>>& allGraphs);
	static void trim(string& s);
	void saveAllGraphsExcept(const string& graphToReplace, unordered_map<string, unordered_map<string, vector<pair<string, int>>>>& allGraphs, const string& filename);
	void appendEditedGraphToFile(const string& name, const unordered_map<string, vector<pair<string, int>>>& adjList, const string& filename);
	void exportToDOT(const string& filename, const string& graphName, const unordered_map<string, vector<pair<string, int>>>& adjacencyList);

};
