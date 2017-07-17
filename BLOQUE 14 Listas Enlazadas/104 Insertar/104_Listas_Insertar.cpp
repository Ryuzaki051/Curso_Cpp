/*  Listas Enlazadas
Insertando elementos a la lista
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
void insertarLista(Nodo *&, int);


int main()
{
	Nodo *lista=NULL;
	int dato;
	
	cout<<"Insertando lista de numeros: \n";
	
	cout<<"\nDigite un numero: ";
	cin>>dato;
	insertarLista(lista,dato);
	
	cout<<"\nDigite otro numero: ";
	cin>>dato;
	insertarLista(lista,dato);
	
	getch();
	return 0;
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
