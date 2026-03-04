#include "Array Initialisation.hpp"
#include <iostream>

using namespace std;

//SWAP
int Array::swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

//DISPLAY
void Array::display() {
    cout << "Element of array : ";
    for (int i = 0; i < length; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

//APPEND
void Array::append(int x) {
    if(length<size)
        A[length++]=x;
}

//INSERT
void Array::insert (int idx, int n) {
    if (n < length && n < size) {
        for (int i = length; i > idx; i--) {
            A[i] = A[i - 1];
        }
    }
    if (n > size) {
        cout << "Index out of bound." << endl;
    }
    if (n > length) {
        cout << "Use append to insert the element at this index!" << endl;
    }
    length++;
    A[idx] = n;
}

//DELETE
void Array::delete_element (int idx) {
    int x =0;
    if (idx >= 0 && idx < length) {
        x = A[idx];
        for (int i = idx; i < length; i++) {
            A[i] = A[i + 1];
        }
        length--;
    }
}

//GET ELEMENT
void Array::get (int idx) {
    if (idx >= 0 && idx < length) {
        cout << A[idx] << endl;
    }
    else{
        cout << "Index out of bound!" << endl;
    }
}

//SET ELEMENT
void Array::set (int idx, int n) {
    if (idx >= 0 && idx < length) {
        A[idx] = n;
        cout << n << " set on the index " << idx << endl;
    }
    else{
        cout << "Index out of bound!" << endl;
    }
    
}

//MAXIMUM
void Array::max () {
    int i, max = A[0];
    for (i = 1; i < length; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    cout << "Maximum value in the array is " << max << endl;
}

//MINIMUM
void Array::min () {
    int i, min = A[0];
    for (i = 1; i < length; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }
    cout << "Minimum value in the array is " << min << endl;
}

//SUM OF ELEMENT
void Array::sum () {
    int i, sum = 0;
    for (i = 0; i < length; i++) {
        sum = sum + A[i];
    }
    cout << "Sum of all element of the array is " << sum << endl;
}

//AVERAGE OF ELEMENTS
void Array::average () {
    int i, sum = 0;
    float avg;
    for (i = 0; i < length; i++) {
        sum = sum + A[i];
    }
    avg = float(sum) / float(length);
    cout << "Average of all element of the array is " << avg << endl;
}

//REVERSE OF AN ARRAY
void Array::reverse () {
    
    //using a different array to copy elements.
//    int B[length];
//    //reverse copying elements form A to B.
//    for (int i = length - 1, k = 0; i >= 0; i--, k++) {
//        B[k] = A[i];
//    }
//    //copying elements of B to A.
//    for (int j = 0; j < length; j++) {
//        A[j] = B[j];
//    }
    
    //swaping the last and the first element to reverse
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        swap(& A[i],& A[j]);
    }
}

//LEFT SHIFT (move element of the array to left)
void Array::leftshift () {
    int shift;
    cout << "Enter number of indexes to shift : ";
    cin >> shift;
    
    if (shift >= length) {
        // If shift is bigger than length → everything becomes zero
        for (int i = 0; i < length; i++)
            A[i] = 0;
        return;
    }
    
    // Shift elements
    for (int i = 0; i < length - shift; i++) {
        A[i] = A[i + shift];
    }
    
    // Fill last positions with 0
    for (int i = length - shift; i < length; i++) {
        A[i] = 0;
    }
}

//LEFT SHIFT (move element of the array to left)
void Array::rightshift () {
    int shift;
    cout << "Enter number of indexes to shift : ";
    cin >> shift;

    if (shift >= length) {
        // If shift >= length → all become 0
        for (int i = 0; i < length; i++)
            A[i] = 0;
        return;
    }
    
    // Shift elements (move from end)
    for (int i = length - 1; i >= shift; i--) {
        A[i] = A[i - shift];
    }

    // Fill first 'shift' elements with 0
    for (int i = 0; i < shift; i++) {
        A[i] = 0;
    }
}

//LEFT ROTATE (move elements of the array to left and the first element will come at back)
void Array::leftrotate() {
    int rotate;
    cout << "Enter number of indexes to rotate : ";
    cin >> rotate;

    // Handle large rotate values
    rotate = rotate % length;

//--->USING EXTRA ARRAY
    if (rotate == 0)
        return;

    int B[length];

    // Store first 'rotate' elements
    for (int i = 0; i < rotate; i++) {
        B[i] = A[i];
    }

    // Shift remaining elements left
    for (int i = 0; i < length - rotate; i++) {
        A[i] = A[i + rotate];
    }

    // Put stored elements at end
    for (int i = 0; i < rotate; i++) {
        A[length - rotate + i] = B[i];
    }
    
//--->WITHOUT USING EXTRA ARRAY
//    while (rotate--) {
//        int first = A[0];
//
//        for (int i = 0; i < length - 1; i++) {
//            A[i] = A[i + 1];
//        }
//
//        A[length - 1] = first;
//    }
}

//RIGHT ROTATE (move elements of the array to right and the last element will come at front)
void Array::rightrotate() {
    int rotate;
    cout << "Enter number of indexes to rotate : ";
    cin >> rotate;

    // Handle large rotate values
    rotate = rotate % length;

//--->USING EXTRA ARRAY
    if (rotate == 0)
        return;

    int B[length];

    // Store last 'rotate' elements
    for (int i = 0; i < rotate; i++) {
        B[i] = A[length - rotate + i];
    }
    
    // Shift remaining elements right
    for (int i = length - 1; i >= rotate; i--) {
        A[i] = A[i - rotate];
    }

    // Put stored elements at beginning
    for (int i = 0; i < rotate; i++) {
        A[i] = B[i];
    }

//--->WITHOUT USING EXTRA ARRAY
//    while (rotate--) {
//        int last = A[0];
//
//        for (int i = length; i > 0; i--) {
//            A[i] = A[i - 1];
//        }
//
//        A[0] = last;
//    }
}

//INSERT OPERATION IN A SORTED ARRAY
void Array::sorted_insert () {
    int idx, n;
    cout << "Enter index at which element to insert : ";
    cin >> idx;
    cout << "Enter element : ";
    cin >> n;
    
    int i = length - 1;
    for (; i > 0; i--) {
        if (A[i] > A[i-1]) {
            continue;
        }
        else{
            cout << "Unsorted Array!" << endl;
            return;
        }
    }
    while (A[i] > n) {
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = n;
}

//MERGING OF TOW ARRAYS
void Array::merge() {

    int B[15] = {1, 3, 5, 7, 9, 11, 13, 15, 18, 21, 23, 26, 27, 28, 29};
    int C[30];

    int i = 0, j = 0, k = 0;

    // Merge while both arrays have elements
    while (i < length && j < 15) {

        if (A[i] < B[j]) {
            C[k++] = A[i++];
        }
        else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements of arr
    while (i < length) {
        C[k++] = A[i++];
    }

    // Copy remaining elements of B
    while (j < 15) {
        C[k++] = B[j++];
    }
    
    cout << "Merged Array : ";
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
}

//LINEAR SEARCH
int Array::LinearSearch (int key) {
    for (int i = 0; i < length; i++) {
        if (key == A[i]) {
            cout << key << " found at index " << i << endl;
            return 0;
        }
    }
    cout << "Elemnet not found!" << endl;
    return 0;
}

//BINARY SEARCH
int Array::BinarySearch (int key) {
    int mid;
    int l = 0;
    int h = length - 1;
    
    cout << "Enter element to search : ";
    cin >> key;
    
    while (l <= h){
        mid = (l + h) / 2;
        if (A[mid] == key) {
            cout << key << " found at " << mid << " index." << endl;
            return 0;
        }
        else if (A[mid] > key) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << "Element not found!" << endl;
    return 0;
}

//BINARY SEARCH USING RECURSSION
int Array::RBinarySearch (int l, int h, int key) {
    int mid;
    if (l <= h) {
        mid = (l + h) / 2;
        if (key == A[mid]) {
            return mid;
        }
        else if (key > A[mid]) {
            return RBinarySearch(mid + 1, h, key);
        }
        else{
            return RBinarySearch(l, mid - 1, key);
        }
    }
    return 1;
}

