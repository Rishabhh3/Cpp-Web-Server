#include "ListeningSocket.hpp"

HDE::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg) : BindingSocket(domain, service, protocol, port, interface)
{
    backlog = bklg;
    start_Listening();
    test_connection(listening);
}

void HDE::ListeningSocket::start_Listening()
{
    listening = listen(get_sock(), backlog);
}

/* GETTERS*/
int HDE::ListeningSocket::get_listening()
{
    return listening;
}

int HDE::ListeningSocket::get_backlog()
{
    return backlog;
}