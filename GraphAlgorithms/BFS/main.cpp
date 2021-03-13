
#include "adjacencyList.h"
#include "BFS.h"

#include <iostream>
#include <fstream>
#include <string>

ifstream fin("D:\\FacultyProjects\\GraphAlgorithms\\BFS\\in.txt");

int main() {
    int nodes;

    fin >> nodes;

    vector<Node*> nodes_list(nodes + 1, NULL);
    for(int id = 1; id <= nodes; id++){
        Node *new_node = new Node();
        new_node -> id = id;
        nodes_list[id] = new_node;
    }

    vector<vector<Node*>> adjacency_list(nodes + 1);

    fromFileToAdjacencyList(adjacency_list, nodes_list, nodes, fin);
    printAdjacencyList(adjacency_list, nodes);

    Node *source_node = adjacency_list[2][0];
    bfs(adjacency_list, source_node, nodes_list, nodes);

    for(auto node : nodes_list){
        delete node;
    }

    return 0;
}
