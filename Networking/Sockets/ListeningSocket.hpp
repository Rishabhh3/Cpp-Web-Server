#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>

#include "BindingSocket.hpp"

namespace HDE
{
    class ListeningSocket: public BindingSocket

    {
    private:
        // Backlog tells how many people are waiting 
        int backlog;
        int listening;

    public:
        ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklkg);

        void start_Listening();
    };
}

#endif /*ListeningSocke_hpp*/