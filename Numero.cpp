#include "Numero.h"
#include <string>
using namespace std;

Numero::Numero(){
	numero="";
}

Numero::Numero(string pNumero){
	numero=pNumero;
}

string Numero::getNumero(){
	return numero;
}

void Numero::setNumero(string pNumero){
	numero=pNumero;
}
