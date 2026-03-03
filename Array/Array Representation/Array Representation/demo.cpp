#include "demo.hpp"
#include <iostream>

using namespace std;

int demo() {
    int n;
    cout << "enter size of the array : ";
    cin >> n;
    
    int *p;
    p = new int[n];
    
    if (n <= 0) {
        cout << "To initialize the array the number of elements should be greater than 0." ;
    }
    else{
        for (int i = 0; i < n; i++) {
            cout << "enter a[" << i << "] element of array : ";
            cin >> p[i];
        }
        
        cout << "Array : [";
        for (int j = 0; j < n; j++) {
            cout << p[j] << " ";
        }
        cout << "]" << endl;
    }
    delete [] p;
    cout << "Memory released successfully!" << endl;
    return 0;
}
