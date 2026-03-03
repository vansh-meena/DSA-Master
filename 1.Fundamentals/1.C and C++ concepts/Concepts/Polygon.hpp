
#ifndef Polygon_hpp
#define Polygon_hpp

#include <stdio.h>
class Polygon {
public:
    Polygon(int l, int b);
    int area() const;
    int perimeter() const;
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();

private:
    int length;
    int breadth;   
};
#endif /* Polygon_hpp */
