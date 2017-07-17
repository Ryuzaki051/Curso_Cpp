/*Ejercicio 1: Crear una lista que almacene "n" numeros enteros y calcular
el menor y mayor de ellas
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

int main()
{
	Nodo *lista=NULL;
	int dato;
	char respuesta;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarLista(lista,dato);
		
		cout<<"Desea agregar otro nodo (S/N): ";
		cin>>respuesta;
	}while(respuesta=='s' || respuesta=='S');
	
	cout<<"\nElementos de la lista: \n";
	mostrarLista(lista);
	
	calcularMayorMenor(lista);
	
	getch();
	return 0;
}

//Agregar elementos al final de la lista
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if(lista == NULL){//Si la lista esta vacia
		lista=nuevo_nodo;
	}
	else{
		aux=lista; //aux apunta al inicio de la lista
		while(aux->siguiente != NULL){ //Recorriendo la lista
			aux=aux->siguiente; //avanzamos posiciones en la lista
		}
		aux->siguiente = nuevo_nodo; //agrega nuevo nodo a la lista
	}
	cout<<"\n\tElemento "<<n<<" agregado a la lista correctamente. \n";
}

//Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista){
	while(lista!=NULL){//Mientras no sea el final de la lista
		cout<<lista->dato<<" -> ";
		lista=lista->siguiente; //avanzamos una posicion en lista
	}
}

//calcular el mayor y el menor elemento de la lista
void calcularMayorMenor(Nodo *lista){
	int mayor=0, menor=999999;
	
	while(lista!=NULL){//recorremos la lista
		if((lista->dato) > mayor){
			mayor=lista->dato;
		}
		if((lista->dato) < menor){
			menor = lista->dato;
		}
		lista=lista->siguiente;
	}
	
	cout<<"\nEl mayor elemento es: "<<mayor<<endl;
	cout<<"\nEl menor eleemento es: "<<menor<<endl;
}
