#include "Binario.h"
#include <cmath>

Binario::Binario(){
	
}

Binario::Binario(string pNumero) : Numero(pNumero){
	int contador=pNumero.size()-2;
	int numer=0;
	for(int i=0;i<pNumero.size();i++){
		if(pNumero[i]=='1'){
			numer+=pow(2, contador);
		}
		contador--;
	}
	valor=numer;
}
