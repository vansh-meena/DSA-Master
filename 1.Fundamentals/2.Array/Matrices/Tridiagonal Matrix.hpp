#ifndef Tridiagonal_Matrix_hpp
#define Tridiagonal_Matrix_hpp

#include <iostream>

using namespace std;

class tridiagonalMatrix {
private:
    int* tri_diagonal_array;
    int trirow;
    int tricol;
    int trin;
public:
    tridiagonalMatrix (int row, int col) : trirow(row), tricol(col), trin(row*col) {
        if (row != col) {
            cout << "Not a Square Matrix!" << endl;
            exit(0);
        }
        tri_diagonal_array = new int[3 * trin - 2];
    }
    ~tridiagonalMatrix () {
        delete [] tri_diagonal_array;
    }
    
    void set (int row_idx, int col_idx, int x);
    int get (int row_idx, int col_idx);
    void display ();
};

#endif /* Tridiagonal_Matrix_hpp */
