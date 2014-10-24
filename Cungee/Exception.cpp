//
//  Exception.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#include "Exception.h"

Exception::Exception() {
    stackTraceSize = backtrace(stackTrace, 10);
    exceptionType = "Exception";
}

Exception::Exception(char errorDescription[]) {
    desc = errorDescription;
    stackTraceSize = backtrace(stackTrace, 10);
    exceptionType = "Exception";
}

void Exception::printStackTrace() {
    fprintf(stderr, "%s in thread %ud", exceptionType, pthread_self());
    backtrace_symbols_fd(stackTrace, stackTraceSize, STDERR_FILENO);
}

void Exception::printStackTrace(FILE fileDesc, int fileDescInt) {
    fprintf(&fileDesc, "%s in thread %ud", exceptionType, pthread_self());
    backtrace_symbols_fd(stackTrace, stackTraceSize, fileDescInt);
}