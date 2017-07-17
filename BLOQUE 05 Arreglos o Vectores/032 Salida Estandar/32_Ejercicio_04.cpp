/*
Escribe un programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso - del ultimo al primer elemento
*/


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[100];
	int n;
	
	cout<<"Digite la cantidad de elemetos a ordenar: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"\nDigite el elemento del indice: "<<i<<endl;
		cin>>numeros[i];
	}
	cout<<"*****************"<<endl;
	for(int j=n;j>0;j--){
		cout<<j<<" -> "<<numeros[j]<<endl;
	}
	
	getch();
	return 0;
}
