#pragma once
#ifndef BIDIRECTIONAL_BFS_H
#define BIDIRECTIONAL_BFS_H

#include <unordered_map>
#include <vector>
#include <string>
#include <queue>
#include "CityGraph.h"

using namespace std;

class BidirectionalBFS {
public:
    BidirectionalBFS() : cost(0) {}

    void bidir_bfs(string src, string dst, CityGraph& graph,
        queue<string> & final);

    void bidir_bfs_display(CityGraph& graph);
    vector<string> getPath();

private:
    unordered_map<string, bool> visited_from_src;
    unordered_map<string, bool> visited_from_dst;

    unordered_map<string, string> parent_from_src;
    unordered_map<string, string> parent_from_dst;

    queue<string> queue_src;
    queue<string> queue_dst;
    vector<string>finalPath;

    int cost;

    void build_path(string src, string meeting_node, string dst,
        queue<string> & final,
        CityGraph& graph);
};

#endif
