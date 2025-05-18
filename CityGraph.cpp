//#include <bits/stdc++.h>
#include<iostream>

#include<string>
#include<vector>
#include <unordered_map>
#include <utility>
// #include <iterator>
// #include<queue>
#include "CityGraph.h"
using namespace std;


<<<<<<< HEAD
// CityGraph::CityGraph(int n, int m)
// {
=======
CityGraph::CityGraph(int &n, int &m)
{
>>>>>>> 5985a37409e3c36de279f07ffa22368660b66abd
    // this->CitiesNum = n;
    // for (int i = 0; i < n; i++)
    // {
    //     string city1;
    //     std::cout << "please enter city number " << i + 1 << " name:\n";
    //     cin >> city1;
    //     adjacencyList[city1] = {}; //in case there is a city not connected to any other.
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     string c1, c2; //city 1 and 2
    //     cout << "please enter city 1 (from) number " << i + 1 << " name:\n";
    //     cin >> c1;
    //     if (!cityFound(c1)) {
    //         cout << "Error: City '" << c1 << "' doesn't exist!.Try again\n";
    //         i--;
    //         continue;
    //     }
    //     cout << "please enter city 2 (to) number " << i + 1 << " name:\n";
    //     cin >> c2;
    //     if (edgeFound(c1, c2)) {
    //         cout << "Error: Edge already exists between " << c1 << " and " << c2 << ".Try again\n";
    //         i--;
    //         continue;
    //     }
    //     if (c1 == c2) {
    //         cout << "Error: Cannot connect a city to itself.Try again\n";
    //         i--;
    //         continue;
    //     }
    //     if (!cityFound(c2)) {
    //         cout << "Error: City '" << c2 << "' doesn't exist!.Try again\n";
    //         i--;
    //         continue;
    //     }

    //     addEdge(c1, c2);
    // }
//}

CityGraph::CityGraph(unordered_map<string, vector<pair<string, int>>> adjacencyList, unordered_map<pair<string, string>, int, pair_hash>edgeL) {
    setAdjacencyList(adjacencyList);
    setedgeList(edgeL);
}

void CityGraph::setAdjacencyList(unordered_map<string, vector<pair<string, int>>>& adjacencyList1) {
    adjacencyList = adjacencyList1;
}
void CityGraph::setedgeList(unordered_map<pair<string, string>, int, pair_hash>& edgeL) {
    edgeList = edgeL;
}
CityGraph::CityGraph(){
    this->CitiesNum =0;

}
string CityGraph::addCity(string &c1)
{
<<<<<<< HEAD

    string message;
=======
    // bool check = false;
    string message;
    // char agree;
>>>>>>> 5985a37409e3c36de279f07ffa22368660b66abd
    if (cityFound(c1)) {
        message= "City already exist! try again";
        return message;
    }
    adjacencyList[c1] = {};

    message="city added";
    return message;
}
string CityGraph::addEdge(string c1, string c2,int weight)
{

    if (weight < 0) {
        return "Error: Weight must be non-negative.Try again\n";

    }
    if (!cityFound(c1)) {
        return "Error: City '"+ c1 + "' doesn't exist!.Try adding it first\n";
    }

    if (edgeFound(c1, c2)) {
        return "Error: Edge already exists between "+ c1+ " and "+ c2 + ".delete the edge first\n";

    }
    if (c1 == c2) {
        return "Error: Cannot connect a city to itself.Try again\n";

    }
    if (!cityFound(c2)) {
        return "Error: City '" + c2 + "' doesn't exist!.Try adding it first\n";

    }

    adjacencyList[c1].push_back({ c2,weight });
    adjacencyList[c2].push_back({ c1,weight }); //this is undirected assuming that el taree2 raye7 gai
    edgeList[{c1, c2}] = weight;
    edgeList[{c2, c1}] = weight;
    return "edge added successfully";

}

void CityGraph::addEdge(string c1, string c2)
{
    bool accepted = false;
    while (!accepted) {
        int weight;
        cout << "please enter weight between them\n";
        cin >> weight;
        if (weight < 0) {
            cout << "Error: Weight must be non-negative.Try again\n";
            continue;
        }


        adjacencyList[c1].push_back({ c2,weight });
        adjacencyList[c2].push_back({ c1,weight }); //this is undirected assuming that el taree2 raye7 gai
        edgeList[{c1, c2}] = weight;
        edgeList[{c2, c1}] = weight;
        accepted = true;
    }
}


void CityGraph::addEdge()
{
    string c1, c2;
    cout << "please insert city 1\n";
    cin >> c1;
    cout << "please insert city 2\n";
    cin >> c2;
    addEdge(c1, c2);
}





void CityGraph::addCity(int number)
{
    for (int i = 0; i < number; i++)
    {
        bool check = false;
        string c1;
        char agree;
        cout << "please insert city " << i + 1 << '\n';
        cin >> c1;
        if (cityFound(c1)) {
            cout << "City already exist! try again" << endl;
            i--;
            continue;
        }
        adjacencyList[c1] = {};

        cout << "do you wish to connect it to other cities now? y/n";
        cin >> agree;

        while (tolower(agree) == 'y') {
            string c2;
            // int weight;
            cout << "please insert city 2\n";
            cin >> c2;

            if (!cityFound(c2)) {
                cout << "Error: City '" << c2 << "' doesn't exist!\n";
                continue;
            }
            if (c1 == c2) {
                cout << "Error : You can't connect a city to itself!\n";
            }
            addEdge(c1, c2);
            cout << "Added connection between " << c1 << " and " << c2 << "\n";
            cout << "Add another connection? (y/n): ";
            cin >> agree;
        }

    }
}

void CityGraph::deleteCity(string& c1) {

    auto itc1 = adjacencyList.find(c1);
    if (itc1 == adjacencyList.end()) {
        cout << "City not found\n";
        return;
    }

    for (auto& edge : itc1->second) {
        string connectedCity = edge.first;
        auto neighborIt = adjacencyList.find(connectedCity);

        if (neighborIt != adjacencyList.end()) {

            auto& neighborConnections = neighborIt->second;

            neighborConnections.erase(remove_if(neighborConnections.begin(), neighborConnections.end(),
                [&c1](const pair<string, int>& p) {
                    return p.first == c1;
                }),
                neighborConnections.end()
            );
        }
        edgeList.erase({ c1, connectedCity });
        edgeList.erase({ connectedCity, c1 });
    }
    adjacencyList.erase(c1);
    CitiesNum--;
    cout << "Successfully removed city\n";
}


void CityGraph::deleteEdge(string c1, string c2) {
    if (edgeFound(c1, c2))
    {
        auto itc1 = adjacencyList.find(c1);
        auto itc2 = adjacencyList.find(c2);

        bool edgeRemoved = false;

        auto& connections1 = itc1->second;
        for (auto it = connections1.begin(); it != connections1.end();) {
            if (it->first == c2) {
                it = connections1.erase(it);
                edgeRemoved = true;
            }
            else {
                ++it;
            }
        }

        // Remove c1 from c2's connections
        auto& connections2 = itc2->second;
        for (auto it = connections2.begin(); it != connections2.end(); ) {
            if (it->first == c1) {
                it = connections2.erase(it);
                edgeRemoved = true;
            }
            else {
                ++it;
            }
        }
        edgeList.erase({ c1, c2 });
        edgeList.erase({ c2, c1 });

        if (edgeRemoved) {
            cout << "Successfully removed edge between " << c1 << " and " << c2 << "\n";
        }

    }
    else {
        cout << "No edge between those cities\n";
    }

}
bool CityGraph::deleteCity2(string& c1) {
    // Check if city exists
    auto itc1 = adjacencyList.find(c1);
    if (itc1 == adjacencyList.end()) {
        return false;  // City not found
    }

    // Remove all edges connected to this city
    for (auto& edge : itc1->second) {
        string connectedCity = edge.first;
        auto neighborIt = adjacencyList.find(connectedCity);

        if (neighborIt != adjacencyList.end()) {
            // Remove reverse edges from connected cities
            auto& neighborConnections = neighborIt->second;
            neighborConnections.erase(
                remove_if(neighborConnections.begin(), neighborConnections.end(),
                          [&c1](const pair<string, int>& p) {
                              return p.first == c1;
                          }
                          ),
                neighborConnections.end()
                );

            // Remove from edgeList
            edgeList.erase({c1, connectedCity});
            edgeList.erase({connectedCity, c1});
        }
    }

    // Remove the city itself
    adjacencyList.erase(c1);
    CitiesNum--;

    return true;
}
bool CityGraph::deleteEdge2(string c1, string c2) {
    if (edgeFound(c1, c2))
    {
        auto itc1 = adjacencyList.find(c1);
        auto itc2 = adjacencyList.find(c2);

        bool edgeRemoved = false;

        auto& connections1 = itc1->second;
        for (auto it = connections1.begin(); it != connections1.end();) {
            if (it->first == c2) {
                it = connections1.erase(it);
                edgeRemoved = true;
            }
            else {
                ++it;
            }
        }

        // Remove c1 from c2's connections
        auto& connections2 = itc2->second;
        for (auto it = connections2.begin(); it != connections2.end(); ) {
            if (it->first == c1) {
                it = connections2.erase(it);
                edgeRemoved = true;
            }
            else {
                ++it;
            }
        }
        edgeList.erase({ c1, c2 });
        edgeList.erase({ c2, c1 });

        if (edgeRemoved) {
            // cout << "Successfully removed edge between " << c1 << " and " << c2 << "\n";
            return true;
        }

    }
    else {
        // cout << "No edge between those cities\n";
        return false;
    }
    return false;
}

void CityGraph::printGraph()
{
    cout << "\tcities \n";
    /*
    for (auto [city, connections] : adjacencyList)
    {
        cout << city << " connections:\n";
        if (connections.empty())
            cout << " no connections for this city\n";
        else
            for (auto [connected_city, weight] : connections)
            {
                cout << "  --> " << connected_city << " with weight " << weight << '\n';
            }
    }*/
    for (const auto& entry : adjacencyList) {
        const auto& city = entry.first;
        const auto& connections = entry.second;

        std::cout << city << " connections:\n";
        if (connections.empty()) {
            std::cout << " no connections for this city\n";
        }
        else {
            for (const auto& connection : connections) {
                const auto& connectedCity = connection.first;
                int weight = connection.second;
                std::cout << "  --> " << connectedCity << " with weight " << weight << '\n';
            }
        }
    }
}
bool CityGraph::cityFound(string c1) {

    if (adjacencyList.find(c1) == adjacencyList.end()) {
        return false;
    }
    return true;
}
bool CityGraph::edgeFound(string& c1, string& c2) {
    for (const auto& edge : adjacencyList[c1]) {
        if (edge.first == c2) return true;
    }
    return false;
}

int CityGraph::numberOfCities()
{
    return CitiesNum;
}

unordered_map<string, vector<pair<string, int>>> CityGraph::getAdjacencyList()
{
    return adjacencyList;
}
unordered_map<pair<string, string>, int, pair_hash> CityGraph::getEdgeList() {
    return edgeList;
}
