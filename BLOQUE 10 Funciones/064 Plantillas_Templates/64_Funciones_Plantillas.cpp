/*Plantillas de una funcion.

Ejemplo: Sacar el valor absoluto de un numero.
*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de funcion
template <class TIPOD>//prefijo de la plantilla
void mostrarAbs(TIPOD numero);


int main()
{
	int num1=4;
	float num2=-56.67;
	double num3=-123.5478; // valor negativo
	
	mostrarAbs(num1);
	cout<<endl;
	mostrarAbs(num2);
	cout<<endl;
	mostrarAbs(num3);
	
	getch();
	return 0;
}

//Definicion de una funcion
template <class TIPOD>//prefijo de la plantilla
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero=numero*-1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
	
}

