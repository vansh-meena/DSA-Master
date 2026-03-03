#include "Structure.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;

const char* faces[] = { "", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
const char* suits[] = { "", "Spade", "Club", "Diamond", "Heart" };

void printDeck() {
    Card deck[52];
    int idx = 0;
    for (int suit = 1; suit <= 4; ++suit) {
        for (int face = 1; face <= 13; ++face) {
            deck[idx++] = { face, suit };
        }
    }

    for (int i = 0; i < 52; ++i) {
        cout << faces[deck[i].face] << " of " << suits[deck[i].suit] << endl;
    }
    
    
    /*----------MY APPROACH----------*/
}
//struct Cards{
//    int face;
//    int shade;
//    int color;
//};
//
//int printDeck (void){
//    //spade = 1, club = 2, diamond = 3, heart = 4
//    Cards deck[52] = {{1, 1, 0}, {2, 1, 0}, {3, 1, 0}, {4, 1, 0}, {5, 1, 0}, {6, 1, 0}, {7, 1, 0}, {8, 1, 0}, {9, 1, 0}, {10, 1, 0}, {11, 1, 0}, {12, 1, 0}, {13, 1, 0},
//                      {1, 2, 0}, {2, 2, 0}, {3, 2, 0}, {4, 2, 0}, {5, 2, 0}, {6, 2, 0}, {7, 2, 0}, {8, 2, 0}, {9, 2, 0}, {10, 2, 0}, {11, 2, 0}, {12, 2, 0}, {13, 2, 0},
//                      {1, 3, 1}, {2, 3, 1}, {3, 3, 1}, {4, 3, 1}, {5, 3, 1}, {6, 3, 1}, {7, 3, 1}, {8, 3, 1}, {9, 3, 1}, {10, 3, 1}, {11, 3, 1}, {12, 3, 1}, {13, 3, 1},
//                      {1, 4, 1}, {2, 4, 1}, {3, 4, 1}, {4, 4, 1}, {5, 4, 1}, {6, 4, 1}, {7, 4, 1}, {8, 4, 1}, {9, 4, 1}, {10, 4, 1}, {11, 4, 1}, {12, 4, 1}, {13, 4, 1},
//                    };
//
//    for (int i = 0; i < 52; i++) {
//        //Face values
//        if (deck[i].face == 1) {
//            cout<<"Ace of";
//        }
//        if (deck[i].face > 1 && deck[i].face <= 10) {
//            cout<<deck[i].face << " of";
//        }
//        if (deck[i].face == 11) {
//            cout<<"Jack of";
//        }
//        if (deck[i].face == 12) {
//            cout<<"Queen of";
//        }
//        if (deck[i].face == 13) {
//            cout<<"King of";
//        }
//        
//        //Suits values
//        if (deck[i].shade == 1) {
//            cout<<" Spade";
//        }
//        if (deck[i].shade == 2) {
//            cout<<" Club";
//        }
//        if (deck[i].shade == 3) {
//            cout<<" Diamond";
//        }
//        if (deck[i].shade == 4) {
//            cout<<" Heart";
//        }
//        
//        // Face values
//        switch (deck[i].face) {
//            case 1:  cout << "Ace of"; break;
//            case 11: cout << "Jack of"; break;
//            case 12: cout << "Queen of"; break;
//            case 13: cout << "King of"; break;
//            default: cout << deck[i].face << " of"; break; // 2–10
//        }
//
//        // Suit values
//        switch (deck[i].shade) {
//            case 1: cout << " Spade"; break;
//            case 2: cout << " Club"; break;
//            case 3: cout << " Diamond"; break;
//            case 4: cout << " Heart"; break;
//        }
//        
//        
//        //Color values
////        if (deck[i].color == 0) {
////            cout<<" Color Black";
////        }
////        else {
////            cout<<" Color Black";
////        }
//        cout<<endl;
//    }
//    cout << "face = " << deck[0].face << endl
//        << "shade = " << deck[0].shade << endl
//        << "color = " << deck[0].color << endl;
//
//
//
//    return 0;
//}
