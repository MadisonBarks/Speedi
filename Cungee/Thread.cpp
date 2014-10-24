//
//  Thread.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 8/10/14.
//
//

#include "Thread.h"

Thread::Thread(Runnable *run) : runnable(run) {
}

void Thread::run() {
    runnable->run();
}

void Thread::start() {
    std::thread thread(&Thread::run, this);
    
    thread.join();
    
    /*
    if(n < 0) {
        Logger::error("Thread was not successfully created");
        switch(n) {
            case EAGAIN:
                throw new ThreadLimitExceededException();
                break;
            case EINVAL:
                throw new InternalErrorException();
                break;
        }
    }
     */
}
