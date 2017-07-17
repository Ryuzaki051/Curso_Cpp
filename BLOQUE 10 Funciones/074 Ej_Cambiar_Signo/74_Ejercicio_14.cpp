/*
*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void seleccionarImpar(int vec[],int);
void mostrarImpares(int vec[], int);

int vec[100], tam;

int main()
{
	pedirDatos();
	seleccionarImpar(vec,tam);
	mostrarImpares(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos: "<<endl;
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"Ingresa el valor del elemento: ["<<i<<"] : ";
		cin>>vec[i];
	}
}

void seleccionarImpar(int vec[], int tam){
	//int impar[];
	for(int i=0;i<tam;i++){
		
	}
}

void mostrarImpares(int vec[], int tam){
	cout<<"\nMostrando datos seleccionados impares: "<<endl;
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
