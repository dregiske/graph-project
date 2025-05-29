#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>
using namespace std;

class Graph{
    private:
        unordered_map<string, vector<pair<string, double>>> adjacency_list;
        unordered_set<string> nodes_set;

        void dfs(const string& node, double threshold, unordered_set<string>& visited, vector<string>& component);
        void bfs(const string& node, double threshold, unordered_set<string>& visited, vector<string>& component);
        bool is_connected(const string& start, const string& end, double threshold, unordered_set<string>& visited);
    public:
        Graph(const char* const& edgelist_csv_fn);

};

#endif /* GRAH_H */