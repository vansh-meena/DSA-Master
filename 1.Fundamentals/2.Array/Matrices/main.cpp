#include "Diagonal Matrix.hpp"
#include "Lower Trianguler Matrix.hpp"
#include "Upper Trianguler Matrix.hpp"
#include "Symmetric Matrix.hpp"
#include "Tridiagonal Matrix.hpp"
#include "Toeplitz Matrix.hpp"
#include <iostream>

using namespace std;

int main() {
/******************** DIAGONAL MATRIX ** ******************/
    diagonalMatrix m(5, 5);
    
    m.set(0, 0, 1);
    m.set(1, 1, 2);
    m.set(2, 2, 3);
    m.set(3, 3, 4);
    m.set(4, 4, 5);
    
    cout << m.get(4, 4) << endl;
    
    m.display();
    
/******************** LOWER TRIANGULAR MATRIX ** ******************/
    lowerTriangularMatrix m1(4, 4);
    
    m1.set(0, 0, 1);
    m1.set(1, 0, 1);
    m1.set(1, 1, 2);
    m1.set(2, 0, 1);
    m1.set(2, 1, 2);
    m1.set(2, 2, 3);
    m1.set(3, 0, 1);
    m1.set(3, 1, 2);
    m1.set(3, 2, 3);
    m1.set(3, 3, 4);
    
    cout << m1.get(3, 0) << endl;
    
    m1.display();
    
/******************** UPPER TRIANGULAR MATRIX ** ************/
    upperTriangularMatrix m2(4, 4);
    
    m2.set(0, 0, 1);
    m2.set(0, 1, 2);
    m2.set(0, 2, 3);
    m2.set(0, 3, 4);
    m2.set(1, 1, 1);
    m2.set(1, 2, 2);
    m2.set(1, 3, 3);
    m2.set(2, 2, 1);
    m2.set(2, 3, 2);
    m2.set(3, 3, 1);
    
    cout << m2.get(1, 2) << endl;
    
    m2.display();
    
/******************** SYMMETRIC MATRIX** ****************/
    symmetricMatrix m3(4, 4);
    
    m3.set(0, 0, 1);
    m3.set(0, 1, 1);
    m3.set(0, 2, 1);
    m3.set(0, 3, 1);
    m3.set(1, 0, 1);
    m3.set(1, 1, 2);
    m3.set(1, 2, 2);
    m3.set(1, 3, 2);
    m3.set(2, 0, 1);
    m3.set(2, 1, 2);
    m3.set(2, 2, 3);
    m3.set(2, 3, 3);
    m3.set(3, 0, 1);
    m3.set(3, 1, 2);
    m3.set(3, 2, 3);
    m3.set(3, 3, 4);
    
    cout << m3.get(3, 1) << endl;
    
    m3.display();
    
/******************** TRIDIAGONAL MATRIX** ****************/
    tridiagonalMatrix m4(4, 4);
    
    m4.set(0, 0, 1);
    m4.set(0, 1, 1);
    m4.set(0, 2, 1);
    m4.set(0, 3, 1);
    m4.set(1, 0, 1);
    m4.set(1, 1, 2);
    m4.set(1, 2, 2);
    m4.set(1, 3, 2);
    m4.set(2, 0, 1);
    m4.set(2, 1, 2);
    m4.set(2, 2, 3);
    m4.set(2, 3, 3);
    m4.set(3, 0, 1);
    m4.set(3, 1, 2);
    m4.set(3, 2, 3);
    m4.set(3, 3, 4);
    
    cout << m4.get(2, 1) << endl;
    
    m4.display();
    
/******************** TOEPLITZ MATRIX** ****************/
    toeplitzMatrix m5(5, 5);
    
    m5.set(0, 0, 1);
    m5.set(0, 1, 2);
    m5.set(0, 2, 3);
    m5.set(0, 3, 4);
    m5.set(0, 4, 5);
    m5.set(1, 0, 6);
    m5.set(2, 0, 7);
    m5.set(3, 0, 8);
    m5.set(4, 0, 9);
    
    cout << m5.get(4, 0) << endl;
    
    m5.display();
    
    return 0;
}
