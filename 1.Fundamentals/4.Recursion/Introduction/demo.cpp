#include "demo.hpp"
#include <iostream>

using namespace std;

//Loops and recursion both are very similar but a loop have only ascending face but a recursion have both ascending and descending phase.

void demo(int n){
    if (n > 0) {
        cout << n << endl;      //CALLING TIME (Ascending phase) : this statement will execute at the time of calling.
        
        demo(n - 1);            //Anything that is with calling function (any operation) it will we executed at returning time.
        
        cout << n << endl;      //RETURNING TIME (Descending phase) : this statement will execute at the time of returning.
    }
    //If the the calling function is after some statements then it is called "TAIL RECURSION"
    //If the the calling function is before some statements then it is called "HEAD RECURSION"
}
