#ifndef BINARIO_H
#define BINARIO_H
#include "Numero.h"
#include <string>
using namespace std;

class Hexadecimal : public Numero{
	public:
		Hexadecimal();
		Hexadecimal(string);
};
#endif
