/*Ejercicio 11.- Hacer una estructura llamada alumno, en la cual se tendran los siguientes
campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual
de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno
NOTA: usar punteros a estructura.
*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno= alumno;

//Prototipo de la funcion
void pedirDatos();
void calcularMejorPromedio(Alumno *);


int main()
{
	pedirDatos();
	calcularMejorPromedio(puntero_alumno);
	cout<<"";
	
	getch();
	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Ingresa el nombre: ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"\nIngresa la edad:";
		cin>>(puntero_alumno+i)->edad;
		cout<<"\nPromedio: ";
		cin>>(puntero_alumno+i)->promedio;
		cout<<"\n*************************\n\n";	
	}
}

void calcularMejorPromedio(Alumno *puntero_alumno){
	float mayor=0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){
			mayor=(puntero_alumno)->promedio; //comprobar el mayor promedio
			pos=i; //Guardar en la posicion del mayor promedio
		}
	}
	//Imprimir los datos del alumno con mayor promedio
	cout<<"\nEl alumno con mejor promedio es: \n";
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio;
	
}
