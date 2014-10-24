//
//  socket.h
//  Cungee
//
//  Created by Austin Bolstridge on 2/10/14.
//
//

#ifndef __Cungee__socket__
#define __Cungee__socket__

#include <stdio.h>
#include "socketImports.h"
#include "Runnable.h"
#include "Thread.h"
#include "Exceptions.h"

//For read() and write()
#include <sys/uio.h>
#include <unistd.h>

class Socket {
    int sockfd;
    socklen_t clilen;
    long n;
    char buffer[256];
    struct sockaddr_in serv_addr, cli_addr;
    bool running = true;
    
    friend class SocketRunnable;
    
private:
    void handleSocket();
    
public:
    Socket(int, sockaddr_in, sockaddr_in, socklen_t);
    void beginHandling();
    void stopHandling();
    void shutDownSocket();
    void closeSocket();
};

//Extends the Runnable to apply a
//Socket-specific case to it.
class SocketRunnable : public Runnable {
    Socket sock;
public:
    SocketRunnable(Socket *);
    void run();
};

#endif /* defined(__Cungee__socket__) */
