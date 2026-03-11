#include "Head recursion.hpp"
#include <iostream>

using namespace std;

//->If a recursive function is calling itself and that recursive call is the first statement in a function then it is called as head recursion.

//->All the function will be performing at returning time itself.

//->Head v/s loop : -> Although it is possible but It is diﬃcult to convert head recursion into a loop function

void head (int n){
    if (n > 0){
        cout << n << endl;
        head(n - 1);
    }
}
