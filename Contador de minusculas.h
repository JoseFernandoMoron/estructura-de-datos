#pragma once
#include <string>
using namespace std;
class ejercicio
	{
	private:
		string frase;
        int minusculas;


      public:
	ejercicio(void);
	~ejercicio(void);
	void leercadena();
	void contarminusculas();
	int getminusculas();
};
