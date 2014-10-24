//
//  NullPointerException.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#include "NullPointerException.h"

NullPointerException::NullPointerException() {
    Exception::Exception();
    exceptionType = "NullPointerException";
}

NullPointerException::NullPointerException(char msg[]) {
    Exception::Exception();
    exceptionType = "NullPointerException";
    desc = msg;
}