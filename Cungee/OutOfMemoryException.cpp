//
//  OutOfMemoryException.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 13/10/14.
//
//

#include "OutOfMemoryException.h"

OutOfMemoryException::OutOfMemoryException() {
    Exception::Exception();
    exceptionType = "OutOfMemoryException";
}

OutOfMemoryException::OutOfMemoryException(char msg[]) {
    Exception::Exception();
    exceptionType = "OutOfMemoryException";
    desc = msg;
}