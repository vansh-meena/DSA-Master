//
//  Array Initialisation.hpp
//  Array ADT
//
//  Created by Vansh Meena on 09/02/26.
//

#ifndef Array_Initialisation_hpp
#define Array_Initialisation_hpp

#include <stdio.h>
class Array {
private:
    int *A;
    int size;
    int length;
    int swap (int *x, int *y);
public:
    Array()
    {
        size=10;
        length=0;
        A=new int[size];
    }
    Array(int sz)
    {
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array()
    {
        delete []A;
    }
    void display();
    void append(int x);
    void insert(int idx, int x);
    void delete_element (int idx);
    void get(int idx);
    void set(int idx, int x);
    void max();
    void min();
    void sum();
    void average();
    void reverse ();
    void leftshift ();
    void rightshift();
    void leftrotate ();
    void rightrotate();
    int LinearSearch (int key);
    int BinarySearch (int key);
    int RBinarySearch (int l, int h, int key);
    
    void sorted_insert ();
    void merge ();
};
#endif /* Array_Initialisation_hpp */

