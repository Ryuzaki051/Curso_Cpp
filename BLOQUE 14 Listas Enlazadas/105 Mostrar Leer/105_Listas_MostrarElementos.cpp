/*  Listas Enlazadas
Mostrando Elementos
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};


//Prototipos de funciones
void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

Nodo *lista=NULL;


int main()
{
	cout<<"Insertando lista de numeros: \n";
	menu();
	
	getch();
	return 0;
}


void menu(){
	int opcion, dato;
	
	do{
		cout<<"\t ***MENU***\n";
		cout<<"\n1.- Insertar elementos a la lista.\n";
		cout<<"2.- Mostrar Elementos a la lista\n";
		cout<<"3.- Salir\n";
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					insertarLista(lista,dato);
					cout<<"\n";
					system("pause");
					break;
			case 2:	mostrarLista(lista);
					cout<<"\n";
					system("pause");
				break;
		}
		system("cls");
	}while(opcion!= 3);
}


void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if(lista==aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	
	nuevo_nodo->siguiente=aux1;
	cout<<"\n\tElemento "<<n<<" insertado a la lista correctamente!!..";
}


void mostrarLista(Nodo *lista){
	Nodo *actual=new Nodo();
	
	actual=lista;
	while(actual != NULL){
		cout<<actual->dato<<" -> ";
		actual=actual->siguiente;
	}
}

