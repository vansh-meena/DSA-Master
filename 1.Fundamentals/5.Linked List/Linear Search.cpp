#include "demo.hpp"
#include <stdio.h>

using namespace std;

//USING LOOP
void Node::linear_Search(Node *p) {
    int key, count = 0;
    Node *q = NULL;
    
    cout << "Enter element to search : ";
    cin >> key;
    
    while (p) {
        count++;
        if (key == p->data) {
            cout << key << " found at node " << count << endl;
            
            //Move to head if not alredy head node.
            if (q != NULL) {
                q->next = p->next;
                p->next = head;
                head = p;
            }
            return;
        }
        q = p;
        p = p->next;
    }
    cout << "ELEMENT NOT FOUND!" << endl;
}

//USING RECURSION
int Node::Rlinear_search(Node *p, int key) {
    if (p == NULL) {
        return NULL;
    }
    
    if (key == p->data) {
        return p->data;
    }
    
    return Rlinear_search(p->next, key);
}
