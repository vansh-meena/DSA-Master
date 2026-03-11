#include "Tail recursion.hpp"
#include <iostream>

using namespace std;

//->If a recursive function is calling itself and that recursive call is the last statement in a function then it is called as tail recursion.

//->All the function will be performing on the calling time itself.

//->Tail v/s loop : -> Tail recursion can easily converted into loops as its structure and syntax is almost same.
//                  -> Time Complexity same = O(n).
//                  -> Space taken by tail is O(n) where as the space for loops is O(1).
//                  -> Prefer to use loop in case of tail.

void tail (int n){
    if (n > 0){
        cout << n << endl;
        tail(n - 1);
    }
}
