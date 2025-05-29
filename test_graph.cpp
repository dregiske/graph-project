#include "graph.hpp"

// Test the functions in graph.cpp
int main(int argc, char* argv[]){

	// --- SETUP ---
	if (argc != 3){
        cerr << "Usage: ./graph_program <graph_csv_file> <graph_type>" << endl;
        return 1;
    }

	string filename = argv[1];
	string graph_type = argv[2];

	GraphType type;

	if(graph_type == "directed"){
		type = GraphType::Directed;
	}
	else if(graph_type == "undirected"){
		type = GraphType::Undirected;
	}
	else{
		cerr << "Invalid Graph Type: " << graph_type << "." << endl;
		return 1;
	}

	Graph g(filename.c_str(), type);

	// --- PRINT FUNCTIONS ---
	g.print_graph();
	g.print_aj();

	// --- COUNT FUNCTIONS ---
	unsigned int vertices = g.vertex_count();
	cout << "Number of verticies in the graph is " << vertices << endl;

	unsigned int edges = g.edge_count();
	cout << "Number of edges in the graph is " << edges << endl;


	return 0;
}