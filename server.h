#include <arpa/inet.h>

#include <string>


class Server{
    public: 
        Server(); 
        ~Server(); 

        void listen();
        std::string receive_message();
        void send_response();
        void disconnect(); 

    private: 
        int socket_fd = -1; 
        int _port = 4332; 
        struct sockaddr_in client_addr;
        struct sockaddr_in serv_addr;
        socklen_t client_addr_len; 


        

};