#include "Combination Formula.hpp"
#include "Factorial.hpp"
#include <iostream>

using namespace std;

//USING RECRUSION
int recursive_Combination (int n, int r) {
    if (n == r || r == 0)
        return 1;
    else
        return recursive_Combination(n - 1, r - 1) + recursive_Combination(n - 1, r);
}



//USING SIMPLE METHOD
int simple_Combination (int n, int r) {
    int t1, t2, t3;
    t1 = factorial(n);
    t2 = factorial(r);
    t3 = factorial(n - r);
    return t1 / (t2 * t3);
}
