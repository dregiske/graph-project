#ifndef GRAPH_H
#define GRAPH_H

#include "commons.hpp"

enum GraphType{
	Undirected,
	Directed
};

class Graph{
    private:
        unordered_map<string, vector<pair<string, double>>> adjacency_list;
        unordered_set<string> vertex_set;
		GraphType graph_type;
    public:
        Graph(const char* const& edgelist_csv_fn, GraphType type);

		void print_graph() const;
		void print_aj() const;

		unsigned int vertex_count() const;
		unsigned int edge_count() const;

		// TODO:

		// edge checking function, see if an edge exists in a graph

		// DFS
		// BFS
		// Dijkstra's algorithm
		// Tarjan's algorithm
		// Prim's algorithm
		// Kruskal's algorithm

};

#endif /* GRAPH_H */