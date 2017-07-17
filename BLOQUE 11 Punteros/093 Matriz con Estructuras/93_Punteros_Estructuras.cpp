/*
 Punteros a estructuras
*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}persona, *puntero_persona=&persona;

//Prototipo de la funcion
void pedirDatos();
void mostrarDatos(Persona *);

int main()
{
	pedirDatos();
	mostrarDatos(puntero_persona);
	cout<<"";
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Ingresa tu nombre: ";
	//cin.getline(persona.nombre,30,'\n');
	cin.getline(puntero_persona->nombre,30,'\n');
	cout<<"\nIngresa tu edad: ";
	cin>>puntero_persona->edad;
	
}

void mostrarDatos(Persona *puntero_persona){
	cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
	cout<<"Su edad es: "<<puntero_persona->edad<<endl;
}
