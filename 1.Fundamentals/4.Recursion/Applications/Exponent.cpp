#include "Exponent.hpp"
#include <iostream>

using namespace std;

int exponent (int m, int n) {
    if (n == 0) {
        return 1;
    }
    return exponent(m , n - 1) * m;
}


//This method have less time and space complexity.
int exponent1 (int m, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return exponent1(m * m, n / 2);
    }
    else{
        return m * exponent1(m * m, (n - 1) / 2);
    }
}


//USING LOOP
int exp (int m, int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * m;
    }
    return result;
}

