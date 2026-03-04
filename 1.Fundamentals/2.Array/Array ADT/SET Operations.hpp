#ifndef SET_Operations_hpp
#define SET_Operations_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class set_array{
private:
    int *SET1;
    int *SET2;
    int sz1;
    int sz2;
    int len1;
    int len2;
public:
    set_array(int size1, int size2){
        sz1 = size1;
        sz2 = size2;
        len1 = 0;
        len2 = 0;
        SET1 = new int[size1];
        SET2 = new int[size2];
    }
    ~set_array(){
        delete [] SET1;
        delete [] SET2;
    }
    void insertSET1(int n){
        if (len1 < sz1) {
            SET1[len1++] = n;
        }
    }
    void insertSET2(int n){
        if (len2 < sz2) {
            SET2[len2++] = n;
        }
    }
    void Show_result(int* array, int length);
    int* Union(int &resultLen);
    int* Intersection(int &resultLen);
    int* Difference(int &resultLen);
};
#endif /* SET_Operations_hpp */
