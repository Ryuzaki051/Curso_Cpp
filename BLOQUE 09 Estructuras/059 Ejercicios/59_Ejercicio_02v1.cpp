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
}a1,a2,a3;

int main(){
	
		cout<<"Alumno 1: "<<endl;
		cout<<"\nNombre: ";
		cin.getline(a1.nombre,30,'\n');
		cout<<"\nEdad: ";
		cin>>a1.edad;
		cout<<"\nPromedio: "; 
		cin>>a1.promedio;
		cout<<"\n";
	fflush(stdin);
		cout<<"Alumno 2: "<<endl;
		cout<<"\nNombre: ";
		cin.getline(a2.nombre,30,'\n');
		cout<<"\nEdad: ";
		cin>>a2.edad;
		cout<<"\nPromedio: "; 
		cin>>a2.promedio;
		cout<<"\n";
	fflush(stdin);
		cout<<"Alumno 3: "<<endl;
		cout<<"\nNombre: ";
		cin.getline(a3.nombre,30,'\n');
		cout<<"\nEdad: ";
		cin>>a3.edad;
		cout<<"\nPromedio: "; 
		cin>>a3.promedio;
		cout<<"\n";
	
	//Promediando alumnos
		if((a1.promedio > a2.promedio) && (a1.promedio > a3.promedio)){
			cout<<"El mejor alumno fue: "<<a1.nombre<<endl;
			cout<<"Con un promedio de: "<<a1.promedio;
		}
		else if((a2.promedio > a1.promedio) && (a2.promedio > a3.promedio)){
			cout<<"El mejor alumno fue: "<<a2.nombre<<endl;
			cout<<"Con un promedio de: "<<a2.promedio;
		}else if((a3.promedio > a1.promedio) && (a3.promedio > a2.promedio)){
			cout<<"El mejor alumno fue: "<<a3.nombre<<endl;
			cout<<"Con un promedio de: "<<a3.promedio;
		}
		else{
			cout<<"Nadie obtuvo un promedio alto";
		}
		
	getch();
	return 0;
}
