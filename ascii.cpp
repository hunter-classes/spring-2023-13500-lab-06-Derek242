#include <iostream>
#include <string>
#include <cctype>
#include "funcs.h"

std::string ascii(std::string text){
    std::string result = "";
    for (int i = 0; i < text.size(); i++){
        result = result + text[i] + " " + std::to_string(((int)text[i])) + "\n";
    }
    return result;
}

int main() {
    std::cout << ascii("Hello there!") ;
    
}