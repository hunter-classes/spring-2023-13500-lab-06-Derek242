#include <iostream>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    return encryptCaesar(ciphertext, 26 - rshift);
}
std::string decryptVigenere(std::string ciphertext, std::string keyword){
    for (int i = 0; i < keyword.length(); i++){
        keyword[i] = 'z' - (keyword[i]- 'a') + 1;
    }
    return encryptVigenere(ciphertext,keyword);
}