#include "Array.hpp"
#include "Structure.hpp"
#include "Pointer.hpp"
#include "Pointer to a Structure.hpp"
#include "call by value.hpp"
#include "call by address.hpp"
#include "call by reference.hpp"
#include "Array as Parameter.hpp"
#include "Polygon.hpp"
#include <iostream>

using namespace std;

int main() {
    
//    Array();
//    printDeck();
//    Pointer();
//    Pointer_to_Structure();
    
//    int a = 1, b = 2;
//    
//    swap_using_value(a, b);
//    cout << a << " " << b << endl;
//    
//    swap_using_address(&a, &b);
//    cout << a << " " << b << endl;
//    
//    swap_using_reference(a, b);
//    cout << a << " " << b << endl;
    
//    int *A;
//    A = arr(5);
//    for (int i = 0; i < 5; i++) {
//        cout << A[i] << ", ";
//    }
    
    Polygon r (10, 5);
    cout << "Area : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
    r.setLength(20);
    r.setBreadth(10);
    r.getLength();
    
    return 0;
}
