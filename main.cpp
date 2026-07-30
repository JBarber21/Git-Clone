#include <iostream>
#include "headers.hpp"
using namespace std;

int main(int argc, char* argv[]){

    if(argc < 2){
        std::cout << "Please Enter A Valid Command";
        return 0;
    }
    
    std::string arg = argv[1];

    if(arg == "init") {init(argv[2]);}

    else{std::cout << "Not a valid command";}

    return 0;
}