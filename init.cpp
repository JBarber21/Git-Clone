#include <iostream>
#include <filesystem>
#include <fstream>
#include "init.hpp"
using namespace std;

int init(char* argv){
     if(argv == NULL){
            std::cout << "Cannot Create NULL Directory";
        return 0; 
        }
        
        std::string dir = argv;

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

    return 0; 
}