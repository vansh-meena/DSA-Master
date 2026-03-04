#include "Missing Element in Array.hpp"
#include<iostream>

using namespace std;

//Single Missing element in a sorted array of n natural number starting from 1.
void miss1() {
    int A[11] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11};
    int sum = 0;
    int n = 11;
    int x;
    for (int i = 0; i < n; i++) {
        sum += A[i];
    }
    int s = n*(n + 1)/2;
    x = s - sum;
    cout << "Missing elements is " << x << endl;
}

//Single Missing element in a sorted array of n natural number starting with any digit.
void miss2() {
    int B[10] = {6, 7, 8, 9, 11, 12, 13, 14, 15};
    int diff = 6;
    int n = 10;
    for (int i = 0; i < n; i++) {
        if (B[i] - i != diff) {
            cout << "Missing element is " << i+diff << endl;
            break;
        }
    }
}

//One or more Missing element in a sorted array of n natural number starting with any digit.
void miss3() {
    int C[15] = {6, 7, 8, 9, 11, 12, 13, 14, 15, 18, 19, 20};
    int diff = 6;
    int n = 15;
    for (int i = 0; i < n; i++) {
        if (C[i] - 1 != diff) {
            while (diff < C[i] - 1) {
                cout << "Missing element is " << i+diff << endl;
                diff++;
            }
            break;
        }
    }
}

//One or more Missing element in a unsorted array of n natural number starting with any digit.
//In this concept of hash table is used. Created an array of size of greatest element in the searching array initialized with zero as parsing through increment the value of hash table on the index of the element pasred.
void miss4() {
    int D[] = {6, 7, 9, 1, 11, 5, 2, 10, 15, 4, 8};
    int l = 1;
    int h = 15;
    int n = sizeof(D) / sizeof(D[0]);
    int H[15] = {0};
    for (int i = 0; i < n; i++) {
        H[D[i]]++;
    }
    for (int j = l; j <= h; j++) {
        if (H[j] == 0) {
            cout << "Missing element is " << j << endl;
        }
    }
}
