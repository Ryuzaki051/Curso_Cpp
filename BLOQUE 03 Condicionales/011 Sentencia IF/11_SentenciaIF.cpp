/*
	sentencia if
*/

#include<iostream>

using namespace std;

int main()
{
	int numero, dato=5;
	
	cout<<"\nDigite un numero: ";
	cin>>numero;
	
	if(numero!=dato)
	{
		cout<<"\nEl numero no es 5";
	}
	else
	{
		cout<<"El numero es 5"; 
	}
	
	return 0;
}
