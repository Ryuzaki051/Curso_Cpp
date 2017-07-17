/*

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;


struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo
void agregarPila(Nodo *&,int);

int main()
{
	Nodo *pila=NULL;
	
	int n1,n2;
	
	cout<<"Digite un numero: ";
	cin>>n1;
	
	agregarPila(pila,n1);
	
	cout<<"\nDigite otro numero: ";
	cin>>2;
	
	agregarPila(pila,n2);
	
	getch();
	return 0;
}

void agregarPila(nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente=pila;
	
	pila = nuevo_nodo;
	cout<<"\nElemento "<<n<<" agregado a PILA correctamente."<<endl;
}
