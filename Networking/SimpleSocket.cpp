






#include<SimpleSocket.hpp>

//DEFAULT CONSTRUCTOR

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
    // DEFINE ADDRESS STRUCTURE
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    // interface is my IP adress

    //ESTABLISH SOCKET
    sock = socket(domain, service, protocol);
    test_connection(sock); // test socket

    // BIND
    //bind is only in server side code on the
    //client side it is replaced with connect

}

// TEST CONNECTION VIRTUAL FUNCITON

void HDE::SimpleSocket::test_connection(int item_to_test)
{
    // Confirms that the socket or connection  has been properly established
    if(item_to_test < 0){
        perror("Failed to Connect...");
        exit(EXIT_FAILURE);
    }
}

//Getter functions

struct sockaddr_in HDE::SimpleSocket::get_address()
{
    return address;
}

int HDE::SimpleSocket::getsock()
{
    return sock;
}

int HDE::SimpleSocket::getconnection()
{
    return connection;
}

// Settet Functions
void HDE::SimpleSocket::set_connection(int con){
    connection = con;
}