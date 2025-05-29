
#include "graph.hpp"
#include "graph.cpp"

// Test the functions in graph.cpp
int main(int argc, char* argv[]){

	if (argc != 2) { // check for proper usage
        cerr << "Usage: ./GraphTest <graph_csv_file> <graph_type" << endl;
        return 1;
    }

	string filename = argv[2];

	GraphType type = (string(argv[1]) == "directed") ? GraphType::Undirected : GraphType::Directed;

	Graph g(filename, type);
	g.print_graph();
	g.print_aj();


	return 0;

}