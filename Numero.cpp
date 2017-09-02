#include "Numero.h"
#include <string>
using namespace std;

Numero::Numero(){
	numero="";
}

Numero::Numero(string pNumero){
	numero=pNumero;
	valor=stoi(pNumero);
}

string Numero::getNumero(){
	return numero;
}

void Numero::setNumero(string pNumero){
	numero=pNumero;
}

int Numero::getValor(){
	return valor;
}
