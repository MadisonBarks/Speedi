//
//  ThreadLimitExceeded.h
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#ifndef __Cungee__ThreadLimitExceeded__
#define __Cungee__ThreadLimitExceeded__

#include <stdio.h>
#include "Exception.h"

class ThreadLimitExceededException : public Exception {
public:
    ThreadLimitExceededException();
    ThreadLimitExceededException(char *);
};

#endif /* defined(__Cungee__ThreadLimitExceeded__) */
