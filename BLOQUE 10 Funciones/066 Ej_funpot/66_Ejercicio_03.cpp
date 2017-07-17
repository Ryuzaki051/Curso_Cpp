/*
Ejercicio 3: Escriba una funcion nombrada funpot() que eleve un numero entero que
se le transmita a una potencia en numero entero positivo y despliegue el resultado.
El numero entero positivo deberá ser el segundo valor transmitido a la funcion.
*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de la funcion
void pedirDatos();
void funpot(int x, int y);

//variables globales
int numero, exponente;

int main()
{
	pedirDatos();
	funpot(numero,exponente);
	cout<<endl;
	
	getch();
	return 0;
}

//Definiendo las funciones

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"\nDigite el exponente de elevacion: ";
	cin>>exponente;
}

void funpot(int x, int y){
	long resultado=1;
	for(int i=1;i<=y;i++){
		//resultado=resultado*x;
		resultado*=x;
	}
	cout<<"El resultado es: "<<resultado<<endl;
}
