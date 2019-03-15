#include "StdAfx.h"
#include "ejercicio.h"
#include <iostream>
using namespace std;

ejercicio::ejercicio(void)
{
}


ejercicio::~ejercicio(void)
{
}

void ejercicio::leercadena(){
	cout<<"ingrese la cadena: ";
	getline(cin, frase);
}
void ejercicio::contarminusculas(){
	int contador=0;
	int tam=frase.length();
	for(int i=0;i<tam;i++){
		if(frase[i]>='a' && frase[i]<='z'){
			++contador;}
	}
	minusculas=contador;
}
 int ejercicio::getminusculas(){
	 return minusculas;
 }
