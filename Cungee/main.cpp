//
//  main.cpp
//  Cungee
//
//  Created by Austin Bolstridge on 2/10/14.
//
//

#include "socketImports.h"

//These two are for read() and write().
#include <sys/uio.h>
#include <unistd.h>
#include "socket.h"
#include "ServerSocket.h"

int main(int argc, const char * argv[]) {
	
	ServerSocket mainSocket = ServerSocket(4444);
	
	Socket socket = mainSocket.acceptConnection();
	
	socket.beginHandling();
	
	socket.closeSocket();
	mainSocket.close();
	
    return 0;
}

