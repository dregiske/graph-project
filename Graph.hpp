#ifndef GRAPH_H
#define GRAPH_H

#include "commons.hpp"

class Graph{
    private:
        unordered_map<string, vector<pair<string, double>>> adjacency_list;
        unordered_set<string> vertex_set;
    public:
        Graph(const char* const& edgelist_csv_fn);
		void print_graph() const;
		void print_aj() const;
		unsigned int vertex_count();
};

enum GraphType{
	Undirected;
	Directed;
};

#endif /* GRAH_H */