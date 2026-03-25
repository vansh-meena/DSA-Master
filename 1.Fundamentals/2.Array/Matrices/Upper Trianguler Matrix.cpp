#include "Upper Trianguler Matrix.hpp"
#include <iostream>

using namespace std;

void upperTriangularMatrix::set(int row_idx, int col_idx, int element) {
    if (col_idx >= row_idx) {
        
        //Using 2D array
//        upper_Triangular_array[col_idx * utrow + row_idx] = element;
        
        //Using row major
//        row_major_UT[(utn * row_idx - row_idx * (row_idx - 1) / 2) + (col_idx - row_idx)] = element;
        
        //Using column major
        col_major_UT[(col_idx * (col_idx + 1) / 2) + row_idx] = element;
    }
    else {
        cout << "Row Index is greater than Column index!" << endl;
    }
}

int upperTriangularMatrix::get(int row_idx, int col_idx) {
    if (col_idx >= row_idx) {
        //Using 2D array
//        return upper_Triangular_array[col_idx * utrow + row_idx];
        
        //Using row major
//        return row_major_UT[(utn * row_idx - row_idx * (row_idx - 1) / 2) + (col_idx - row_idx)];
        
        //Using column major
        return col_major_UT[(col_idx * (col_idx + 1) / 2) + row_idx];
    }
    else {
        return 0;
    }
}

void upperTriangularMatrix::display() {
    int i, j;
    for (i = 0 ; i < utrow; i++) {
        for (j = 0; j < utcol; j++) {
            if (j >= i) {
                //Using 2D array
//                cout << upper_Triangular_array[j * utrow + i] << " ";
                
                //Using row major
//                cout << row_major_UT[(utn * i - i * (i - 1) / 2) + (j - i)] << " ";
                
                //Using column major
                cout << col_major_UT[(j * (j + 1) / 2) + i] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
