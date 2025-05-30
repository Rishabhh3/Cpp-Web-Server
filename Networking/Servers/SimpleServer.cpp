#include "SimpleServer.hpp"

HDE::SimpleServer::SimpleServer(int domain, int service, int protocol, int port, u_long interface, int bklg)
{
    socket = new ListeningSocket(domain, service, protocol, port, interface, bklg);
    //  here you have to worry abouy memory leak so you should clear it
    // because it will still contain it
    
    // delete socket;
    // now I can create new listeningsocket

    // but here it is going to run till i run my server so it is not a problem here
}

HDE::ListeningSocket * HDE::SimpleServer::get_socket()
{
    return socket;
}