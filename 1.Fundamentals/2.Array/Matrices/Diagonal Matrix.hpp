#ifndef Diagonal_Matrix_hpp
#define Diagonal_Matrix_hpp
#include <iostream>

using namespace std;

class diagonalMatrix{
private:
    int* diagonalarray;
    int *diagonal_element;
    int drow;
    int dcol;
    int dn;
public:
    diagonalMatrix(int row, int col) : drow(row) , dcol(col) , dn(row * col) {
        if (row != col) {
            cout << "Not a Diagonal Matrix!" << endl;
            exit(0);
        }
        //Using 2D array
//        diagonalarray = new int[row * col];
        
        //Using 1D array
        diagonal_element = new int[row];
        
    }
    ~diagonalMatrix() {
        delete[] diagonal_element;
    }
    void set (int row_idx, int col_idx, int x);
    int get (int row_idx, int col_idx);
    void display ();
};
#endif /* Diagonal_Matrix_hpp */
