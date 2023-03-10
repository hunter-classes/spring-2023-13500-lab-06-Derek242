#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here

TEST_CASE("tests"){
    CHECK(shiftChar('a',25) == 'z');
    CHECK(shiftChar('C',5) == 'H');
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("I totally love CS", 7) == "P avahssf svcl JZ");
    CHECK(encryptVigenere("Hello World!", "cake") == "Jevpq Wyvnd!");
    CHECK(encryptVigenere("I totally love CS", "bruh") == "J kiabcff mfpl DJ");
    CHECK(decryptVigenere("Jevpq Wyvnd!", "cake") == "Hello World!");
    CHECK(decryptVigenere("J kiabcff mfpl DJ", "bruh") == "I totally love CS");


}
