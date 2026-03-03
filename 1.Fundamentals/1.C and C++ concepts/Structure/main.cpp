#include "Structure as parameter.hpp"
#include "Structure and Function.hpp"
#include <iostream>

using namespace std;

int main() {
    
    rectangle r;
    initialize(&r, 10, 5);
    int a = area(r);
    cout << "Area = " << a << endl;
    changelenght(&r, 20);
    
    return 0;
}
