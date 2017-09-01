main: Main.o Numero.o Octal.o Hexadecimal.o Binario.o
	g++ Main.o Numero.o Octal.o Hexadecimal.o Binario.o -o a

main.o: Main.cpp Numero.h Octal.h Hexadecimal.h Binario.h
	g++ -c Main.cpp Numero.cpp Octal.cpp Hexadecimal.cpp Binario.cpp

Numero.o: Numero.cpp Numero.h
	g++ -c Numero.cpp

Octal.o: Octal.cpp Octal.h
	g++ -c Octal.cpp

Hexadecimal.o: Hexadecimal.cpp Hexadecimal.h
	g++ -c Hexadecimal.cpp

Binario.o: Binario.cpp Binario.h
	g++ -c Binario.cpp
