#include "Increasing_size_of_Array.hpp"
#include <iostream>

using namespace std;

//Increasing the size of an array.
int fun () {
    //Initialized an array p in heap of size 5.
    int *p = new int[5];
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;
    
    
    //Initialize an array q in heap of size 10.
    int *q = new int(10);
    
    //Moving the elements of p in q.
    for (int i = 0; i < 10; i++) {
        q[i] = p[i];
    }
    
    //Releasing the memory of p.
    delete [] p;
    
    //Moving the pointer of p to q and reassigning the pointer of q to NULL.
    p = q;
    q = NULL;
    
    for (int i = 0; i < 10; i++) {
        cout << p[i] << endl;
    }
    
    return 0;
}
