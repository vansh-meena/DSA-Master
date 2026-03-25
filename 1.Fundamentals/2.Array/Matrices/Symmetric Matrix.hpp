//
//  Symmetric Matrix.hpp
//  Matrices
//
//  Created by Vansh Meena on 03/03/26.
//

#ifndef Symmetric_Matrix_hpp
#define Symmetric_Matrix_hpp

#include <iostream>

using namespace std;

class symmetricMatrix {
private:
    int* symmetric_array;
    int srow;
    int scol;
    int sn;
public:
    symmetricMatrix (int row, int col) : srow(row), scol(col), sn(row*col) {
        if (row != col) {
            cout << "Not a Square Matrix!" << endl;
            exit(0);
        }
        symmetric_array = new int[(sn * (sn + 1)) / 2];
    }
    ~symmetricMatrix () {
        delete [] symmetric_array;
    }
    
    void set (int row_idx, int col_idx, int x);
    int get (int row_idx, int col_idx);
    void display ();
};

#endif /* Symmetric_Matrix_hpp */
