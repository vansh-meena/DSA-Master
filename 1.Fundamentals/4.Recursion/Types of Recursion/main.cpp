#include "Tail recursion.hpp"
#include "Head recursion.hpp"
#include "Tree Recursion.hpp"
#include "Indirect Recursion.hpp"
#include "Nested Recursion.hpp"
#include <iostream>

using namespace std;

int main() {
    
    int a = 95;
    
    tail(a);
    
    head(a);
    
    tree(a);
    
    indirect1(a);
    
    int r = nested(a);
    cout << r << endl;
    
    
    
    return 0;
}
