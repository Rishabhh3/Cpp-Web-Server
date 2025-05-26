#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include<iostream>
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>

namespace HDE
{
    class SimpleSocket
    {
        private:
        struct sockaddr_in address;

        int connection; // will be equal to established network connection
        int sock;
        // this is made private because it would not be
        // good for user to manipulate it
        public:
        // Constructor
        SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
        // domain is IP or.., second is type of
        // service you want and then the protocol

        // Virtual Function to connect to a network
        virtual int connect_to_network(int sock, struct sockaddr_in  address) = 0;

        // Functions to test sockets and Connections
        void test_connection(int);
        // Getter Functions
        struct sockaddr_in get_address();
        int getsock();
        int getconnection();

    };
}

#endif /* SimpleSocket_hpp */
