#include "Numero.h"
#include "Octal.h"
#include "Hexadecimal.h"
#include "Binario.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>

int menu();

using namespace std;
int main(){
	vector<Numero> numeros;

	int opcion=0;
	string numero;
	//Tipo 0:Decimal, Tipo 1:Binario, Tipo 2:Hexadecimal, Tipo 3:Octal, Tipo 4:Ninguno]
	int tipo=0;
	do{
		opcion=menu();

		if(opcion==1){
			cout<<"Ingrese un numero en cualquier formato" <<endl;
			cin>>numero;
			
			//Hexadecimal
			if(numero[1]=='x' && numero[0]=='0'){
				tipo=2;
				for(int i=2;i<numero.length();i++){
					switch(numero[i]){
						case '1':{		
							}
							break;

						case '2':{		
							}
							break;
						
						case '3':{		
							}
							break;

						case '4':{		
							}
							break;

						case '5':{		
							}
							break;
						
						case '6':{		
							}
							break;

						case '7':{		
							}
							break;

						case '8':{
							}
							break;

						case '9':{		
							}
							break;

						case '0':{		
							}
							break;
						
						case 'A':{		
							}
							break;
						
						case 'B':{		
							}
							break;
						
						case 'C':{		
							}
							break;

						case 'D':{		
							}
							break;

						case 'E':{		
							}
							break;

						case 'F':{		
							}
							break;

						default:{
									tipo=4;	
							}
							break;
					}
				}
			}else if(numero[1]=='c' && numero[0]=='0'){
				tipo=3;
				for(int i=2;i<numero.length();i++){
					switch(numero[i]){
						case '1':{		
							}
							break;

						case '2':{		
							}
							break;
						
						case '3':{		
							}
							break;
	
						case '4':{		
							}
							break;

						case '5':{		
							}
							break;
						
						case '6':{		
							}
							break;

						case '7':{		
							}
							break;

						case '8':{
							}
							break;

						case '9':{		
							}
							break;
					
						case '0':{
							}
							break;

						default:{
							tipo=4;
						}
				
					}
				}
			}else{	
				//Binario
				for(int i=0;i<numero.length();i++){
					if(numero[i]!=1 || numero[i]!=0){
						tipo=0;
						i=numero.length();
					}else{
						tipo=1;
					}
			
				}
			}
			if(tipo==0){
				Numero numer(numero);
				numeros.push_back(numer);
				cout<<"Numero";
			}else if(tipo==1){
				Binario binario(numero);
				numeros.push_back(binario);
				cout<<"Binario";
			}else if(tipo==2){
				Hexadecimal hexa(numero);
				numeros.push_back(hexa);
				cout<<"Hexa";
			}else if(tipo==3){
				Octal octal(numero);
				numeros.push_back(octal);
				cout<<"Octal";
			}else{
				cout<<"El valor ingresado no es un numero";
			}
			cout<<endl;
		}//fin if
	
		if(opcion==2 || opcion==3 || opcion==4){
			int numero1, numero2;
			for(int i=0;i<numeros.size();i++){
				cout<<numeros.at(i).getNumero();
			}
			cout<<"Elija un numero de la lista: ";
			cin>>numero1;
			
		}
	}while(opcion!=5);
	
	return 0;
}

int menu(){
	int opcion;
	cout<<" - MENU - " <<endl
		<<"1. Agregar Numero al vector" <<endl
		<<"2. Sumer Numeros" <<endl
		<<"3. Restar Numeros" <<endl
		<<"4. Multiplicar numeros" <<endl
		<<"5. Salir" <<endl <<"Que desea hacer: ";
	cin>> opcion;
	cout<<endl;
	return opcion;
}

			/*if(tipo==2){
				stringstream str;
				str << numero;
				int value;
				str >> hex >> value;
				cout<<value;
			}*/

