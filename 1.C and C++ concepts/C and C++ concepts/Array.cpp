#include "Array.hpp"
#include <iostream>

using namespace std;

void Array() {
    int a[5];               // decleration (uninitialized, will print indeterminate values)
    int b[] = {0,1,2,3,4};  // initialisation
    for (int i = 0; i < 5; i++) {
        
        cout << a[i] << endl;
        cout << b[i] << endl;
    }
}
