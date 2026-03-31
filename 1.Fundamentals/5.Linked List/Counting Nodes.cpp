#include "demo.hpp"
#include <stdio.h>

using namespace std;

int Node::no_of_Nodes(Node *p) {
    int count = 0;
    
    //USING LOOP
//    while (p != 0) {
//        count++;
//        p = p->next;
//    }
    
    //USING RECURSION
    if (p == 0)
        return 0;
    else
       return no_of_Nodes(p->next) + 1;
    //counting is happening at returning time.
    
    return count;
}
