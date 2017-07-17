/*
Ejercicio 1: Hacer un programa para agregar numeros enteros a una pila hasta que el
usuario lo decida, despues mostrar todos los numeros introducidos en la pila.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};


void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main()
{
	Nodo *pila=NULL;
	int dato;
	char rpt;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		
		agregarPila(pila,dato);
		cout<<"\nDeseas agregar otro elemento a PILA(s/n): ";
		cin>>rpt;
		
	}while((rpt=='S') || (rpt=='s'));
	
	cout<<"\nSacando todos los elementos de la Pila: ";
	
	while(pila!=NULL){ //Mientras no sea el final de la pila
		sacarPila(pila,dato);
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" . ";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nodo_nuevo=new Nodo();
	nodo_nuevo->dato=n;
	nodo_nuevo->siguiente=pila;
	pila=nodo_nuevo;
	
	cout<<"\n\tElemento "<<n<<" ha sido agregado a Pila correctamente.";
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n= aux->dato;
	pila= aux->siguiente;
	delete aux;
}
