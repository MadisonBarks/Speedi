//
//  Utility.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 6/10/14.
//
//

#include "Utility.h"

char * Utility::concat(char string1[], char string2[]) {
    char finalArray[(sizeof(&string1) - 1) +
                    (sizeof(&string2) - 1) + 1];
    int i;
    
    for(i = 0; i < sizeof(&string1) - 1; i++) {
        finalArray[i] = string1[i];
    }
    
    int startingPoint = i;
    
    for(i = 0; i < sizeof(&string2) - 1; i++) {
        finalArray[startingPoint + i] = string2[i];
    }
    
    return finalArray;
    
}
