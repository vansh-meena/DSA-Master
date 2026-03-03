#include "call by address.hpp"
#include <iostream>

using namespace std;

/*-----> CALL BY ADERESS :  -> Here the address of actual parameters are passed to formal parameter and formal parameters must be pointers.
                            -> Any changes done inside function will modify the actual parameters.
                            -> Use to access values of different function indirectly using pointer.
                            -> suitable mechanism for modifying actual parameters*/
void swap_using_address(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
