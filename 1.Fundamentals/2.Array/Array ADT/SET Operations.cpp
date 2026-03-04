#include "Array Initialisation.hpp"
#include "SET Operations.hpp"
#include <iostream>
#include <vector>

using namespace std;

void set_array::Show_result(int *array, int length) {
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int* set_array::Union(int &resultLen) {
    int *result = new int[len1 + len2];
    
    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2) {
        if (SET1[i] < SET2[j]) {
            result[k++] = SET1[i++];
        }
        else if (SET1[i] > SET2[j]) {
            result[k++] = SET2[j++];
        }
        else {
            result[k++] = SET1[i++];
            j++;
        }
    }
    // Remaining elements
    while (i < len1) {
        result[k++] = SET1[i++];
    }
    while (j < len2) {
        result[k++] = SET2[j++];
    }
    resultLen = k;
    return result;
}

int* set_array::Intersection(int &resultLen) {
    int *result = new int[len1 + len2];
    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2) {
        if (SET1[i] < SET2[j]) {
            i++;
        }
        else if (SET1[i] > SET2[j]){
            j++;
        }
        else if (SET1[i] == SET2[j]){
            result[k++] = SET1[i++];
            j++;
        }
    }
    resultLen = k;
    return result;
}


int* set_array::Difference(int &resultLen) {
    int *result = new int[len1 + len2];
    int i = 0, j = 0, k = 0;
    
    while (i < len1 && j < len2) {
        if (SET1[i] < SET2[j]) {
            result[k++] = SET1[i++];
        }
        else if (SET1[i] > SET2[j]) {
            j++;
        }
        else{
            i++; j++;
        }
    }
    while (i < len1) {
        result[k++] = SET1[i++];
    }
    resultLen = k;
    return result;
}
