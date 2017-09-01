#pragma once
#include <string>
using namespace std;

class Numero{
	protected:
		string numero;
		int valor;
	public:
		Numero();
		Numero(string);
		string getNumero();
		void setNumero(string);
};
