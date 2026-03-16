#include "Tower of Hanoi.hpp"
#include <iostream>

using namespace std;

void ToH (int n, int A, int B, int C) {
    if (n > 0) {
        ToH(n - 1, A, C, B);
        cout << A << " -> "<< C << endl;
        ToH(n - 1, B, A, C);
    }
}
