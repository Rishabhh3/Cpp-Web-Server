#ifndef SimpleServer_hpp
#define SimpleServer_hpp

#include <stdio.h>

// #include "../Sockets/ListeningSocket.hpp"
#include "../hdelibc-networking.hpp"

namespace HDE
{
    class SimpleServer
    {
        //Simple server has a socket, simple server is not a socket like rectangle as height but rectangle is not a height
        private:
            ListeningSocket * socket;
            virtual void acceptor() = 0;
            virtual void handler() = 0;
            virtual void responder() = 0;

        public:
        SimpleServer(int domain, int service, int protocol, int port, u_long interface, int bklg);

        virtual void launch() = 0;
        ListeningSocket *get_socket();

    };
}


#endif /* SimpleServer_hpp */