#ifndef demo_hpp
#define demo_hpp

#include <iostream>

class Node{
private:
    int data;
    Node *next;
public:
    void create();                                  //MANUAL METHOD
    void create(int A[], int n);                    //ARRAY TO LINKED LIST
    int no_of_Nodes(Node *p);                       //COUNTING N0. OF NODES
    int sum_of_Elements(Node *p);                   //SUM OF ALL ELEMENTS OF THE LINKED LIST
    int max_Element(Node *p);                       //MAXIMUM ELEMENTS IN LINKED LIST
    int min_Element(Node *p);                       //MINIMUM ELEMENTS IN LINKED LIST
    void linear_Search(Node *p);                    //LINEAR SEARCH
    int Rlinear_search(Node *p, int key);           //RECURSIVE LINEAR SEARCH
    void insert(Node *p, int index, int element);   //INSERT IN LINKED LIST AT A GIVEN INDEX
    void append(int element);                       //INSERT THE ELEMENT AT END OF THE LIST
    void display(Node *p);                          //DISPLAYING LINKED LIST
};
extern Node *head;
extern Node *last;

#endif /* demo_hpp */
