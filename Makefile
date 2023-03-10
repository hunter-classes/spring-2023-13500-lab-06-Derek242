OBJECTS = caesar.o vigenere.o decrypt.o

main: main.o $(OBJECTS) 
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

test-acii: test-ascii.o
	g++ -o test-ascii test-ascii.o

funcs.o: funcs.cpp funcs.h 

main.o: main.cpp funcs.h

caesar.o: caesar.cpp caesar.h

vingenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

tests.o: tests.cpp doctest.h funcs.h caesar.h vigenere.h decrypt.h

clean:
	rm -f main tests main.o tests.o test.o $(OBJECTS)
