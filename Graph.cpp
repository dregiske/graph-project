#include "graph.hpp"

Graph::Graph(const char* const & edgelist_csv_fn, GraphType type){

	: graph_type(type)

    ifstream my_file(edgelist_csv_fn);
    if (!my_file.is_open()) {
        cerr << "Could not open file." << endl;
        return;
    }

    string line;
    while (getline(my_file, line)) {
        istringstream ss(line);
        string first, second, third;

        getline(ss, first, ',');
        getline(ss, second, ',');
        getline(ss, third);

        double weight = stod(third);
        vertex_set.insert(first);
        vertex_set.insert(second);

        adjacency_list[first].emplace_back(second, weight);

		if(graph_type == GraphType::Undirected){
			adjacency_list[second].emplace_back(first, weight);
		}
    }
    my_file.close();
}

void Graph::print_graph() const{
	: graph_type(type)
	string arrow = "";
	if(graph_type == GraphType::Undirected){
		arrow = "<->";
	}
	else{
		arrow = "->";
	}
	
	cout << "Graph: " << endl;
	for(const auto& vertex : adjacency_list){
		cout << vertex.first << arrow << vertex.second << endl;
	}
}

void Graph::print_aj() const{
	cout << "Adjacency List: " << endl;
	for(const auto& vertex : adjacency_list){
		cout << vertex.first << ": ";
		for(const auto& neighbor : vertex.second){
			cout << "(" << neighbor.first << ", " << neighbor.second << ") ";
		}
		cout << endl;
	}
}

unsigned int Graph::vertex_count(){
	return vertex_set.size();
}

unsigned int Graph::edge_count(){
	unsigned int count = 0;
	// TODO
}