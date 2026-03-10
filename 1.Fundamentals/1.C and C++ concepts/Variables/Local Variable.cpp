#include "Local Variable.hpp"
#include <iostream>

using namespace std;

//LOCAL VARIABLE -> Every time a recursive function is called, a new copy of its local variables (like the parameter n) is created within a new Activation Record on the stack

int fun (int n) {
    if ( n > 0){
        return fun(n - 1) + n;
    }
    return 0;
}
