//
//  Class_using_template.hpp
//  Template
//
//  Created by Vansh Meena on 01/02/26.
//

#ifndef Class_using_template_hpp
#define Class_using_template_hpp

#include <stdio.h>

//The template, data member and member function are decleared here.
template <typename T>
class Arithmetic{
private:
    T a, b;
public:
    Arithmetic (T a, T b);
    T add ();
    T sub ();
};
#endif /* Class_using_template_hpp */
#include "Class_using_template.tpp"     //All the function defination is done in this .tpp file.
                                        //header file of .tpp file always put at the end of .hpp file.
