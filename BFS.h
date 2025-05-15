#pragma once
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include "CityGraph.h"

using namespace std;
class BFS {
	queue<string>bfs_queue;
	map<string, bool>bfs_map;
	int cost = 0;
public:
	void bfs(string src, string dst, CityGraph& graph, queue<string>& final);
	void bfs_displays( CityGraph& graph);
};