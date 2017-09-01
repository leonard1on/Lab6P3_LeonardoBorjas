main: Main.o Numero.o Octal.o Hexadecimal.o Binario.o
	g++ Main.o Numero.o Octal.o Hexadecimal.o Binario.o -o main

Main.o: Main.cpp Numero.h Octal.h Hexadecimal.h Binario.h
	g++ -c Main.cpp

Numero.o: Numero.cpp Numero.h
	g++ -c Numero.cpp

Octal.o: Octal.cpp Octal.h Numero.h
	g++ -c Octal.cpp

Hexadecimal.o: Hexadecimal.cpp Hexadecimal.h Numero.h
	g++ -c Hexadecimal.cpp

Binario.o: Binario.cpp Binario.h Numero.h
	g++ -c Binario.cpp

clean:
	rm *.o main
