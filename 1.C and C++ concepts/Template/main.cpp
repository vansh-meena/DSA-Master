#include "Class_using_template.hpp"
#include <iostream>

using namespace std;

int main() {
    
    Arithmetic<int> o(4, 2);
    cout << "Additon = " << o.add() << endl;
    
    Arithmetic<float> p(1.33, 0.77);
    cout << "Subtraction = " << p.sub() << endl;
    
    return 0;
}
