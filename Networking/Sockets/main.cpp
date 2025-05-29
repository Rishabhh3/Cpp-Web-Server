// Currently made for testing only

#include "ListeningSocket.hpp"

int main(){
    std::cout << "Starting..."<< std::endl;
    // std::cout << "Simple Socket..." << std::endl;
    // HDE:: SimpleSocket ss =  HDE::SimpleSocket(AF_INET, SOCK_STREAM,0 ,80, INADDR_ANY);
    
    std::cout<<"BindingSocket..."<<std::endl;
    HDE:: BindingSocket bs = HDE::BindingSocket(AF_INET, SOCK_STREAM,0 ,80, INADDR_ANY);

    std::cout<<"ListeningSocket..."<<std::endl;
    HDE:: ListeningSocket ls = HDE::ListeningSocket(AF_INET, SOCK_STREAM,0 ,80, INADDR_ANY, 10);
    
    std::cout<<"Success"<<std::endl;
}