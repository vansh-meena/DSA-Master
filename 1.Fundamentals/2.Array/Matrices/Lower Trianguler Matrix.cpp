#include "Lower Trianguler Matrix.hpp"
#include <iostream>

using namespace std;

void lowerTriangularMatrix::set(int row_idx, int col_idx, int element) {
    if (row_idx >= col_idx) {
        
        //Using 2D array
//        lower_Triangular_array[row_idx * ltcol + col_idx] = element;
        
        //Using Row-Major
//        row_major_LT[row_idx * (row_idx + 1) / 2 + col_idx] = element;
        
        //Using Column-Major
        col_major_LT[((ltn * col_idx - col_idx * (col_idx - 1) / 2) + (row_idx - col_idx))] = element;
    }
    else {
        cout << "Column Index is greater than Row index!" << endl;
    }
}

int lowerTriangularMatrix::get(int row_idx, int col_idx) {
    if (row_idx >= col_idx) {
        
        //Using 2D array
//        return lower_Triangular_array[row_idx * ltcol + col_idx];
        
        //Using Row-Major
//        return row_major_LT[row_idx * (row_idx + 1) / 2 + col_idx];
        
        //Using Column-Major
        return col_major_LT[((ltn * col_idx - col_idx * (col_idx - 1) / 2) + (row_idx - col_idx))];
        
    }
    else {
        return 0;
    }
}

void lowerTriangularMatrix::display() {
    int i, j;
    for (i = 0; i < ltrow; i++) {
        for (j = 0; j < ltcol; j++) {
            if (i >= j) {
//                cout << lower_Triangular_array[i * ltcol + j] << " ";
                
//                cout << row_major_LT[i * (i + 1) / 2 + j] << " ";
//
                cout << col_major_LT[((ltn * j - j * (j - 1) / 2) + (i - j))] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
