//
//  Structure.hpp
//  C and C++ concepts
//
//  Created by Vansh Meena on 23/01/26.
//

#ifndef Structure_hpp
#define Structure_hpp

#include <stdio.h>
struct Card {
    int face; // 1..13
    int suit; // 1..4
};

//const char* faces[] = { "", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
//const char* suits[] = { "", "Spade", "Club", "Diamond", "Heart" };

void printDeck() ;
#endif /* Structure_hpp */
