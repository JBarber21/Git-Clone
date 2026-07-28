#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){

    if(argc < 2){
        std::cout << "Please Enter A Valid Command";
        return 0;
    }
    
    std::string arg = argv[1];

    if(arg == "init"){
        //std::string dir = argv[2];
        if(argv[2] == NULL){
            std::cout << "Cannot Create NULL Directory";
            return 0; 
        }
        std::string dir = argv[2];

        if(std::filesystem::exists(dir) == true){
            std::cout << "Directory Already Exists";
        }
        
        std:filesystem::create_directory(dir);
        std::filesystem::create_directory( dir + "/.git");
        std::ofstream HEAD( dir + "/.git/HEAD.txt");
        HEAD << "refs/heads/master";
        HEAD.close();
        std::filesystem::create_directory( dir + "/.git/objects");
        std::filesystem::create_directory( dir + "/.git/refs");
        std::filesystem::create_directory( dir + "/.git/refs/heads");
        
    }
    else{
        std::cout << "Not a valid command";
    }

    return 0;
}