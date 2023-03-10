#include <iostream>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
int main()
{
  //Task B
  std::cout << shiftChar('a', 25) << std::endl;
  std::cout << shiftChar('C', 5) << std::endl;

  std::cout << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << encryptCaesar("I totally love CS", 7) << std::endl;


  //Task C
  std::cout << encryptVigenere("Hello World!", "cake") << std::endl;
  std::cout << encryptVigenere("I totally love CS", "bruh") << std::endl;

  //Task D
  std::cout << decryptCaesar("Bfd yt Lt!",5) << std::endl;
  std::cout << decryptCaesar("P avahssf svcl JZ", 7) << std::endl;
  std::cout << decryptVigenere("Jevpq Wyvnd!", "cake") << std::endl;
  std::cout << decryptVigenere("J kiabcff mfpl DJ", "bruh") << std::endl;


  return 0;
}
