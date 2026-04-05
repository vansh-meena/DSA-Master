#include "demo.hpp"
#include <stdio.h>

using namespace std;

void Node::insert(Node *p, int idx, int element) {
    Node *t = new Node;
    t->data = element;
    
    if (idx < 0 || idx > no_of_Nodes(p)) {
        cout << "Index Out Of Bound!" << endl;
        return;
    }
    else if (idx == 0) {
        t->next = head;
        head = t;
        
        //Update last if null
        if (last == NULL){
            last = t;
        }
        return;
    }
    else{
        p = head;
        for (int i = 0; i < idx - 1 && p; i++) {
            p = p->next;
        }
        if (p) {
            t->next = p->next;
            p->next = t;
        }
    }
}

void Node::append(int element) {
    Node *t;
    
    t = new Node;
    t->data = element;
    t->next = NULL;
    
    if (head == NULL) {
        head = last = t;
    }
    else{
        last->next = t;
        last = t;
    }
}
