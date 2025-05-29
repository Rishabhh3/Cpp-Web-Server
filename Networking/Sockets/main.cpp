// Currently made for testing only

#include "ListeningSocket.hpp"

int main(){
    std::cout << "Starting..."<< std::endl;
    // std::cout << "Simple Socket..." << std::endl;
    // HDE:: SimpleSocket ss =  HDE::SimpleSocket(AF_INET, SOCK_STREAM,0 ,80, INADDR_ANY);
    
    std::cout<<"BindingSocket..."<<std::endl;
    HDE:: BindingSocket bs = HDE::BindingSocket(AF_INET, SOCK_STREAM,0 ,81, INADDR_ANY);

    std::cout<<"ListeningSocket..."<<std::endl;
    HDE:: ListeningSocket ls = HDE::ListeningSocket(AF_INET, SOCK_STREAM,0 ,80, INADDR_ANY, 10);
    // 80 and 81 are privileged ports so to use it you have to use sudo command instead you can use port 8081 and 8080 otherwise write sudo ./test.exe


    std::cout<<"Success"<<std::endl;
}