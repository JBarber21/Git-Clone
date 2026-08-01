#include <iostream>
#include "headers.hpp"
using namespace std;

int main(int argc, char* argv[]){

    if(argc < 2){
        std::cout << "Please Enter A Valid Command";
        return 0;
    }
    
    std::string arg = argv[1];

    if(arg == "init") {
        if(argc < 3){
            cout << "init requires a directory name";
            return 1; 
        }
        init(argv[2]);
    }

    else if(arg == "hash-object"){
        if(argc < 3){
            cout << "hash-object requires an argument and/or file";
            return 1; 
        }
        hashobject(argc, argv);
    }

    else{std::cout << "Not a valid command";}

    return 0;
}