//
//  AccessDeniedException.h
//  Cungee
//
//  Created by Austin Bolstridge on 10/10/14.
//
//

#ifndef __Cungee__AccessDeniedException__
#define __Cungee__AccessDeniedException__

#include <stdio.h>
#include "Exception.h"

class AccessDeniedException : public Exception {
public:
    AccessDeniedException();
    AccessDeniedException(char *);
};

#endif /* defined(__Cungee__AccessDeniedException__) */
