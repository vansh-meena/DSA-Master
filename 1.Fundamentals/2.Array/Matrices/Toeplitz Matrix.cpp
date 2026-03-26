#include "Toeplitz Matrix.hpp"
#include <iostream>

using namespace std;

/*
 TOEPLITZ MATRIX --> It is a matrix where all elements are same in each diagonal.
 METHOD --> we only need to store the first row and column elements and store the same elements in index[i+1][j+1].
 FORMULA --> If i <= j then index = (j - i)  --> Using upper triangular matrix
         --> Else index = (n + i - j - 1)
 */

void toeplitzMatrix::set(int row_idx, int col_idx, int element) {
    if (row_idx <= col_idx) {
        toeplitz_array[col_idx - row_idx] = element;
    }
    else {
        toeplitz_array[toen + row_idx - col_idx - 1] = element;
    }
}

int toeplitzMatrix::get(int row_idx, int col_idx) {
    if (row_idx <= col_idx) {
        return toeplitz_array[col_idx - row_idx];
    }
    else if (row_idx > col_idx) {
        return toeplitz_array[toen + row_idx - col_idx - 1];
    }
    else {
        return 0;
    }
}

void toeplitzMatrix::display () {
    int i,j;
    for (i = 0; i < toerow; i++) {
        for (j = 0; j < toecol; j++) {
            if (i <= j) {
                cout << toeplitz_array[j - i] << " ";
            }
            else if (i > j) {
                cout << toeplitz_array[toen + i - j - 1] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
