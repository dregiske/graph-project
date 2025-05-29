#ifndef GRAPH_H
#define GRAPH_H

#include "commons.hpp"

class Graph{
    private:
		// undordered map for adjacency list
		// able to hold decimals in weights
        unordered_map<string, vector<pair<string, double>>> adjacency_list;

        unordered_set<string> nodes_set;

    public:
		// construct a graph using csv files
        Graph(const char* const& edgelist_csv_fn);
};

#endif /* GRAH_H */