#include "demo.hpp"

using namespace std;

Node *head = NULL;
Node *last = NULL;

/**======== MANUAL CREATED LINKED LIST========**/

void Node::create() {
    Node *p = new Node;
    Node *q = new Node;
    Node *r = new Node;
    Node *s = new Node;
    
    p->data = 10;
    p->next = q;
    
    q->data = 20;
    q->next = r;
    
    r->data = 30;
    r->next = s;
    
    s->data = 40;
    s->next = NULL;
    
    head = p;
}



/**======== ARRAY TO LINKED LIST========**/

void Node::create(int A[], int n) {
    
    int i;
    Node *t;                    //*t -> Temprory node useful for creating a new node.
                                //*last -> Pointing on the last node. Used to add new node at the end of the linked list.
    
    head = new Node;            //Creating HEAD node.
    head->data = A[0];          //Assigning first element of array to HEAD node.
    head->next = NULL;          //Assigning NULL to next (since it is HEAD node so there is no next).
    last = head;                //making last as head.
    
    for (i = 1; i < n; i++) {
        t = new Node;           //Creating new node.
        t->data = A[i];         //Iteratively assigning elements of array as node data.
        t->next = NULL;
        last->next = t;         //Assigning t as last next.
        last = t;               //Making t as last.
    }
}



void Node::display(Node *p) {
    
    //USING LOOP
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    
    //USING RECURSION
//    if (p != 0) {
////        display(p->next);       //HEAD Recursion : It prints the linked list in reverse order.
//        
//        cout << p->data << " ";
//        
//        display(p->next);       //TAIL Recursion : It prints the linked list in normal order.
//    }
}

//FOR LOOP : TIME COMPLEXITY -> O(n)
//           SPACE COMPLEXITY -> O(1)

//FOR RECURSION : TIME COMPLEXITY -> O(n)
//                SPACE COMPLEXITY -> O(n+1)

