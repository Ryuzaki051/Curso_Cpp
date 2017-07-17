/*
19.- Realice una funcion recursiva que sume los primeros n enteros positivos
Nota: para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse
mediante la siguiente recurrencia:

	suma(n)=1				, Si n=1
			n+suma(n-1)		, Si n>1

*/

#include<iostream>
#include<conio.h>
using namespace std;

int sumar(int);

int main()
{
	int nElementos;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos <=0 );
	
	
	cout<<"\n La suma es: "<<sumar(nElementos)<<endl;
	
	getch();
	return 0;
}

int sumar(int n){
	int suma=0;
	
	if(n==1){ //Caso Base
		suma=1;
	}
	else{ //Caso General
		suma=n+sumar(n-1);
	}
	
	return suma;
}
