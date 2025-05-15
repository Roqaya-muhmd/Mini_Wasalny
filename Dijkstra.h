#pragma once
// Dijkstra.h
#pragma once
#include<iostream>
#include <stack>
#include <vector>
#include <utility>
#include <stack>
#include "CityGraph.h"
#include <unordered_map>
#include<string>
using namespace std;
class Dijkstra {
	unordered_map<string, int> dist;
	unordered_map<string, string> parent;
	unordered_map<string, bool>vis;
	int cost = 0;

public:

	void dijkstra(CityGraph& g, string madina);
	void dijkstra_displays(CityGraph& graph);
	stack<string> checkPath(unordered_map<string, string>path, string src, string dest);
	unordered_map<string, string> getparent();
	unordered_map<string, int> getdist();
	unordered_map<string, bool> getvis();

};

