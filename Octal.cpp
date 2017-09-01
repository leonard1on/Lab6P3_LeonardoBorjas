#include "Octal.h"
#include "Numero.h"
#include <string>
#include <cmath>
using namespace std;

Octal::Octal(){
	
}

Octal::Octal(string pNumero) : Numero(pNumero){
	int contador=pNumero.size()-3;
	int numer=0;
	for(int i=2;i<pNumero.size();i++){
		numer+=((int)pNumero[i])*pow(8,contador);
		contador--;
	}
	valor=numer;
}
