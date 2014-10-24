//
//  socket.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 2/10/14.
//
//

#include "socket.h"
#include "socketImports.h"
#include "Logger.h"


Socket::Socket(int socketFD, sockaddr_in clientAddress,
               sockaddr_in serverAddress,
               socklen_t clientStructLength) : sockfd(socketFD), clilen(clientStructLength), cli_addr(clientAddress), serv_addr(serverAddress) {
    bzero(buffer, 256);
}

void Socket::handleSocket() {
    while (running) {
        n = read(sockfd, buffer, 255);
        
        if(n < 0) {
            Logger::error("Error while reading from socket.");
            break;
        }
        
        Logger::debug("The message sent was ");
        
        n = write(sockfd, "I got your message\n", 18);
        
        if(n < 0) {
            Logger::error("Error while writing to socket");
        }
    }
}

void Socket::beginHandling() {
    SocketRunnable runnable = SocketRunnable(this);
    Thread thread = Thread(&runnable);
    try {
        thread.start();
    }
    catch (ThreadLimitExceededException e) {
        e.printStackTrace();
    }
    catch (InternalErrorException e) {
        e.printStackTrace();
    }
}

void Socket::stopHandling() {
    running = false;
}

void Socket::closeSocket() {
    close(sockfd);
}

void Socket::shutDownSocket() {
    this->stopHandling();
    this->closeSocket();
}


//==================================================
//=========HERE THERE BE RUNNABLE METHODS===========
//==================================================

SocketRunnable::SocketRunnable(Socket *socket) : Runnable(), sock(*socket) {}

 void SocketRunnable::run() {
    Runnable::run();
    this->sock.handleSocket();
}
