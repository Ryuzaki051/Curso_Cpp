/* Ejercicio: 5 Pedir al usuario N numeros, almacenarlos en un arreglo dinamico
posteriormente ordenar los numeros en orden ascendente y mostrarlos en pantalla.

NOTA: Utilizar cualquier metodo de ordenamiento

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

//variables globales
int nElementos, *elemento;


int main()
{
	pedirDatos();
	ordenarArreglo(elemento, nElementos);
	mostrarArreglo(elemento, nElementos);
	
	cout<<"";
	
	delete[] elemento; //liberar la memoria utilizada para el arreglo dinamico
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del Arreglo: ";
	cin>>nElementos;
	
	elemento = new int[nElementos]; //crear el arreglo
	
	for(int i=0;i<nElementos;i++){
		cout<<"\nDigite un numero:["<<i<<"]: ";
		cin>>*(elemento+i); //elemento[i]
	}
}

void ordenarArreglo(int *elemento, int nElementos){
	int aux;
	//ordenar el arreglo con el metodo burbuja
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos-1;j++){
			if(*(elemento+j)> * (elemento+j+1)){//elemento[j] > elemento[j+1]
				aux=*(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1)=aux;
			}
		}
	}
}

void mostrarArreglo(int *elemento, int nElementos){
	cout<<"\n\nMostrando arreglo ordenado: ";
	for(int i=0;i<nElementos; i++){
		cout<<*(elemento+i)<<" ";
	}
}
