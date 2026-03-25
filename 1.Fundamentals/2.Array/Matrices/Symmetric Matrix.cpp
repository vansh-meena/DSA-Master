#include "Symmetric Matrix.hpp"
#include <iostream>

using namespace std;

//IN SYMMETRIC MATRIX WE CAN USE LOWER / UPPER DIAGONAL MATRIX TO STORE THE ONE SIDE OF DIAGONAL IN AN ARRAY AND WHILE GETTING THE ELEMENTS WE CAN FLIP THE INDEX TO GET THE SAME ELEMENTS AS OTHER DIAGONAL. A[i][j] -> A[j][i].
//THE SIZE OF THE ARRAY ALWAYS WILL BE -> n = n*(n+1)/2

void symmetricMatrix::set(int row_idx, int col_idx, int element) {
    if (row_idx >= col_idx) {
        symmetric_array[(row_idx * (row_idx + 1)) / 2 + col_idx] = element;
    }
    else {
        symmetric_array[(col_idx * (col_idx + 1)) / 2 + row_idx] = element;
    }
}

int symmetricMatrix::get(int row_idx, int col_idx) {
    if (row_idx >= col_idx) {
        return symmetric_array[(row_idx * (row_idx + 1)) / 2 + col_idx];
    }
    else if (row_idx < col_idx){
        return symmetric_array[(col_idx * (col_idx + 1)) / 2 + row_idx];
    }
    else {
        return 0;
    }
}

void symmetricMatrix::display() {
    int i,j;
    for (i = 0; i < srow; i++) {
        for (j = 0; j < scol; j++) {
            if (i >= j) {
                cout << symmetric_array[(i * (i + 1)) / 2 + j] << " ";
            }
            else if (i < j){
                cout << symmetric_array[(j * (j + 1)) / 2 + i] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
