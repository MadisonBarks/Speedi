//
//  Thread.h
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#ifndef __Cungee__Thread__
#define __Cungee__Thread__

#include <stdio.h>
#include "Runnable.h"
#include <thread>
#include "Logger.h"
#include "Exceptions.h"

class Thread {
    int threadID;
protected:
    void run();
public:
    Runnable * runnable;
    Thread(Runnable *);
    void start();
    
};

#endif /* defined(__Cungee__Thread__) */
