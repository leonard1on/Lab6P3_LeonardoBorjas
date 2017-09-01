#pragma once
#include <string>
using namespace std;

class Numero{
	private:
		string numero;
	protected:
		int valor;
	public:
		Numero();
		Numero(string);
		string getNumero();
		void setNumero(string);
};
