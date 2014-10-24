//
//  ThreadNotCreatedException.h
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#ifndef __Cungee__ThreadNotCreatedException__
#define __Cungee__ThreadNotCreatedException__

#include <stdio.h>
#include "Exception.h"

class ThreadNotCreatedException : public Exception {
public:
    ThreadNotCreatedException();
    ThreadNotCreatedException(char *);
};

#endif /* defined(__Cungee__ThreadNotCreatedException__) */
