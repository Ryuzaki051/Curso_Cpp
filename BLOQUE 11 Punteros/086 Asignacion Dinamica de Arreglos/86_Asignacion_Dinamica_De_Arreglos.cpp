/* Asignacion dinamica de arreglos

new : Reserva el numero de bytes solicitado por la declaracion
delete : Libera un bloque de bytes reservado con anterioridad

Ejemplo : Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico.

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> // Funciona con new y delete

using namespace std;


//Prototipo de funcion
void pedirNotas();
void mostrarNotas();

//Variables globales
int numCalif, *calif;

int main()
{
	pedirNotas();
	mostrarNotas();
	
	cout<<"\n";
	
	delete[] calif; //liberando el espacio en bytes utilizados anteriormente
	getch();
	return 0;
}

void pedirNotas(){
	cout<<"Digite el numero de calificaciones: ";
	cin>>numCalif;
	
	calif=new int[numCalif]; //Crear el arreglo
	
	for(int i=0;i<numCalif;i++){
		cout<<"\nIngrese una nota: ";
		cin>>calif[i];
	}
	
}

void mostrarNotas(){
	cout<<"\nMostrando Notas del Usuario:\n";
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
}
