#include <iostream>
#include <filesystem>
#include <fstream> 
#include <optional>
#include "zlib.h"
#include "headers.hpp"
using namespace std;

std::optional<std::filesystem::path> find_object(const std::string& search){
    //Separate the hash into the object's folder and file name 
    std::string folder_name = search.substr(0,2);
    std::string file_name = search.substr(2); 

    //search for the object
    std::filesystem::path file_path = ".git/objects/" + folder_name + "/" + file_name;
    if(!std::filesystem::exists(file_path)){ 
        return std::nullopt; 
    }

    return file_path; 
}

int decompress_object(std::filesystem::path object_path){
    //Read object

    
    //Create/fill input buffer


    //Inflate buffer with zlib
}

int pretty_print(char* content){

}

int cat_file(char* file[]){
    if(file[2] = "-p"){
        //Take in the hash
        std::string hash = file[3]; 

        //search for object
        std::optional<std::filesystem::path> object_path = find_object(hash);         
        if(!object_path.has_value()){
            std::cout << "Unable to find object.";
            return 1; 
        }
        //decompress bytes
        decompress_object(*object_path);

        //decipher object


        //print object's contents
    }

    return 0; 
}