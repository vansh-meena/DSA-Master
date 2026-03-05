#include "Bitwise Operations.hpp"
#include<iostream>

using namespace std;

//CHECKING WEATHER A NUMBER IS A POWER OF 2 OR NOT
void power_of_2(){
    int a, p = 0;
    cout << "Enter a number : ";
    cin >> a;
    if (a > 0 && (a & (a - 1)) == 0) {
        while (a > 1) {
            a = a >> 1;
            p++;
        }
        cout << "Power of 2 is "<< p << endl;
    }
    else {
        cout << "Not a power of 2" << endl;
    }
}

//UNIQUE ELEMENT IN AN ARRAY
void single_unique_element () {
    int arr [] = {2,3,4,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = 0;
    for(int i = 0; i < n; i++){
        result ^= arr[i];
    }
    cout << "Unique element = " << result << endl;
    
}

//DUPLICATE CHARACTER IN A STRING
