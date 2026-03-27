#include "SparseMatrix.hpp"
#include "Three Tuple Method.hpp"
#include <iostream>

int main() {
    
    sparseMatrix a(4, 3, 4);
    
    a.set(0, 2, 4);
    a.set(1, 0, 9);
    a.set(2, 1, 5);
    a.set(3, 0, 2);
    a.set(1, 2, 3);
    a.display();
    
    
    return 0;
}
