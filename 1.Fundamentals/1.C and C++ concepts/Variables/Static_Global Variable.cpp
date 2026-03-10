#include "Static_Global Variable.hpp"
#include <iostream>

using namespace std;

//STATIC VARIBLE -> a static variable is not recreated with each call. It is created only once at the loading time of the programme.

//GLOBAL VARIABLE -> behave similarly to static variables in recursion; there is only one single copy shared by all function calls but can be accessed by very function in the program.

//int x = 0;    ---> global variable
int fun1 (int n){
    static int x = 0;
    if (n > 0){
        x++;
        return fun1(n - 1) + x;
    }
    return 0;
}
