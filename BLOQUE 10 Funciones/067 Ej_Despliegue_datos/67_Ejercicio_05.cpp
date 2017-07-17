/*
5.- Escriba una plantilla de funcion llamada despliegue() que despliegue el valor
del argumento unico que se le transmite cuando es invocada la funcion
*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de la funcion
template <class TIPOD>
void despliegue(TIPOD dato);


int main()
{
	int dato1=4;
	float dato2=15.67;
	double dato3=56737890;
	char dato4='a';
	
	despliegue(dato1);
	cout<<"\n";
	despliegue(dato2);
	cout<<"\n";
	despliegue(dato3);
	cout<<"\n";
	despliegue(dato4);
	
	
	getch();
	return 0;
}

//Definiendo funciones

template <class TIPOD>
void despliegue(TIPOD dato){
	cout<<"El dato es: "<<dato<<endl;
}

