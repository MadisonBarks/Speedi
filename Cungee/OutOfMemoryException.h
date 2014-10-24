//
//  OutOfMemoryException.h
//  Cungee
//
//  Created by Austin Bolstridge on 13/10/14.
//
//

#ifndef __Cungee__OutOfMemoryException__
#define __Cungee__OutOfMemoryException__

#include <stdio.h>
#include "Exception.h"

class OutOfMemoryException : public Exception {
public:
    OutOfMemoryException();
    OutOfMemoryException(char *);
};

#endif /* defined(__Cungee__OutOfMemoryException__) */
