#include "Indirect Recursion.hpp"
#include <iostream>

using namespace std;

//Indirect recursion occurs when two or more functions call each other in a cycle.
//A() calls B() and B() calls A().

void indirect1 (int n) {
    if (n > 0) {
        cout << n << endl;
        indirect2(n - 1);
    }
}

void indirect2 (int n) {
    if (n > 0) {
        cout << n<< endl;
        indirect1(n/2);
    }
}
