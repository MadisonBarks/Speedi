//
//  InternalErrorException.h
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#ifndef __Cungee__InternalErrorException__
#define __Cungee__InternalErrorException__

#include <stdio.h>
#include "Exception.h"

class InternalErrorException : public Exception {
public:
    InternalErrorException();
    InternalErrorException(char *);
};

#endif /* defined(__Cungee__InternalErrorException__) */
