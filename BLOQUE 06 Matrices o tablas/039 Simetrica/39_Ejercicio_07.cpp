/*
7.- Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta.

|8 1 3|			|8 1 3|
|1 7 4|   --> 	|1 7 4|
|3 4 9|			|3 4 9|
*/


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[100][100];
	int filas,columnas;
	
	char band='F';
	
	cout<<"Digite el numero de Filas: "; cin>>filas;
	cout<<"\nDigite el numero de Columnas: "; cin>>columnas;
	cout<<"\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"\nDigite un numero: ["<<i<<"] - ["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas; j++){
				if(numeros[i][j]==numeros[j][i]){
					band='V';
				}
			}
		}
	}
	
	if(band=='V'){
		cout<<"\nLa matriz es simetrica";
	}
	else{
		cout<<"\nLa matriz no es simetrica";
	}
	
	getch();
	return 0;
}
