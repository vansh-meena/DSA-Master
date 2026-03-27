#ifndef SparseMatrix_hpp
#define SparseMatrix_hpp
#include <iostream>

using namespace std;

class sparseMatrix{
private:
    int *sM;
    int sM_row;
    int sM_col;
    int sM_n;
    int count;
public:
    sparseMatrix (int row, int col, int no_of_non_zero_elements) : sM_row(row), sM_col(col), sM_n(no_of_non_zero_elements) {
        count = 0;
        sM = new int [row*col];
        for (int i = 0; i < sM_n; i++) {
            sM[i] = 0;
        }
    }
    ~sparseMatrix () {
        delete [] sM;
    }
    
    int* getMatrix() { return sM; }
    int getRows() { return sM_row; }
    int getCols() { return sM_col; }
    int getN() {return sM_n;}
    void set (int row_idx, int col_idx, int element);
    void display ();
};

#endif /* SparseMatrix_hpp */
