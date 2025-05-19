#include <iostream>
using namespace std;
#include <unordered_map>
#include <string>
#include <queue>
#include"Dijkstra.h"
#include <stack>
#include "CityGraph.h"
#include "QDebug"
long long const OO = INT_MAX;





unordered_map<string, string> Dijkstra::getparent() {
    return parent;
}
unordered_map<string, int> Dijkstra::getdist() {
    return dist;
}
unordered_map<string, bool> Dijkstra::getvis() {
    return vis;
}
void Dijkstra::dijkstra(CityGraph& g, string madina) {
    priority_queue<pair<int, string>,
                   vector<pair<int, string>>,
                   greater<pair<int, string>>> pq;

    unordered_map<string, vector<pair<string, int>>>adj = g.getAdjacencyList();
    // Initialize `dist` and `vis` for all cities
    for (const auto m : adj) {
        dist[m.first] = OO;
        vis[m.first] = false;
        parent[m.first] = "city";
    }

    pq.push({ 0,madina });
    dist[madina] = 0;
    while (!pq.empty()) {
        auto cur = pq.top(); //weight - value // key->city  valu->vector of pair
        pq.pop();
        if (vis[cur.second])continue;
        vis[cur.second] = 1;
        for (auto child : adj[cur.second]) {
            int weight = child.second;
            string v = child.first;

            if (!vis[v] && dist[v] > (dist[cur.second] + weight)) {
                dist[v] = dist[cur.second] + weight;
                pq.push({ dist[v],v });
                parent[v] = cur.second;
            }


        }
    }

}
stack<string> Dijkstra::checkPath(unordered_map<string, string>par, string src, string dis) {
    stack<string>out;
    out.push(dis);
    string part = par[dis];

    while (part!=src) {
        if (part == "city") return {};
        out.push(part);
        part = par[part];

    }
    if (src != dis)
        out.push(src);
    return out;

}
void Dijkstra::dijkstra_displays(CityGraph& graph,string from,string to) {
    cost = 0;
    unordered_map<pair<string, string>, int, pair_hash> edgeList = graph.getEdgeList();


    if (!graph.cityFound(from)) {
        cout << "Error : City '" << from << "' doesn't exist in the graph!\n";
        return;
    }
    if (!graph.cityFound(to)) {
        cout << "Error : City '" << to << "' doesn't exist in the graph!\n";
        return;
    }
    if (from == to) {
        cout << "Error : Your start city is already your distenation city!\n";
        return;
    }
    dijkstra(graph, from);
    auto dist = getdist();
    auto parent = getparent();
    auto path = checkPath(parent, from, to);
    if (path.empty()) {
        cout << "No path exists!" << endl;
    }
    else {
        vector<string>final;
        while (!path.empty()) {
            final.push_back(path.top());
            path.pop();
        }
        unordered_map<string, int>mm=getdist();
        cost=mm[to];
        qDebug() << "With Distance = " << cost ;
    }
}
vector<string>Dijkstra::getPath() {
    return finalPath;
}
