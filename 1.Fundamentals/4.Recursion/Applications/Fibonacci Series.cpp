#include "Fibonacci Series.hpp"
#include <iostream>

using namespace std;

//USING RECURSION : slowest time complexity -> O(2^n)
int fibonacci (int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else{
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}


//USING MEMORIZATION : better than normal recursion avoid excessive calling of functions. time complexity -> O(n)
int memorization_fibonacci (int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    }
    else{
        if (F[n - 2] == -1) {
            F[n - 2] = memorization_fibonacci(n - 2);
        }
        if (F[n - 1] == -1) {
            F[n - 1] = memorization_fibonacci(n - 1);
        }
        
        return memorization_fibonacci(n - 2) + memorization_fibonacci(n - 1);
    }
}

//USING LOOP : most efficient cause it avoids recursive overheads. time complexity -> O(n)
int iterative_fibonacci (int n) {
    int t0 = 0, t1 = 1, x = 0;
    if (n <= 1) return n;
    for (int i = 2; i <= n ; i++) {
        x = t0 + t1;
        t0 = t1;
        t1 = x;
    }
    return x;
}
