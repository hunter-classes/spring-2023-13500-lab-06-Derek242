#include <iostream>
#include <cctype>
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword){
    std::string newword = ""; int x = 0;
    for (int i = 0; i < plaintext.length(); i++){
        if (keyword.length() == x){
            x = 0;
        }
        newword += shiftChar(plaintext[i], keyword[x] - 97);
        if ((plaintext[i] >= 97 && plaintext[i] <= 122) || (plaintext[i] >= 65 && plaintext[i] <= 90)){
            x += 1;
        }
    }
    return newword;
}