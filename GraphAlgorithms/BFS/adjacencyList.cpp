//
// Created by Hodosi on 3/12/2021.
//

#include "adjacencyList.h"

#include <iostream>
#include <fstream>

using namespace std;

void fromFileToAdjacencyList(vector<vector<Node*>> &adjacency_list, vector<Node*> nodes_list, int nodes, ifstream &fin){
    int predecessor_id, successor_id, cost;
    while (fin >> predecessor_id >> successor_id >> cost){
        Node *predecessor, *successor;
        if(nodes_list[predecessor_id] == NULL){
            predecessor = new Node();
        }
        else{
            predecessor = nodes_list[predecessor_id];
        }
        if(nodes_list[successor_id] == NULL){
            successor = new Node();
        }
        else{
            successor = nodes_list[successor_id];
        }
        ///////////////////////////////////////////////////
        nodes_list[predecessor_id] = predecessor;
        nodes_list[successor_id] = successor;
        ///////////////////////////////////////////////////
        predecessor -> id = predecessor_id;
        successor -> id = successor_id;
        ///////////////////////////////////////////////////
        adjacency_list[predecessor_id].push_back(successor);
        adjacency_list[successor_id].push_back(predecessor);
    }
}

void printAdjacencyList(vector<vector<Node*>> adjacency_list, int nodes){
    int predecessor;
    for(predecessor = 1; predecessor <= nodes; predecessor++){
        cout << predecessor << " : ";
        for(auto successor : adjacency_list[predecessor]){
            cout << successor -> id << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}