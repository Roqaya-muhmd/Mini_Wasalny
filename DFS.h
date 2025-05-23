#pragma once
#include<iostream>
#include<string>
#include<vector>
#include <unordered_map>
#include <utility>
#include <iterator>
#include<queue>
#include "DFS.h"
#include <map>
#include "CityGraph.h"
class DFS {
    int cost = 0;
    vector<string>finalPath;
public:

    void dfs(unordered_map<string, vector<pair<string, int>>> adj, string str, string dest, map<string, bool>vis, vector<string>current, vector<string>& final);
    void dfs_displays(CityGraph& Graph);
    void dfs_displays2(CityGraph &Graph,string str,string dest);

    vector<string> getPath();

};
