/* Paso de paramateros de tipo vector

Parametros de la funcion:
	void nombreDeFuncion(tipo nombreArreglo[], int int tamañoArreglo[])
	
LLamada a la funcion
	nombreDeFuncion(nombreArreglo, tamañoArreglo)

*/

//Cuadrados de los elementos del vector

#include<iostream>
#include<conio.h>
using namespace std;

void cuadrado(int vec[],int);
void muestra(int vec[],int );

int main()
{
	const int TAM=5;
	int vec[TAM]={1,2,3,4,5};
	
	cuadrado(vec,TAM);
	muestra(vec,TAM);
	
	cout<<"\n";
	
	getch();
	return 0;
}

void cuadrado(int vec[], int tam){
	for(int i=0;i<tam;i++){
		//vec[i]=vec[i]*vec[i];
		vec[i]*=vec[i];
	}
	
}

void muestra(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<endl;
	}
}
