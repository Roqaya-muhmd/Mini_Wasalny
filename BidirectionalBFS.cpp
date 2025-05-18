#include <iostream>
#include <map>
#include <queue>
#include <string>
#include "CityGraph.h"
#include "BidirectionalBFS.h"

void BidirectionalBFS::bidir_bfs(string src, string dst, CityGraph& graph,
    queue<string> & final) {
    visited_from_dst.clear();
    visited_from_dst.clear();
    parent_from_dst.clear();
    parent_from_src.clear();
    queue_src = queue<string>();
    queue_dst = queue<string>();
    auto adj = graph.getAdjacencyList();

    queue_src.push(src);
    visited_from_src[src] = true;

    queue_dst.push(dst);
    visited_from_dst[dst] = true;

    string meeting_node = "";

    while (!queue_dst.empty() and !queue_src.empty()) {
        int sz = (int)queue_src.size();
        for (int i = 0; i < sz;i++) {
            string node = queue_src.front(); queue_src.pop();
            for (auto& edge : adj[node]) {
                string neighbor = edge.first;
                if (!visited_from_src[neighbor]) {
                    visited_from_src[neighbor] = true;
                    parent_from_src[neighbor] = node;
                    queue_src.push(neighbor);
                    if (visited_from_dst[neighbor]) {
                        meeting_node = neighbor;
                        goto path_found;
                    }
                }
            }
        }
        int szz = (int)queue_dst.size();
        for (int i = 0;i < szz;i++) {
            string node = queue_dst.front(); queue_dst.pop();
            for (auto& edge : adj[node]) {
                string neighbor = edge.first;
                if (!visited_from_dst[neighbor]) {
                    visited_from_dst[neighbor] = true;
                    parent_from_dst[neighbor] = node;
                    queue_dst.push(neighbor);
                    if (visited_from_src[neighbor]) {
                        meeting_node = neighbor;
                        goto path_found;
                    }
                }
            }
        }
    }
path_found:
    if (meeting_node == "") {
        return;
    }
    build_path(src, meeting_node, dst, final, graph);
}
void BidirectionalBFS::build_path(string src, string meeting_node, string dst,
    queue<string> & final,
    CityGraph& graph) {
    vector<string>from_src;
    auto edgeList = graph.getEdgeList();
    string cur = meeting_node;
    while (cur != src) {
        from_src.push_back(cur);
        cur = parent_from_src[cur];
    }
    from_src.push_back(src);
    reverse(from_src.begin(), from_src.end());
    cur = meeting_node;
    vector<string>from_dst;
    int cnt = 0;
    while (cur != dst) {
        if (cnt != 0) {
            from_dst.push_back(cur);
        }
        cur = parent_from_dst[cur];
        cnt++;
    }
    from_dst.push_back(dst);
    vector<string> full_path = from_src;
    full_path.insert(full_path.end(), from_dst.begin(), from_dst.end());
    for (const auto& city : full_path) {
        final.push(city);
    }
    cost = 0;
    for (size_t i = 0; i + 1 < full_path.size(); i++) {
        cost += edgeList[{full_path[i], full_path[i + 1]}];
    }
}
void BidirectionalBFS::bidir_bfs_display(CityGraph& graph,string src,string dst) {
    if (!graph.cityFound(src)) {
        cout << "Error : City '" << src << "' doesn't exist in the graph!\n";
        return;
    }
    if (!graph.cityFound(dst)) {
        cout << "Error : City '" << dst << "' doesn't exist in the graph!\n";
        return;
    }
    if (src == dst) {
        cout << "Error : Your start city is already your distenation city!\n";
        return;
    }

    queue<string> path;
    bidir_bfs(src, dst,graph , path);

    if (path.empty()) {
        cout << "Sorry, there is no available path!" << endl;
    }
    else {
        cout << "The path is :\n";
        while (!path.empty()) {
            string city = path.front();
            finalPath.push_back(city); // finalPath is for gui
            path.pop();
            if (!path.empty())
                cout << city << " -> ";
            else
                cout << city << endl;
        }
        cout << "With Distance = " << cost << endl;
    }
}
vector<string>BidirectionalBFS :: getPath() {
    return finalPath;
}
