#include <iostream>
#include <map>
#include <queue>
#include <string>
#include "CityGraph.h"
#include "BFS.h"

using namespace std;

void BFS::bfs(string src, string dst, CityGraph& graph, queue<string>& final) {
    bfs_map.clear();
    bfs_queue = queue<string>();
    cost = 0;

    unordered_map<string, string> parent;

    bfs_map[src] = true;
    bfs_queue.push(src);

    unordered_map<string, vector<pair<string, int>>> adj = graph.getAdjacencyList();
    unordered_map<pair<string, string>, int, pair_hash> edgeList= graph.getEdgeList();

    while (!bfs_queue.empty()) {
        string cur = bfs_queue.front();
        bfs_queue.pop();

        if (cur == dst) break;

        for (auto& edge : adj[cur]) {
            string neighbor = edge.first;
            if (!bfs_map[neighbor]) {
                bfs_map[neighbor] = true;
                parent[neighbor] = cur;
                bfs_queue.push(neighbor);
            }
        }
    }

    if (bfs_map[dst]) {
        vector<string> path;
        string cur = dst;
        while (cur != src) {
            path.push_back(cur);
            cur = parent[cur];
        }
        path.push_back(src);
        reverse(path.begin(), path.end());
        for (int i = 0; i < path.size();i++) {
            final.push(path[i]);
            if (i != path.size() - 1) {
                cost += edgeList[{path[i], path[i + 1]}];
            }
        }

    }
}

void BFS::bfs_displays( CityGraph& graph) {
    string src, dst;
    cout << "Enter the starting city: ";
    cin >> src;
    cout << "Enter the destination city: ";
    cin >> dst;
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
    bfs(src, dst, graph, path);

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
                cout << city << endl;;
        }
        cout << "With Distance = " << cost << endl;
    }
}

string BFS::bfs_displays( CityGraph& graph,string src,string dst) {
    if (!graph.cityFound(src)) {
        return "Error : City '"+ src + "' doesn't exist in the graph!\n";

    }
    if (!graph.cityFound(dst)) {
        return  "Error : City '" + dst + "' doesn't exist in the graph!\n";

    }
    if (src == dst) {
        return  "Error : Your start city is already your distenation city!\n";

    }
    queue<string> path;
    bfs(src, dst, graph, path);

    if (path.empty()) {
        return  "Sorry, there is no available path!" ;
    }
    else {
        while (!path.empty()) {
            string city = path.front();
            finalPath.push_back(city); // finalPath is for gui
            path.pop();
            if (!path.empty())
                cout << city << " -> ";
            else
                cout << city << endl;;
        }

        return  "With Distance = " + cost ;
    }
}
vector<string> BFS::getPath() {
    return finalPath;
}
