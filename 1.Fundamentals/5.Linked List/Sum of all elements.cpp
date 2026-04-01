#include "demo.hpp"
#include <iostream>

using namespace std;

int Node::sum_of_Elements(Node *p) {
    int sum = 0;
    
    //USING LOOP
//    while (p != 0) {
//        sum += p->data;
//        p = p->next;
//    }
    
    //USING RECURSION
    if (p == 0) {
        return 0;
    }
    else{
        return sum_of_Elements(p->next) + p->data;
    }
    
    return sum;
}
