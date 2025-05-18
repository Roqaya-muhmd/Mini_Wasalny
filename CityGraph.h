#pragma once
#ifndef CITYCLASS_H
#define CITYCLASS_H
#include <iostream>

#include <unordered_map>
#include <vector>
#include <string>
#include <utility>
#include <functional>
using namespace std;

struct pair_hash {
    template <typename T1, typename T2>
    size_t operator()(const std::pair<T1, T2>& p) const {
        return std::hash<T1>()(p.first) ^ (std::hash<T2>()(p.second) << 1);
    }
};

class CityGraph
{
    unordered_map<string, vector<pair<string, int>>> adjacencyList;
    unordered_map<pair<string, string>, int, pair_hash> edgeList;
    int CitiesNum = 0;

public:
    CityGraph(int &n, int &m);
    CityGraph();
    CityGraph(unordered_map<string, vector<pair<string, int>>> adjacencyList, unordered_map<pair<string, string>, int, pair_hash> edgeLst);
    void setAdjacencyList(unordered_map<string, vector<pair<string, int>>> &adj);
    void setedgeList(unordered_map<pair<string, string>, int, pair_hash>&                                     edgeL);
    void addEdge(string c1, string c2);
    void addEdge();
    string addEdge(string c1, string c2,int);
    void addCity(int number = 1);
    string addCity(string &c1);
    void deleteEdge(string c1, string c2);
    void deleteCity(string& c1);
    void printGraph();
    bool cityFound(string n);
    bool edgeFound(string& c1, string& c2);
    bool deleteEdge2(string c1, string c2);
    bool deleteCity2(string& c1);
    int numberOfCities();
    unordered_map<string, vector<pair<string, int>>> getAdjacencyList();
    unordered_map<pair<string, string>, int, pair_hash> getEdgeList();
};

#endif  CITYCLASS_H
