#include <iostream>
#include <string>
#include <cctype>

//
char shiftChar(char c, int rshift){\

    if(c >= 97 && c <= 122){
        //Lowercase
        if (c + rshift < 123){
            return c + rshift;
        }
    } else if (c + rshift > 122){
        return c+rshift - 26;
    } 

    if (c >= 65 && c <= 90){
        //Uppercase
        if (c + rshift <= 90){
            return c + rshift;
        } else if (c + rshift > 90){
            return c + rshift - 26;
        }
    }
    return c;
}

std::string encryptCaesar(std::string plaintext, int rshift){
    for (int i = 0; i < plaintext.length(); i++){
        plaintext[i] =  shiftChar((int)plaintext[i],rshift);
    }
    return plaintext;
}
