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

int main()
{
	Nodo *frente=NULL;
	Nodo *fin= NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	
	insertarCola(frente,fin,dato);
	
	cout<<"\nDigite otro numero: ";
	cin>>dato;
	
	insertarCola(frente,fin,dato);
	
	
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
	
	/*
	if(frente==NULL){
		return true;
	}
	else{
		return false;
	}*/
}
