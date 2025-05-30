#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include<stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{

    class BindingSocket : public SimpleSocket //public so that we can still access those functions
    {
        private:
        /* MEMBER VARIABLE */
        // The binding variable stores the value 0 if successfull 
        int binding;

        /* MEMBER FUNCTIONS */
        // Virtual function from parent to establish bindings

        int connect_to_network(int sock, struct sockaddr_in address);


        // just define connect to network function
        // Constructor
        public:
        BindingSocket(int domain, int service, int protocol, int port, u_long interface); // all the param that goes to into simple socket constructor needs to be passed to binding socket constructor first
        // this constructor is going to call const for simple socket


        /* Getters */
        int get_binding();
    };
    
    
}

#endif /* BindingSocket_hpp */