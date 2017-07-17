/**
Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
Nombre,Edad,Promedio, pedir datos al usuario para 3 alumnos, comprobar cual de 
los 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente
imprimir los datos del alumno

*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	
	for(int i=0;i<3;i++){
		fflush(stdin); //vaciando buffer
		cout<<"\nNombre: ";
		cin.getline(alumnos[i].nombre,30,'\n');
		cout<<"\nEdad: ";
		cin>>alumnos[i].edad;
		cout<<"\nPromedio: "; //Promedio evaluado del 0 al 100
		cin>>alumnos[i].promedio;
		cout<<"\n";
	}
	
	//Promediando alumnos en arreglos generales
	for(int i=0;i<3;i++){
		if(alumnos[i].promedio >=0 && alumnos[i] <=50 ){
			cout<<"El promedio del alumno fue: "<<alumnos[i].promedio<<endl;
			cout<<"El promedio del alumno es bajo.";
		}
		else if(alumnos[i].promedio >=51 && alumnos[i] <=80 ){
			cout<<"El promedio del alumno fue: "<<alumnos[i].promedio<<endl;
			cout<<"El promedio del alumno es regular.";
		}
		else if(alumnos[i].promedio >=81 && alumnos[i] <=100 ){
			cout<<"El promedio del alumno fue: "<<alumnos[i].promedio<<endl;
			cout<<"El promedio del alumno es de los mejores.";	
		}
	}
	
	
	getch();
	return 0;
}
