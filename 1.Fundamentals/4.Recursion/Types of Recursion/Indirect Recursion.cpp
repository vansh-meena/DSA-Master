#include "Indirect Recursion.hpp"
#include <iostream>

using namespace std;

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
