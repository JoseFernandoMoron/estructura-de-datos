#include "StdAfx.h"
#include <iostream>
#include "vector.h"

using namespace std;

vector::vector(float _n)
{

	n=_n;
}


vector::~vector(void)
{
}

void vector::cargarVector(){
	for(int i=0;i<n;i++){
		cout<<"vec["<<i<<"] =" ;
		cin>>vec[i];
	}
}

void vector::mostrarVector(){
	for(int i=0;i<n;i++){
		cout<<vec[i]<<", ";
	}
	cout<<endl;
}

void vector::ordenarVector(){
	int aux;
	for(int i=0; i<(n-1); i++){
		for(int j=i; j<n; j++){
			if(vec[i] > vec[j]){
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}
void vector::ordenardescendente(){
	int aux;
	for(int i=0; i<(n-1); i++){
		for(int j=i; j<n; j++){
			if(vec[i] < vec[j]){
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}
