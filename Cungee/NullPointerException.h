//
//  NullPointerException.h
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#ifndef __Cungee__NullPointerException__
#define __Cungee__NullPointerException__

#include <stdio.h>
#include "Exception.h"

class NullPointerException : public Exception {
public:
    NullPointerException();
    NullPointerException(char *);
    
};

#endif /* defined(__Cungee__NullPointerException__) */
