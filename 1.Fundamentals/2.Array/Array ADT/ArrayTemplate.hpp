//
//  ArrayTemplate.hpp
//  Array ADT
//
//  Created by Vansh Meena on 21/02/26.
//

#ifndef ArrayTemplate_hpp
#define ArrayTemplate_hpp

#include <iostream>
#include <stdio.h>

using namespace std;

template <typename T>
class arrayTemplate{
private:
    T *A;
    int sz;
    int len;
public:
    arrayTemplate(){
        sz = 10;
        A = new T[10];
        len = 10;
    }
    arrayTemplate(int size){
        size = sz;
        A = new T[sz];
        len = 0;
    }
    ~arrayTemplate(){
        delete [] A; 
    }
    void Insert (int idx, T x){
        if (idx >= 0 && idx < len) {
            for (int i = len; i > idx; i--) {
                A[i] = A[i - 1];
            }
        }
        if (idx > sz) {
            cout << "Index out of bound." << endl;
        }
        if (idx > len) {
            cout << "Use append to insert the element at this index!" << endl;
        }
        len++;
        A[idx] = x;
    }
    
    T Delete (int idx){
        T x = 0;
        if (idx >= 0 && idx < len) {
            x = A[idx];
            for (int i = idx; i < len; i++) {
                A[i] = A[i + 1];
            }
            len--;
        }
        return x;
    }
    
    void Display(){
        for (int i = 0; i < len; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};
#endif /* ArrayTemplate_hpp */
