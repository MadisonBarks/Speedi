//
//  Logger.h
//  Cungee
//
//  Created by Austin Bolstridge on 2/10/14.
//
//

#ifndef __Cungee__Logger__
#define __Cungee__Logger__

#include <stdio.h>
#include <iostream>

typedef int Level;

const static char ERROR[] = "\x1b[31m";
const static Level LOG_ERROR = 1;
const static Level LOG_WARNING = 2;
const static Level LOG_INFO = 3;
const static Level LOG_DEBUG = 4;

const static char ERROR_PREFIX[] = "[ERROR]";
const static char WARNING_PREFIX[] = "[WARNING]";
const static char INFO_PREFIX[] = "[INFO]";
const static char DEBUG_PREFIX[] = "[DEBUG]";

class Logger {
    
public:
    static void log(Level, char *);
    
    static void warning(char *);
    
    static void error(char *);
    
    static void info(char *);
    
    static void debug(char *);
};

#endif /* defined(__Cungee__Logger__) */
