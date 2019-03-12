#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "vector.h"  //Declarar el header de la clase

#define MAX 10

using namespace std;

void main(){

	int vec[MAX], n, op, m;
	// Declarando el objeto vector1 de la clase vector
	do {
		cout<<"Ingrese el tamanio del vector : ";
		cin>>n;
	} while ((n>MAX) || (n<=0));
	do{
		cout<<"ingrese el tamaño del 2do vector :";
		cin>>m;
	} while ((n>MAX) || (n<=0));
	vector vector1(n); 
	vector vector2(m);
	do{
		cout<<"-----       M E N U        -----"<<endl;
		cout<<"|1.- Cargar Vector.            |"<<endl;
		cout<<"|2.- Mostrar Vector.           |"<<endl;
		cout<<"|3.- Ordenar Vector.           |"<<endl;
		cout<<" 4. ordenar descendentemente "<<endl;
		cout<<"|0.- Salir                     |"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<" Elija una opcion"<<endl;
		cin>>op;
		switch(op){
		case 1:
			vector1.cargarVector(); 
			vector2.cargarVector();//Llamar al metodo
			break;
		case 2:
			vector1.mostrarVector();
			vector2.mostrarVector();
			break;
		case 3:
			vector1.ordenarVector();
			vector2.ordenarVector();
			break;
		case 4:
			vector1.ordenardescendente();
			vector2.ordenardescendente();
		case 0: 
			cout<<"Salir"<<endl;
			break;
		default:
			cout<<"Error: Opcion no valida..."<<endl;
			break;
		}
	}while(op!=0);
	getch();
