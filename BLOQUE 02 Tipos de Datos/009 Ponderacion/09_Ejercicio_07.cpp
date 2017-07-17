/*
7.- La calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participacion que cuenta con el 10% restante. Escriba un programa
que lea de la entrada estandar las tres notas de un alumno y escriba en la salida 
estandar su nota final.

*/

#include<iostream>

using namespace std;

int main()
{
	float practica, teorica, participacion, nota_final=0;
	
	cout<<"\n Digite la nota practica: "; cin>>practica;
	cout<<"\n Digite la nota teorica: "; cin>>teorica;
	cout<<"\n Digite la nota participacion: "; cin>>participacion;
	
	practica=practica*0.30;
	teorica*=.60; // toeorica=teorica *0.30
	participacion*=.10;
	
	nota_final=practica+teorica+participacion;
	
	cout<<"\n La nota final es: "<<nota_final<<endl;
	
	return 0;
}
