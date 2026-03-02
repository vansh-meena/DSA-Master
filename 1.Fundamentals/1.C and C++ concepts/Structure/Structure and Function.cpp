#include "Structure as parameter.hpp"
#include "Structure and Function.hpp"
#include <iostream>

using namespace std;

//Initialize the function
//It access the data of structure cause sence it is CALL BY ADDRESS
void initialize (rectangle *r, int l, int b){
    r -> length = l;
    r -> breath = b;
    cout << "Length = " << l << endl;
    cout << "Breath = " << b << endl;
}

//Change the length in the actual parameter and return it
//It makes a own copy of the structure value sence it is CALL BY VALUE
void changelenght(rectangle *r, int l){
    r -> length = l;
    cout << "Length changed to " << l << endl;
}
