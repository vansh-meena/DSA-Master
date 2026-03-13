#include "Sum_of_N_Natural_Number.hpp"
#include "Factorial.hpp"
#include "Exponent.hpp"
#include "Taylor Series.hpp"
#include "Fibonacci Series.hpp"
#include "Combination Formula.hpp"
#include "Tower of Hanoi.hpp"
#include "Quiz.hpp"
#include <iostream>

using namespace std;

int main() {
    
    int a = sum_of_n_natural_number(4);
    cout << a << endl;
    
    int b = factorial(5);
    cout << b << endl;
    
    int c = exponent(2 , 10);
    cout << c << endl;

    int d = e(2,4);
    cout << d << endl;

    int e = fibonacci(5);
    cout << e << endl;
    
    int f = recursive_Combination(5, 5);
    cout << f << endl;
    
    ToH(3, 1, 2, 3);
    
    int a = 5;
    
    fun(3);
    
    return 0;
}
