/*
 Insertando elementos a una cola
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de la funci�n
void insertarCola(Nodo *&, Nodo *&,int);
bool cola_vacia(Nodo *);
//Eliminando datos de la cola
void suprimirCola(Nodo *&, Nodo *&, int &);

int main()
{
	Nodo *frente=NULL;
	Nodo *fin= NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"\nDigite un segundo numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"\nDigite un tercer numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	//Eliminar los elementos de la cola
	cout<<"\nQuitando los nodos de la cola: \n";
	while(frente != NULL){
		suprimirCola(frente,fin, dato);
		
		if(frente != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" . ";
		}
	}
	
	getch();
	return 0;
}

//FUNCION PARA INSERTAR ELEMENTOS EN UNA COLA

void insertarCola(Nodo *&frente, Nodo *&fin,int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if(cola_vacia(frente)){
		frente=nuevo_nodo;
	}
	else{
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
	
	cout<<"\nElemento "<<n<<" insertando a cola correctamente.\n";
}

//Funcion para determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente){
	return (frente ==NULL) ? true:false;
}

//Funcion para eliminar elementos de la cosa
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n=frente->dato;
	Nodo *aux=frente;
	if(frente==fin){
		frente=NULL; fin=NULL;
	}
	else{
		frente=frente->siguiente;
	}
	delete aux;
}

