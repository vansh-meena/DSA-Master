#ifndef Toeplitz_Matrix_hpp
#define Toeplitz_Matrix_hpp
#include <iostream>

using namespace std;

class toeplitzMatrix {
private:
    int* toeplitz_array;
    int toerow;
    int toecol;
    int toen;
public:
    toeplitzMatrix (int row, int col) : toerow(row), toecol(col), toen(row*col) {
        if (row != col) {
            cout << "Not a Square Matrix!" << endl;
            exit(0);
        }
        toeplitz_array = new int[2 * toen - 1];
    }
    ~toeplitzMatrix () {
        delete [] toeplitz_array;
    }
    
    void set (int row_idx, int col_idx, int x);
    int get (int row_idx, int col_idx);
    void display ();
};

#endif /* Toeplitz_Matrix_hpp */
