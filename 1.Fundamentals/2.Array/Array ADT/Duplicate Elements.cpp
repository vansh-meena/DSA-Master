#include "Duplicate Elements.hpp"
#include <iostream>

using namespace std;

int A[] = {34, 45, 5, 232, 45, 77, 12, 20, 34, 65, 99, 5, 34};
int l = 5;
int h = 232;
int duplicate[232] = {0};
int n = sizeof(A) / sizeof(A[0]);

void Finding_duplicate() {
    
    for (int i = 0; i < n; i++) {
        duplicate[A[i]]++;
    }
    cout << "Duplicate elements are ";
    for (int j = l; j < h; j++) {
        if (duplicate[j] > 1) {
            cout << j  << " ";
        }
    }
    cout << endl;
}

void Counting_duplicate () {
    cout << "Number of duplicate" << endl;
    for (int k = l; k < h; k++) {
        if (duplicate[k] > 1) {
            cout << k  << " : " << duplicate[k] << endl;
        }
    }
}

//void lectureMethod(){
//    cout << "Elements : times" << endl;
//    for (int i = 0; i < n-1; i++) {
//        int count = 1;
//        if (A[i] != -1) {
//            for (int j = i+1; j < n; j++) {
//                if (A[i] == A[j]) {
//                    count++;
//                    A[j] = -1;
//                }
//            }
//            if (count > 1) {
//                cout << A[i] << " : " << count << endl;
//            }
//        }
//    }
//}
