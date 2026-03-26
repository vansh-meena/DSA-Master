#include "Tridiagonal Matrix.hpp"
#include <iostream>

using namespace std;

/*
TRIDIAGONAL MATRIX --> It is matrix where the main 3 diagonals contain non-zero and remaining are zeros.
FORMULA --> If (i = j) or (i - j = 0) then index = (n - 1) + (i - 1)
        --> If (i > j) or (i - j = 1) then index = (i - 1)
        --> If (i < j) or (i - j = -1) then index = 2(n - 1) + (i - 1)
*/

void tridiagonalMatrix::set(int row_idx, int col_idx, int element) {
    if ((row_idx - col_idx) == 1) {
        tri_diagonal_array[row_idx - 1] = element;
    }
    else if ((row_idx - col_idx) == 0) {
        tri_diagonal_array[(trin - 1) + (row_idx - 1)] = element;
    }
    else if ((row_idx - col_idx) == -1) {
        tri_diagonal_array[(2 * trin - 1) + (row_idx - 1)] = element;
    }
}

int tridiagonalMatrix::get(int row_idx, int col_idx) {
    if ((row_idx - col_idx) == 1) {
        return tri_diagonal_array[row_idx - 1];
    }
    else if ((row_idx - col_idx) == 0) {
        return tri_diagonal_array[(trin - 1) + (row_idx - 1)];
    }
    else if ((row_idx - col_idx) == -1) {
        return tri_diagonal_array[(2 * trin - 1) + (row_idx - 1)];
    }
    else {
        return 0;
    }
}

void tridiagonalMatrix::display() {
    int i, j;
    for (i = 0; i < trirow; i++) {
        for (j = 0; j < tricol; j++) {
            if ((i - j) == 1) {
                cout << tri_diagonal_array[i - 1] << " ";
            }
            else if ((i - j) == 0) {
                cout << tri_diagonal_array[(trin - 1) + (i - 1)] << " ";
            }
            else if ((i - j) == -1) {
                cout << tri_diagonal_array[(2 * trin - 1) + (i - 1)] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
