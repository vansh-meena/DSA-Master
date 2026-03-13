#include "Factorial.hpp"
#include <iostream>

using namespace std;

int factorial (int n) {
    if (n == 0) {
        return 1;
    }
    return factorial(n - 1) * n ;
}

//USING LOOP
//int loop (int n){
//    int i, f = 1;
//    if (n == 0) {
//        return 1;
//    }
//    for (i = 1; i <= n; i++) {
//        f = f * i;
//    }
//    return f;
//}
