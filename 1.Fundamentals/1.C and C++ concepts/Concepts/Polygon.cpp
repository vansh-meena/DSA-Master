#include "Polygon.hpp"
#include <iostream>

using namespace std;

//The :: operator is the scope resolution operator. It’s used to tell the compiler exactly which scope a name (like a function or variable) belongs to.

Polygon::Polygon(int l, int b) {
    cout << "Enter Length and Breadth : ";
    cin >> length >> breadth;
}


int Polygon::area() const {
    return length * breadth;
}

int Polygon::perimeter() const {
    return 2 * (length + breadth);
}

void Polygon::setLength(int l) {
    length = l;
    cout << "New Length: " << length << endl;
}

void Polygon::setBreadth(int b) {
    breadth = b;
    cout << "New Breadth: " << breadth << endl;
}

int Polygon::getLength(){
    return length;
}

int Polygon::getBreadth(){
    return breadth;
}
