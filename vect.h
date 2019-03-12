#pragma once
class vector
{
private:
	float vec[10];
	float  n;
public:
	vector(float a); // constructor
	~vector(void); //destructor

	void cargarVector(); //metodos
	void mostrarVector();
	void ordenarVector();
	void ordenardescendente();
};
