#include "Pointer.hpp"
#include <iostream>

using namespace std;

int Pointer () {
    int a = 5;
    int *p;
    int **q;
    p = &a;
    q = &p;
    
    cout << a << endl;      //data variable
    cout << *p << endl;     //address variable
    cout << **q << endl;    //pointer to pointer variable (accessing the element stored at the address of p)
    cout << p << endl;      //accessing address
    cout << *q << endl;     //accessing pointer address
    cout << q << endl;
    
    
    //-----> Acessing heap memory
    int *e;
    e = new int[5];         //The new keyword in C++ is used to dynamically allocate memory on the heap (also known as free store) for a variable or array of variables.
    cout << *e << endl;
    delete[] e;
    
    
    //----> using array
    int arr [5] = {2, 3, 4, 5, 6};
    int *t;
    t = arr;
    for (int i = 0; i < 5; i++) {
        cout << t[i] << endl;
    }
    
    //-----> using array with heap
    int *r;
    r = new int[5];
    r[0] = 2; r[1] = 4; r[2] = 6; r[3] = 8; r[4] = 10;
    for (int i = 0; i < 5; i++) {
        cout << r[i] << endl;
    }
    
    //*The size of the pointer is independent of the datatype.
    
    
    //----> REFERENCE VARIABLES : refer to a data variable (simply a different or nick name for a variable)
    int x = 10;
    int &y = x;
    cout << y << endl;
    r++;
    cout << x << endl;
    return 0;
}
