#include "Tree Recursion.hpp"
#include <iostream>

using namespace std;

//If a recursive function calling itself more than one time then it is tree recursion.

void tree (int n) {
    if (n > 0){
        cout << n << endl;
        tree(n - 1);
        tree(n - 1);
    }
}
