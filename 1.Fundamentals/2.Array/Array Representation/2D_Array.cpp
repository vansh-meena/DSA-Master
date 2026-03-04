#include "2D_Array.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>


using namespace std;

//NORMAL ARRAY INITIALISATION : Memory will be created like a single dimension array , but compiler will allow us to access that array as a 2D arrays with rows and columns.
int normal_method () {
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {8, 7, 6, 5}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


//POINTER ARRAY INITIALISATION : The pointer will be created inside heap memory and through that we can access , initialise and declare all the elements inside the array.
int pointer_method () {
    
    int *A[3];
    A[0] = new int(4);
    A[1] = new int(4);
    A[2] = new int(4);
    
    //Creating random integer
    random_device rd;                           //a source of randomness
    mt19937 gen(rd());                          //mt19937 = Mersenne Twister (very fast and high-quality pseudo-random number generator)
    uniform_int_distribution<> dist(1, 50);     //Distribution dist(gen) -> Returns one random integer

    //Storing the random generated integer in the array.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = dist(gen);
        }
    }
    
    //Printing Array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


//DOUBLE POINTER ARRAY INITIALISATION :  Here almost everything is inside the heap pointer. Here the pointer will be like a variable there is no new operator so it is created inside stack in the memory.
int double_pointer_method () {
    
    int **A;
    A = new int * [3];
    A[0] = new int(4);
    A[1] = new int(4);
    A[2] = new int(4);
    
    //Creating random integer
    random_device rd;                           
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 50);

    //Storing the random generated integer in the array.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = dist(gen);
        }
    }
    
    //Printing Array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
