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
using namespace std;
void DFS::dfs(unordered_map<string, vector<pair<string, int>>> adj, string str, string dest, map<string, bool>vis, vector<string>current, vector<string>& final) {
    vis[str] = true;
    current.push_back(str);

    // if i reached the destination city and the current path is shorter then the shortest path yet update it
    if (str == dest) {
        if (current.size() < final.size() || final.empty())
            final = current;
    }

    else {
        for (auto node : adj[str]) {
            if (!vis[node.first])
                dfs(adj, node.first, dest, vis, current, final);
        }
    }

    // to keep going
    current.pop_back();
    vis[str] = false;

}
void DFS::dfs_displays(CityGraph& Graph) {
    cost = 0;
    string str, dest;
    cout << "Enter the starting city: ";
    cin >> str;
    cout << "Enter the destination city: ";
    cin >> dest;
    if (!Graph.cityFound(str)) {
        cout << "Error : City '" << str << "' doesn't exist in the graph!\n";
        return;
    }
    if (!Graph.cityFound(dest)) {
        cout << "Error : City '" << dest << "' doesn't exist in the graph!\n";
        return;
    }
    if (str == dest) {
        cout << "Error : Your start city is already your distenation city!\n";
        return;
    }
    unordered_map<string, vector<pair<string, int>>> adj = Graph.getAdjacencyList();
    unordered_map<pair<string, string>, int, pair_hash> edgeList = Graph.getEdgeList();
    map<string, bool>vis;
    vector<string>current, final;
    dfs(adj, str, dest, vis, current, final);
    if (final.empty()) {
        cout << "Sorry, there is no available path!";
    }
    else {
        cout << "The path is:\n";
        for (int i = 0; i < final.size(); i++) {
            finalPath.push_back(final[i]); // finalPath is for gui
            i != final.size() - 1 ? cout << final[i] << " -> " : cout << final[i]<<endl;
            if (i != final.size() - 1) {
                cost += edgeList[{final[i], final[i + 1]}];
            }
        }
        cout << "With Distance = " << cost << endl;
    }
}
vector<string> DFS::getPath() {
    return finalPath;
}
