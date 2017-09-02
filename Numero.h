#pragma once
#include <string>
#include <sstream>
using namespace std;

class Numero{
	protected:
		string numero;
		int valor;
	public:
		Numero();
		Numero(string);
		string getNumero();
		int getValor();
		void setNumero(string);
		
		int operator+(Numero& numer){
			int suma=this->valor + numer.getValor();
			return suma;
		}

		int operator-(Numero& numer){
			int resta=this->valor - numer.getValor();
			return resta;
		}
		
		int operator*(Numero& numer){
			int multi=this->valor * numer.getValor();
			return multi;
		}
};
