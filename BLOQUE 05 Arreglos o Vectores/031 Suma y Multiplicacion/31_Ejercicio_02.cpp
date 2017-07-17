// Escribe un programa que defina un vector de numeros y calcule la multiplicacion
//acumulada de sus elementos.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int vector[10];
	int n, multiplicacion=0;
	
	cout<<"Digite un numero para realizar la multiplicacion: ";
	cin>>n;
	
	for(int i=0;i<=n;i++){
		multiplicacion*=vector[i];
	}
	
	cout<<"\nLa multiplicacion de "<<n<< " es: "<<multiplicacion<<endl;
	
	system("pause");
	return 0;
}
