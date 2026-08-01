#include <iostream>
#include <filesystem>
#include <fstream>
#include "headers.hpp"
using namespace std;

int init(char* dirname){
        
        std::string dir = dirname;

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