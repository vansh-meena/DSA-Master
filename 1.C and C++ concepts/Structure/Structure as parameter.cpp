#include "Structure as parameter.hpp"
#include <iostream>

using namespace std;

//Calculate the area of rectangle
//It access the data of structure cause sence it is CALL BY ADDRESS
int area (struct rectangle r) {
    return r.length * r.breath;
}
