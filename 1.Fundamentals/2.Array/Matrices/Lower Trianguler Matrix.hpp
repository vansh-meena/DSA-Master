#ifndef Lower_Trianguler_Matrix_hpp
#define Lower_Trianguler_Matrix_hpp

#include <iostream>

using namespace std;

class lowerTriangularMatrix{
private:
    int* lower_Triangular_array;
    int* row_major_LT;
    int* col_major_LT;
    int ltrow;
    int ltcol;
    int ltn;
public:
    lowerTriangularMatrix(int row, int col) : ltrow(row), ltcol(col), ltn(row * col){
        if (row != col) {
            cout << "Not a Square Matrix!" << endl;
            exit(0);
        }
        //Using 2D array
//        lower_Triangular_array = new int[row * col];
        
//        //Using Row-major method
//        row_major_LT = new int[(ltn * (ltn + 1)) / 2];
//        
//        //Using Column-major method
        col_major_LT = new int[(ltn * (ltn + 1)) / 2];
    }
    ~lowerTriangularMatrix() {
//        delete [] lower_Triangular_array;
//        delete [] row_major_LT;
        delete [] col_major_LT;
    }
    void set (int row_idx, int col_idx, int x);
    int get (int row_idx, int col_idx);
    void display ();
};
#endif /* Lower_Trianguler_Matrix_hpp */
