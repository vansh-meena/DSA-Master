#include "String Operations.hpp"
#include "Bitwise Operations.hpp"
#include <iostream>

using namespace std;

int main() {

    int ch = 0;
    char str [20];
    char str1 [20];
    cout << "Enter a String : ";
    cin >> str;
    string_Op r(str);
    do {
        cout << "\nMenu" << endl;
        cout << "1. String Length" << endl;
        cout << "2. Uppercase to Lowercase" << endl;
        cout << "3. Lowercase to Uppercase" << endl;
        cout << "4. Count Number of Vowels and Consonants" << endl;
        cout << "5. Number of Words" << endl;
        cout << "6. Valid or Invalid String" << endl;
        cout << "7. Reverse of String" << endl;
        cout << "8. Duplicate Character" << endl;
        cout << "9. Palindrome" << endl;
        cout << "10. Anagram" << endl;
        cout << "11. Exit" << endl;
        
        cout << "Enter your choice : ";
        cin >> ch;
        cout<<endl;
        
        switch (ch) {
            case 1:
                cout << "Length : " << r.string_length(str) << endl;
                break;
            case 2:
                cout << "Upper to Lower : " << r.upper_to_lower(str) << endl;
                break;
            case 3:
                cout << "Lower to Upper : " << r.lower_to_upper(str) << endl;
                break;
            case 4:{
                pair<int,int> result = r.count_vowels_consonsnts(str);
                cout << "Vowels : " << result.first << endl;
                cout << "Consonants : " << result.second << endl;
                break;
            }
            case 5:
                cout << "Number of words : " << r.number_of_words(str) << endl;
                break;
            case 6:
                if (r.valid(str)) {
                    cout << "Valid String" << endl;
                }
                else{
                    cout << "Invalid String" << endl;
                }
                break;
            case 7:
                cout << "Reverse : " << r.reverse_of_string(str) << endl;
                break;
            case 8:
                cout << "Duplicate character" << endl;
                r.duplicate_in_string(str);
                break;
            case 9:
                r.string_palindrome(str);
                break;
            case 10:
                cout << "Enter another string : ";
                cin >> str1;
                r.anagram_string(str, str1);
                break;
            case 11:
                exit(0);
            default:
                break;
        }
    } while (ch < 11);
    
    
//    char temp = 'A';
//    cout << int(temp) << endl;
//    
//    char str [] = {'A', 'B', 'C', 'D'};
//    cout << sizeof(str) << endl;
//    
//    char str1 [] = "ABCD";
//    cout << sizeof(str1) << endl;

    //PERMUTATION OF STRING
//    char str2 [] = "ABC";
//    string_Op o;
//    cout << "Permutation of string " << endl;
//    o.permutation_of_string(str2, 0);
 

//    power_of_2();
    
//    single_unique_element();
    
    return 0;
}
