//
//  Logger.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 2/10/14.
//
//

#include "Logger.h"

void Logger::log(Level level, char msg[]) {
    switch (level) {
        case LOG_ERROR:
            error(msg);
            break;
        case LOG_WARNING:
            warning(msg);
            break;
        case LOG_INFO:
            info(msg);
            break;
        case LOG_DEBUG:
            debug(msg);
            break;
        default:
            break;
    }
}

void Logger::warning(char msg[]) {
    std::cout << WARNING_PREFIX << msg << std::endl;
    std::cerr << WARNING_PREFIX << msg << std::endl;
}

void Logger::error(char msg[]) {
    std::cout << ERROR_PREFIX << msg << std::endl;
    std::cerr << ERROR_PREFIX << msg << std::endl;
}

void Logger::info(char msg[]) {
    std::cout << INFO_PREFIX << msg << std::endl;
}

void Logger::debug(char msg[]) {
    std::cout << DEBUG_PREFIX << msg << std::endl;
}
