#include "Pointer to a Structure.hpp"
#include <iostream>

using namespace std;

int Pointer_to_Structure () {
    
    rectangle *p;
    p = new rectangle;
    
    p -> length = 10;
    p -> breath = 20;
    
    cout << p -> length << endl;
    cout << p -> breath << endl;
    cout << "Area : " << p->length * p->breath << endl;
    
    return 0;
}
