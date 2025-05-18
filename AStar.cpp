#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <string>
#include <utility>
#include "CityGraph.h"
#include "AStar.h"

using namespace std;
vector<string> AStar::astar(const string& start, const string& goal) {
    unordered_map<string, int> g;       // g(n) > cost from start to n
    unordered_map<string, int> f;       // f(n) = g(n) + h(n)
    unordered_map<string, string> parent;
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;

    for (unordered_map<string, vector<pair<string, int>>>::iterator it = adjacencyList.begin(); it != adjacencyList.end(); ++it) {
        g[it->first] = INT_MAX;
        f[it->first] = INT_MAX;
    }

    g[start] = 0;
    f[start] = heuristic[start];
    pq.push({ f[start], start });

    while (!pq.empty()) {
        pair<int, string> current_pair = pq.top();
        pq.pop();
        int f_current = current_pair.first;
        string current = current_pair.second;

        if (current == goal) break;

        // check neighbors
        vector<pair<string, int>> neighbors = adjacencyList[current];
        for (int i = 0; i < neighbors.size(); ++i) {
            string neighbor = neighbors[i].first;
            int weight = neighbors[i].second;
            int tentative_g = g[current] + weight;

            if (tentative_g < g[neighbor]) {
                g[neighbor] = tentative_g;
                f[neighbor] = tentative_g + heuristic[neighbor];
                parent[neighbor] = current;
                pq.push({ f[neighbor], neighbor });
            }
        }
    }

    // reconstruct path
    vector<string> path;
    if (parent.find(goal) == parent.end() && start != goal)
        return {};

    string at = goal;
    while (!at.empty()) {
        path.push_back(at);
        at = parent[at];
    }
    reverse(path.begin(), path.end());

    return path;
}
void AStar::astar_displays(CityGraph& graph,string start, string goal) {
    cost = 0;
    adjacencyList = graph.getAdjacencyList();
    unordered_map<pair<string, string>, int, pair_hash> edgeList = graph.getEdgeList();

    if (!graph.cityFound(start)) {
        cout << "Error : City '" << start << "' doesn't exist in the graph!\n";
        return;
    }
    if (!graph.cityFound(goal)) {
        cout << "Error : City '" << goal << "' doesn't exist in the graph!\n";
        return;
    }
    if (start == goal) {
        cout << "Error : Your start city is already your distenation city!\n";
        return;
    }
    for (const auto& pair : adjacencyList) {
        if (pair.first == goal)continue;
        cout << "Please enter the heuristic distenation (straight-line guess) between " << pair.first << " and " << goal << endl;
        int dist; cin >> dist;
        heuristic[pair.first] = dist;
    }
    vector<string> path = astar(start, goal);
    if (path.empty()) {
        cout << "Sorry there's no path!" << endl;
    }
    else {
        cout << "Path :\n";
        for (int i = 0;i < path.size();i++) {
            finalPath.push_back(path[i]); // finalPath is for gui
            if (i != path.size() - 1) {
                cout << path[i] << " -> ";
                cost += edgeList[{path[i], path[i + 1]}];
            }
            else {
                cout << path[i] << endl;
            }
        }
        cout << "With Distance = " << cost << endl;
    }
}
vector<string>AStar::getPath() {
    return finalPath;
}
