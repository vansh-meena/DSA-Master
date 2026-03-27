#include "SparseMatrix.hpp"
#include <iostream>

using namespace std;

void sparseMatrix::set(int row_idx, int col_idx, int element) {
//Checking the limit of non-zero elements is reached or not.
    if (count >= sM_n) {
        cout << "Non-zero element limit reached\n";
        return;
    }
//If not then increment the count.
    if (element != 0) {
        count++;
    }
//Strore the element.
    sM[row_idx * sM_col + col_idx] = element;
}

void sparseMatrix::display() {
    int i, j;
    for (i = 0; i < sM_row; i++) {
        for (j = 0; j < sM_col; j++) {
            if (sM[i * sM_col + j] == 0) {
                cout << "0 ";
            }
            else
                cout << sM[i * sM_col + j] << " ";
        }
        cout << endl;
    }
}
