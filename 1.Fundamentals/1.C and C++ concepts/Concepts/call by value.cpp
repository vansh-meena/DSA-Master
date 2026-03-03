#include "call by value.hpp"
#include <iostream>

using namespace std;

/*-----> CALL BY VALUE :  -> In call by value actual parameters will not be modified if any changes are done to the formal parameters. */

void swap_using_value(int x , int y){
    int temp = x;
    x = y;
    y = temp;
}
