#ifndef String_Operations_hpp
#define String_Operations_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class string_Op{
private:
    char *str;
public:
    string_Op(){};
    string_Op (char *str){}
    int string_length (char *str);
    char* upper_to_lower (char *str);
    char* lower_to_upper (char *str);
    pair<int, int> count_vowels_consonsnts (char *str);
    int number_of_words (char *str);
    bool valid (char *name);
    char* reverse_of_string (char *str);
    void string_palindrome (char *str);
    void duplicate_in_string (char *str);
    void anagram_string (char *str1, char *str2);
    void permutation_of_string (char *str, int k);
    
};


#endif /* String_Operations_hpp */
