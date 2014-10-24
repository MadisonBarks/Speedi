//
//  ServerSocket.h
//  Cungee
//
//  Created by Austin Bolstridge on 9/10/14.
//
//

#ifndef __Cungee__ServerSocket__
#define __Cungee__ServerSocket__

#include <stdio.h>
#include "socketImports.h"
#include "socket.h"

class ServerSocket {
    int sockFD, portNumber;
    socklen_t clilen;
    
    struct sockaddr_in serv_addr, cli_addr;
public:
    ServerSocket(int);
    Socket acceptConnection();
    void close();
};

#endif /* defined(__Cungee__ServerSocket__) */
