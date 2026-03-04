#include "SingleScan min max.hpp"
#include <iostream>

using namespace std;

void singleScan_min_max () {
    int A[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    int min = A[0];
    int max = A[0];
    int n = sizeof(A) / sizeof(A[0]);
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
        else if (A[i] < min) {
            min = A[i];
        }
    }
    cout << "Minimun is " << min << endl;
    cout << "Maximum is " << max << endl;
}
