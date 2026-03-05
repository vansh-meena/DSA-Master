#include "String Operations.hpp"
#include <iostream>

using namespace std;

//LENGTH OF A STRING
int string_Op::string_length (char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    int length = i;
    return length;
}

//TO UPPERCASE LETTERS
char* string_Op::upper_to_lower (char *str) {
    int j = 0;
    while (str[j] != '\0') {
        if (int(str[j]) < 92) {
            str[j] = char(int(str[j]) + 32);
            j++;
        }
        else{
            j++;
        }
    }
    return str;
}

//TO LOWERCASE LETTERS
char* string_Op::lower_to_upper (char *str) {
    int k = 0;
    while (str[k] != '\0') {
        if (int(str[k]) >= 97 && int(str[k]) <= 122) {
            str[k] = char(int(str[k]) - 32);
            k++;
        }
        else{
            k++;
        }
    }
    return str;
}

//COUNTING VOVELS AND CONSONANTS
pair<int, int> string_Op::count_vowels_consonsnts (char *str) {
    int vcount = 0 , ccount = 0, m = 0;
    while (str[m] != '\0'){
        if (str[m] == 'a' || str[m] == 'e' || str[m] == 'i' || str[m] == 'o' || str[m] == 'u' || str[m] == 'A' || str[m] == 'E' || str[m] == 'I' || str[m] == 'O' || str[m] == 'U') {
            vcount++;
            m++;
        }
        else if ( (int(str[m]) >= 97 && int(str[m]) <= 122) || (int(str[m]) >= 65 && int(str[m]) <= 90) ) {
            ccount++;
            m++;
        }
        else {
            m++;
        }
    }
    return {vcount, ccount};
}

//COUNTING NUMBER OF WORDS
int string_Op::number_of_words (char *str) {
    int p = 0, wcount = 1;
    while (str[p] != '\0') {
        if (p > 0 && str[p] == ' ' && str[p-1] != ' ') {
            wcount++;
        }
        p++;
    }
    return wcount;
}

//VALIDATING A STRING
bool string_Op::valid (char *name) {
    int i = 0;
    while (name[i] != '\0') {
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57)) {
            return false;
        }
        i++;
    }
    return true;
}

//REVERSING OF A STRING
char* string_Op::reverse_of_string (char *str) {
//        char reverse [sizeof(str)];
        int i = 0, j;
        while (str[i] != '\0') {
            i++;
        }
        i--;
        
//        Method 1 ---> using diffrent empty string
//        for (j = 0; i >= 0; i--, j++) {
//            reverse[j] = str[i];
//        }
//        reverse[j] = '\0';
                
//        Method 2 ---> using same string
        for (j = 0; j <= i; j++, i--) {
            char temp = str[j];
            str[j] = str[i];
            str[i] = temp;
        }
    return str;
}

//STRING PALINDROME
void string_Op::string_palindrome (char *str) {
    upper_to_lower(str);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != str[len - 1 - i]) {
            cout << "Not a Palindrome!" << endl;
            return;
        }
    }
    cout << "It is a Palindrome" << endl;
}

//DUPLICATE CHARACTER IN STRING
void string_Op::duplicate_in_string (char *str) {
    vector<int> result;
    //ITERATIVE METHOD
//    int i, j;
//    int count = 0;
//    for (i = 0; str3[i] != '\0'; i++) {
//        for (j = i + 1; str3[j] != '\0'; j++) {
//            if (str3[i] == str3[j]) {
//                count++;
//                break;
//            }
//        }
//    }
//    cout << count << endl;
    
    //HASH TABLE METHOD
    int H[26] = {0};
    upper_to_lower(str);
    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] >= 'a' && str[k] <= 'z') {
            H[str[k] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (H[i] > 1) {
            cout << char(i + 'a') << " : " << H[i] << endl;
        }
    }
    
    //BITS METHOD
//    long int h = 0, x = 0;
//    for (int i = 0; str3[i] != '\0'; i++) {
//        x = 1;
//        x = x << (str3[i] - 'a');
//        if ((x & h) > 0) {
//            cout << str3[i] << " is duplicate" << endl;
//        }
//        else {
//            h = x|h;
//        }
//    }
}

//STRING ANAGRAM
void string_Op::anagram_string (char *str1, char *str2) {
    int H[26] = {0};
    if (string_length(str1) != string_length(str2)) {
        cout << "Not an Anagram!" << endl;
        return;
    }
    upper_to_lower(str1);
    upper_to_lower(str2);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            H[str1[i] - 'a']++;
        }
    }
    for (int j = 0; str2[j] != '\0'; j++) {
        if (str2[j] >= 'a' && str2[j] <= 'z') {
            H[str2[j] - 'a']--;
        }
    }
    
    for (int k = 0; k < 26; k++) {
        if (H[k] != 0) {
            cout << "Not an Anagram!" << endl;
            return;
        }
    }
    cout << "Strings are Anagram" << endl;
}

//PERMUTATION OF STRING
void string_Op::permutation_of_string (char *str, int k) {
    static int X [10] = {0};
    static char res [10];
    int i;
    if (str[k] == '\0') {
        res[k] = '\0';
        cout << res << endl;
    }
    else {
        for (i = 0; str[i] != '\0'; i++) {
            if (X[i] == 0) {
                res[k] = str[i];
                X[i] = 1;
                permutation_of_string(str, k+1);
                X[i] = 0;
            }
        }
    }
}
