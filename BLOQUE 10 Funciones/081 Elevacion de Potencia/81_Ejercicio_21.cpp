/*

Ejercicio 21: Escriba una funcion recursiva que calcule un numero elevado a una 
potencia entera mayor o igual que cero: x^y

	potencia(x,y) = x					, y=1
					x * potencia(x,y-1)	, y>1

*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de la funcion
int potencia(int,int);

int main()
{
	int base, exponente;
	
	cout<<"Digite la base: "; cin>>base;
	cout<<"\nDigite el exponente: "; cin>>exponente;
	
	cout<<"\nLa potencia de: "<<base <<" elevado a : " <<exponente<<" es: "<<potencia(base,exponente)<<endl;
	
	getch();
	return 0;
}

int potencia(int x, int y){
	int pot;
	
	if(y==1){ //caso base
		pot=x;
	}
	else{ //Caso General
		pot=x * potencia(x,y-1);
	}
	return pot;
	
}
