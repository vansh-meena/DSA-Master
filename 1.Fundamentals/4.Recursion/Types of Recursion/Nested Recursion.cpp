#include "Nested Recursion.hpp"
#include <iostream>

using namespace std;

//Nested recursion occurs when a recursive function calls itself inside the parameters of another recursive call.
//f(f(n-1)) → the function f is called inside another call of f

int nested (int n) {
    if (n > 100) {
        return n - 10;
    }
    else{
        return nested( nested(n + 11));
    }
    return 0;
}

