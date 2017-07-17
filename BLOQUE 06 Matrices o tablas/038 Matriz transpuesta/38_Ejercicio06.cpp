/**
Realice un programa que calcule la suma
de dos matrices cuadradas de 3x3
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[3][3];
	int matriz2[3][3];
	int suma1=0,suma2=0,resultado=0;
	
	cout<<"\nDigite los valores de la primera matriz:\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"\nValor de la matriz 1: "<<"["<<i<<"] - ["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	//Realizando suma de la primera matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			suma1+=matriz[i][j];
		}
	}
	
	cout<<"\nAhora digite los valores de la segunda matriz:\n ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"\nValor de la matriz 1: "<<"["<<i<<"] - ["<<j<<"]: ";
			cin>>matriz2[i][j];
		}
	}
	
	//Realizando la suma de la segunda matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			suma2+=matriz2[i][j];
		}
	}
	
	//Desplegando resultados
	cout<<"\nLa suma de las matrices son: ";
	cout<<"\nMatriz 1: "<<suma1;
	cout<<"\nMatriz 2: "<<suma2;
	cout<<"\nLa suma de las matrices son:";
	resultado=suma1+suma2;
	cout<<"\nTotal: "<<resultado;
	
	cout<<"\n";
	
	getch();
	return 0;
}
