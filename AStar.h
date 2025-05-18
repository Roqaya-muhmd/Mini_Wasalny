#pragma once
#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <string>
#include <utility>
#include "CityGraph.h"

using namespace std;
class AStar {
    unordered_map<string, int> heuristic;
    unordered_map<string, vector<pair<string, int>>> adjacencyList;
    int cost = 0;
    vector<string>finalPath;
public:
    vector<string> astar(const string& start, const string& goal);
    void astar_displays(CityGraph& graph);
    vector<string> getPath();

};
