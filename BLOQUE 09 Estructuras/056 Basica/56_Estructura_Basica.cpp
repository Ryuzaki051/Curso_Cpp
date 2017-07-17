//Estructura basica en c++

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona1;
//persona1={"Alejandro",20},
//persona2={"Abraham",15};


int main(){
	cout<<"Nombre: "<<endl;
	cin.getline(persona1.nombre,20,'\n');
	cout<<"\nEdad:"<<endl;
	cin>>persona1.edad;
	
	cout<<"\n Imprimiendo datos: ";
	cout<<"\nNombre: "<<persona1.nombre;
	cout<<"\nEdad: "<<persona1.edad;
	
	
	/*
	cout<<"El nombre de la persona 1: "<<persona1.nombre<<endl;
	cout<<"Edad de la persona 1: "<<persona1.edad;
	
	cout<<"\nEl nombre de la persona 2: "<<persona2.nombre<<endl;
	cout<<"Edad de la persona 2: "<<persona2.edad;
	*/
	getch();
	return 0;
}
