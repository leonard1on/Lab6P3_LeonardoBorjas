#include "Hexadecimal.h"
#include "Numero.h"
#include <string>
#include <sstream>

using namespace std;

Hexadecimal::Hexadecimal(){
	
}

Hexadecimal::Hexadecimal(string pNumero) : Numero(pNumero){
	stringstream stream;
	stream<<pNumero;
	stream>> hex >> valor;
}
