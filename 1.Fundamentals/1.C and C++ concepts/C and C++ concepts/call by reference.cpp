#include "call by reference.hpp"
#include <iostream>

using namespace std;

/*-----> CALL BY REFERENCE :  -> To make a function as call by reference we just need to add & in the parameters, these are the references. */

void swap_using_reference(int &x , int &y){
    int temp = x;
    x = y;
    y = temp;
}
