//
// Created by Hodosi on 3/16/2021.
//

#include "transitiveClosureMatrix.h"

#include <iostream>
#include <vector>

using  namespace std;

int fromFileToTransitiveClosureMatrix(vector<vector<int>> &closure_matrix, ifstream &fin){
    int predecessor, successor, edges = 0;

    while(fin >> predecessor >> successor){
        edges++;
        closure_matrix[predecessor][successor] = 1;
        //closure_matrix[successor][predecessor] = 1;
    }

    return edges;
}


void printTransitiveClosureMatrix(vector<vector<int>> closure_matrix, int nodes){
    int i, j;
    for(i = 1; i <= nodes; i++){
        for(j = 1; j <= nodes; j++){
            cout << closure_matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}