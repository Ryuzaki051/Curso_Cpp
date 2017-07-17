/*
  3.- Realice un programa que lea de la entrada estandar los siguientes datos de una persona:
  
  Edad: dato entero
  Sexo: dato de tipo caracter
  Altura en metros: dato de tipo real.
  
  Tras leer los datos, el programa debe mostrarlos en la salida estandar
  
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"\nDigite su edad: "<<endl; cin>>edad;
	cout<<"\nDigite su sexo:"<<endl; cin>>sexo;
	cout<<"\nDigite su altura en metros"<<endl; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"\nSexo: "<<sexo<<endl;
	cout<<"\nAltura: "<<altura<<endl;
	
	return 0;
}
