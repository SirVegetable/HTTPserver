#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h> 
#include <string>
#include <iostream> 
#include "server.h"

Server::Server()
{
    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(_port); 
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    socket_fd = socket(AF_INET, SOCK_STREAM, 0); 
    if(socket_fd < 0){std::cerr << "error in creating socket\n";}; 
}

Server::~Server()
{

}

void Server::listen()
{

}
std::string Server::receive_message()
{

}
void Server::send_response()
{

}
void Server::disconnect()
{

}
