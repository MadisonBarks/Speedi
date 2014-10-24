//
//  Exception.h
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#ifndef __Cungee__Exception__
#define __Cungee__Exception__

#include <stdio.h>
#include <execinfo.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

class Exception {
protected:
    void * stackTrace[10];
    size_t stackTraceSize;
    char * desc;
    char * exceptionType;
public:
    Exception(char *);
    Exception();
    void printStackTrace();
    void printStackTrace(FILE, int);
    
};

#endif /* defined(__Cungee__Exception__) */
