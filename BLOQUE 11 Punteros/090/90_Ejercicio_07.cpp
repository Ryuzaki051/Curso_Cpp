/* Ejercicio 7 Pedir su nombre al usuario y devolver el numero de vocales que hay
NOTA: Recuerda que debes de utilizar punteros/*

*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//Prototipo de la funcion
void pedirDatos();
int contandoVocales(char *);

//Variable global
char nombreUsuario[30];


int main()
{
	pedirDatos();
	
	cout<<"\nEl numero de vocales del nombre es: "<<contandoVocales(nombreUsuario)<<endl;
	
	getch();
	return 0;
}


void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario); //Transformando a mayuscula
}

int contandoVocales(char *nombre){
	int cont=0;
	
	while(*nombre){//Mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}
	
	return cont;
}
