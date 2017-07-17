/*
5.- Hacer 2 estructuras: una llamada promedio que tendrá los siguientes campos:
nota1,nota2,nota3; y otro llamada: alumno que tendrá los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en al estructura
alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, 
y por ultimo imprimir todos sus datos incluidos el promedio
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[30];
	char sexo[10];
	int edad;
	struct promedio prom;
}alumno1;


int main(){
	float promedio_alumno=0;
	
	cout<<"Nombre: "<<endl;
	cin.getline(alumno1.nombre,30,'\n');
	cout<<"Sexo: "<<endl;
	cin.getline(alumno1.sexo,10,'\n');
	cout<<"Edad: "<<endl;
	cin>>alumno1.edad;
	
	//Añadiendo el promedio
	cout<<"\nNotas del alumno: "<<endl;
	cout<<"Nota 1: "<<endl;
	cin>>alumno1.prom.nota1;
	cout<<"Nota 2: "<<endl;
	cin>>alumno1.prom.nota2;
	cout<<"Nota 3: "<<endl;
	cin>>alumno1.prom.nota3;
	
	promedio_alumno=(alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	cout<<"\nDatos del Alumno: "<<endl;
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"\n**********************"<<endl;
	cout<<"Promedio: "<<promedio_alumno<<endl;
	
	getch();
	return 0;
}
