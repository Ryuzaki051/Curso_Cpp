/*
1.-Ejercicio 1: Escriba una funcion llamada mult() que acepte dos numeros en punto
flotante como parametros, multiplique estos dos numeros y despliegue el resultado.
*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de la funcion
void pedirDatos();
void mult(float x, float y);

//Variables de tipo global
float num1,num2;

int main()
{
	pedirDatos();
	
	mult(num1,num2);
	
	cout<<"\n";
	
	getch();
	return 0;
}

//Definiendo las funciones
void pedirDatos(){
	cout<<"Digite 2 numeros: ";
	cin>>num1>>num2;
}

void mult(float x, float y){
	float multiplicacion = x * y;
	
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
}
