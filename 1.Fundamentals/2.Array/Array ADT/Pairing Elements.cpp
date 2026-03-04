#include "Pairing Elements.hpp"
#include <iostream>

using namespace std;

//Using for loop
void pairing_elements () {
    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int n = sizeof(A) / sizeof(A[0]);
    int num = 10;
    cout << "Pair of elements" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (A[i] + A[j] == num) {
                cout << A[i] <<"," << A[j] << endl;
            }
        }
    }
}

//Using hash table
void Hashpairing_elements () {
    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int key = 10;
    int diff;
    int n = sizeof(A) / sizeof(A[0]);
    int H[16] = {0};
    cout << "Pair of elements" << endl;
    for (int i = 0; i < n; i++) {
        diff = key - A[i];
        if (H[diff] != 0 && diff > 0) {
            cout << A[i] << "," << diff << endl;
        }
        H[A[i]]++;
    }
}

//
