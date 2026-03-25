#ifndef Upper_Trianguler_Matrix_hpp
#define Upper_Trianguler_Matrix_hpp

#include <iostream>

using namespace std;

class upperTriangularMatrix{
private:
    int* upper_Triangular_array;
    int* row_major_UT;
    int* col_major_UT;
    int utrow;
    int utcol;
    int utn;
public:
    upperTriangularMatrix(int row, int col) : utrow(row), utcol(col), utn(row*col) {
        if (row != col) {
            cout << "Not a Square Matrix!" << endl;
            exit(0);
        }
        
        //Using 2D array Method
//        upper_Triangular_array = new int[(utn * (utn + 1)) / 2];
        
        //Using Row-Major Method
//        row_major_UT = new int[(utn * (utn + 1)) / 2];
        
        //Using Column-Major Method
        col_major_UT = new int[(utn * (utn + 1)) / 2];
    }
    
    ~upperTriangularMatrix() {
//        delete [] upper_Triangular_array;
//        delete [] row_major_UT;
        delete [] col_major_UT;
    }
    
    void set (int row_idx, int col_idx, int x);
    int get (int row_idx, int col_idx);
    void display ();
};

#endif /* Upper_Trianguler_Matrix_hpp */
