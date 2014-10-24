//
//  ServerSocket.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 9/10/14.
//
//

#include "ServerSocket.h"
#include "AccessDeniedException.h"
#include "OutOfMemoryException.h"

ServerSocket::ServerSocket(int port) : portNumber(port) {
    sockFD = socket(AF_INET, SOCK_STREAM, 0);
    
    if(sockFD < 0) {
        //There's an error
        //We need to check errno for error
        switch(errno) {
            case EACCES:
                throw new AccessDeniedException();
                break;
            case ENOMEM:
                throw new OutOfMemoryException();
                break;
        }
    }
    
    //Zero out the struct.
    bzero((char *) &serv_addr, sizeof(serv_addr));
    
    //Set this to the first parameter in the socket() call above.
    //AF_INET is the most obvious choice.
    //But you can also use AF_UNIX if you want to do unix sockets.
    serv_addr.sin_family = AF_INET;
    
    //This is where you set the port number.
    //You MUST wrap the integer in htons(), in order to convert it to a network-type integer.
    serv_addr.sin_port = htons(portNumber);
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    
    //This binds the socket. oooooh.
    if(bind(sockFD, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        //TODO Handle errors.
    }
    
    listen(sockFD, 5);
    
    clilen = sizeof(cli_addr);
}

Socket ServerSocket::acceptConnection() {
    int tempSock = accept(sockFD, (struct sockaddr *) &cli_addr, &clilen);
    
    Socket socket = Socket(tempSock, cli_addr, serv_addr, clilen);
    return socket;
}

void ServerSocket::close() {
    ::close(sockFD);
}