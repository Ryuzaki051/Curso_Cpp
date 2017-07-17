/*
Ejercicio 1.- Comprobar si un numero es par o impar, y señalar la posicion de
memoria donde se esta guardando el numero. Con punteros.
*/

#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int numero, *dir_numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	dir_numero= &numero; //Guardando la posicion de memoria
	
	if(*dir_numero%2==0){
		cout<<"\nEl numero "<<*dir_numero<<" es par."<<endl;
		cout<<"\nPosicion: "<<dir_numero<<endl;
	}else{
		cout<<"\nEl numero "<<*dir_numero<<" es impar."<<endl;
		cout<<"\nPosicion: "<<dir_numero<<endl;
	}
	
	
	getch();
	return 0;
}
