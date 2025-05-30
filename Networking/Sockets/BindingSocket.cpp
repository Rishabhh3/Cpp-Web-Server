
#include "BindingSocket.hpp"

// Constructor
HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface)
// we are gonna give these variables to Binding socket and it is gonna give you this to Simple Socket
// it  has our virtual function to connect to network, but we are not calling it in parent bcoz it would try to
// call the vir func that is not defined as anything yet
{
    set_connection(connect_to_network(get_sock(), get_address()));
    test_connection(get_sock());
}

// Definition of  connect_to_network virtual function
int HDE::BindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}