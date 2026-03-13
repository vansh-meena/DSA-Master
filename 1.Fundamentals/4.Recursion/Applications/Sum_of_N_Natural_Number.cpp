#include "Sum_of_N_Natural_Number.hpp"
#include <iostream>

using namespace std;

//USING RECURSION : Time complexity -> O(n)
int sum_of_n_natural_number (int n) {
    if (n == 0) {
        return 0;
    }
    else{
        return sum_of_n_natural_number(n - 1) + n;
    }
}

//USING LOOP : prefered to reduce space complexity
int sum (int n) {
    int i, s = 0;
    for (i = 1; i <= n; i++) {
        s = s + i;
    }
    return s;
}

//USING FORMULA : Optimal method
int sum1 (int n) {
    return n * (n + 1)/2;
}
