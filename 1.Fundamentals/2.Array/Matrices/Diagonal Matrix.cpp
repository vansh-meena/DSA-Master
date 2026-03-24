#include "Diagonal Matrix.hpp"
#include <iostream>

using namespace std;

void diagonalMatrix::set (int row_idx, int col_idx, int element) {
    if (row_idx == col_idx) {
        //Using 2D array
//        diagonalarray [row_idx * dcol + col_idx] = element;
        
        //Using 1D array
        diagonal_element [row_idx] = element;
    }
}

int diagonalMatrix::get (int row_idx, int col_idx) {
    if (row_idx == col_idx) {
//        return diagonalarray[row_idx * dcol + col_idx];   //Using 2D array.
        
        return diagonal_element[row_idx];       //Using only diagonal element array.
    }
    else {
        return 0;
    }
}

void diagonalMatrix::display() {
    int i, j;
    for (i = 0; i < dcol; i++) {
        for (j = 0; j < drow; j++) {
            if (i == j) {
                //Using 2D array
//                cout << diagonalarray[i * col + j] << " ";
                
                //Using 1D array
                cout << diagonal_element[i] << " ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
