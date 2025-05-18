#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cctype>
#include "File.h"
#include "CityGraph.h"
string File::loadAllGraphs(const string& filename,unordered_map<string, CityGraph>& allGraphs)
{
    ifstream file(filename);
    if (!file.is_open()) {
        return "Error opening the file.\n";

    }

    string line, currentGraph;
    unordered_map<string, vector<pair<string, int>>> tmpGraph;
    unordered_map<pair<string, string>, int, pair_hash> tmpEdgeList;

    bool cities = false, edges = false;

    while (getline(file, line)) {
        if (line.rfind("# Graph:", 0) == 0) {
            // Save previous graph if exists
            if (!currentGraph.empty()) {
                allGraphs[currentGraph].setAdjacencyList(tmpGraph);
                allGraphs[currentGraph].setedgeList(tmpEdgeList);
                tmpGraph.clear();
                tmpEdgeList.clear();

            }
            currentGraph = line.substr(8);
            trim(currentGraph);

        }
        else if (line == "# Cities") {
            cities = true;
            edges = false;
        }
        else if (line == "# Edges") {
            edges = true;
            cities = false;
        }
        else if (cities) {
            trim(line);
            if (!line.empty() && isalpha(line[0])) {
                tmpGraph[line]; // Initialize empty adjacency list for this city
            }
        }
        else if (edges) {
            stringstream ss(line);
            string from, to;
            int dist;

            if (ss >> from >> to >> dist) {
                // Add to adjacency list (both directions)
                tmpGraph[from].push_back({ to, dist });
                tmpGraph[to].push_back({ from, dist });

                // Add to edge list (only once per edge)
                auto edge = make_pair(min(from, to), max(from, to));
                tmpEdgeList[edge] = dist;
            }
        }
    }

    // Save the last graph
    if (!currentGraph.empty()) {
        allGraphs[currentGraph].setAdjacencyList(tmpGraph);
        allGraphs[currentGraph].setedgeList(tmpEdgeList);    }

    file.close();
    return "success";
}
void File::trim(string& s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch) {
                return !isspace(ch);
            }));
    s.erase(find_if(s.rbegin(), s.rend(), [](int ch) {
                return !isspace(ch);
            }).base(), s.end());
}

string File::chooseGraph(const unordered_map<string, unordered_map<string, vector<pair<string, int>>>>& allGraphs) {
    cout << "The available graphs: " << endl;
    vector<string> names;
    int index = 1;
    auto it = allGraphs.begin();
    for (; it != allGraphs.end(); it++) {
        cout << index << ' ' << it->first << endl;
        index++;
        names.push_back(it->first);
    }
    int choice;
    cout << "Enter the number of the graph you want to load:";
    cin >> choice;
    while (cin.fail() || choice < 1 || choice > names.size()) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Try again: ";
        cin >> choice;
    }
    return names[choice - 1];
}
string File::saveAllGraphs(const string& filename,unordered_map<string, CityGraph>& allGraphs){
    ofstream file(filename, ios::trunc);
    if (!file.is_open()) {
        return "Error opening file for writing:";
    }

    for ( auto& [graphName, cityGraph] : allGraphs) {
        const auto& adjList = cityGraph.getAdjacencyList();

        file << "# Graph: " << graphName << "\n";
        file << "# Cities\n";

        // Write all cities
        for (const auto& [city, _] : adjList) {
            file << city << "\n";
        }

        file << "# Edges\n";
        unordered_set<string> printedEdges;

        // Write all edges (without duplicates)
        for (const auto& [from, neighbors] : adjList) {
            for (const auto& [to, dist] : neighbors) {
                string edgeKey = (from < to) ? from + "-" + to : to + "-" + from;

                if (printedEdges.insert(edgeKey).second) {
                    file << from << " " << to << " " << dist << "\n";
                }
            }
        }

        file << "\n";  // Separate graphs with blank line
    }

    file.close();
    return "saved";

}

void File::saveGraphToFile(const string& filename, const string& graphName, const unordered_map<string, vector<pair<string, int>>>& adjList) {
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error opening the file.\n";
        return;
    }
    file << "# Graph: " << graphName << endl;
    file << "# Cities\n";
    auto city = adjList.begin();
    for (; city != adjList.end(); city++) {
        file << city->first << endl;
    }
    file << "# Edges\n";
    unordered_set<string> printedEdges;

    for (auto it = adjList.begin(); it != adjList.end(); ++it) {
        string from = it->first;
        vector<pair<string, int>> neighbors = it->second;

        for (size_t i = 0; i < neighbors.size(); ++i) {
            string to = neighbors[i].first;
            int dist = neighbors[i].second;

            string edgeKey = (from < to) ? from + "-" + to : to + "-" + from;
            if (printedEdges.count(edgeKey)) continue;

            file << from << ' ' << to << ' ' << dist << '\n';
            printedEdges.insert(edgeKey);
        }
    }

    file << '\n';
    file.close();
}

void File::saveAllGraphsExcept(const string& graphToReplace, unordered_map<string, unordered_map<string, vector<pair<string, int>>>>& allGraphs, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening the file.\n";
        return;
    }
    auto graph = allGraphs.begin();
    for (; graph != allGraphs.end(); graph++) {
        if (graph->first == graphToReplace) continue;
        file << "# Graph: " << graph->first << endl;
        file << "# Cities\n";
        auto city = graph->second.begin();
        for (; city != graph->second.end(); city++) {
            file << city->first << endl;
        }
        file << "# Edges\n";
        unordered_set<string> printedEdges;

        for (auto it = graph->second.begin(); it != graph->second.end(); ++it) {
            string from = it->first;
            vector<pair<string, int>> neighbors = it->second;

            for (size_t i = 0; i < neighbors.size(); ++i) {
                string to = neighbors[i].first;
                int dist = neighbors[i].second;

                string edgeKey = (from < to) ? from + "-" + to : to + "-" + from;
                if (printedEdges.count(edgeKey)) continue;

                file << from << ' ' << to << ' ' << dist << '\n';
                printedEdges.insert(edgeKey);
            }
        }

        file << '\n';
    }
    file.close();
}

void File::appendEditedGraphToFile(const string& name, const unordered_map<string, vector<pair<string, int>>>& adjList, const string& filename) {
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error opening the file.\n";
        return;
    }
    file << "# Graph: " << name << "\n";
    auto it = adjList.begin();
    file << "# Cities\n";
    for (; it != adjList.end(); it++) {
        file << it->first << endl;
    }
    file << "# Edges\n";
    unordered_set<string> printedEdges;

    for (auto itt = adjList.begin(); itt != adjList.end(); ++itt) {
        string from = itt->first;
        vector<pair<string, int>> neighbors = itt->second;

        for (size_t i = 0; i < neighbors.size(); ++i) {
            string to = neighbors[i].first;
            int dist = neighbors[i].second;

            string edgeKey = (from < to) ? from + "-" + to : to + "-" + from;
            if (printedEdges.count(edgeKey)) continue;

            file << from << ' ' << to << ' ' << dist << '\n';
            printedEdges.insert(edgeKey);
        }
    }

    file << '\n';
    file.close();
}
#include <cstdlib> // For system() command
#include <qDebug>
#include <stdexcept>
void  File::exportToDOT(const string& filename, const string& graphName, const unordered_map<string, vector<pair<string, int>>>& adjacencyList) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        throw std::runtime_error("Failed to open DOT file for writing: " + filename);
    }

    // DOT file header
    outFile << "graph CityGraph {\n";
    outFile << "    layout=neato;\n";
    outFile << "    overlap=false;\n";
    outFile << "    splines=true;\n";

    // To avoid duplicate edges
    set<std::pair<std::string, std::string>> writtenEdges;

    for (const auto& entry : adjacencyList) {
        const std::string& city1 = entry.first;

        for (const auto& connection : entry.second) {
            const std::string& city2 = connection.first;
            int weight = connection.second;

            if (writtenEdges.find({ city1, city2 }) == writtenEdges.end() &&
                writtenEdges.find({ city2, city1 }) == writtenEdges.end()) {

                outFile << "    " << city1 << " -- " << city2
                        << " [label=\"" << weight << "\"];\n";
                writtenEdges.insert({ city1, city2 });
            }
        }
    }

    outFile << "}\n";
}
