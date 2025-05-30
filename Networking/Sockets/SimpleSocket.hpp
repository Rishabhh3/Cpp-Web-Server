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
        // The address variable is a struct that contains  information about protcol , type  and interface of a given socket . These paramenter are specified and  set in the constructor
        struct sockaddr_in address;

        /* Member variable */ 
        // once initialised  sock contains the address  of a socket object on the network,
        // this should be non negative number
        int sock;
        int connection;
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
        void set_connection(int);
        
        // Getter Functions
        struct sockaddr_in get_address();
        int get_sock();



    };
}

#endif /* SimpleSocket_hpp */
