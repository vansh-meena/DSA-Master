#include "demo.hpp"
#include <stdio.h>

using namespace std;

int Node::max_Element(Node *p) {
    
    if (p == NULL) return INT_MIN;
    
    //USING LOOP
    int max = INT_MIN;
    while (p != 0) {
        if (p->data > max) {
            max = p->data;
        }
        p = p->next;
    }
    return max;
    
    //USING RECURSION
//    if (p == 0) {
//        return INT_MIN;
//    }
//    max = max_Element(p->next);
//    return max > p->data ? max : p->data;   //TERNARY OPERATOR (?:) -> it is a shorthand for if-else.
                                            //                      -> condition ? value_if_true : value_if_false
}


int Node::min_Element(Node *p) {
    
    if (p == NULL) return INT_MAX;
    
    //USING LOOP
    int min = p->data;
    while (p != 0) {
        if (p->data < min) {
            min = p->data;
        }
        p = p->next;
    }
    return min;
    
    //USING RECURSION
//    int x = min_Element(p->next);
//    return (x < p->data) ? x : p->data;
}

