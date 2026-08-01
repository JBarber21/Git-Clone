#include <iostream>
#include <filesystem>
#include "headers.hpp"
using namespace std;

int hash_object(char* filename){

    return 0; 
}

int write(char* filename){

    return 0; 
}

int type(char* object_type){

    return 0; 
}

int hashobject(int argc, char* argv[]){
    
    
    for(int i = 2; i < argc; i++){

        std::string arg = argv[i];

        if(arg =="-w"){
            if(i+1 >= argc){
                std::cout << "missing argument for -w";
                return 1; 
            }
            write(argv[i+1]);
            i++;
        }
        else if(arg =="-t"){
            if(i+1 >= argc){
                std::cout << "missing argument for -t";
                return 1; 
            }            
            type(argv[i+1]);
            i++;
        }
        else if (std::filesystem::is_regular_file(argv[i])){
            hash_object(argv[i]);
        }
        else{
            std::cout << arg << " is not a valid argument";
            return 1; 
        }
    }

    return 0;
}



