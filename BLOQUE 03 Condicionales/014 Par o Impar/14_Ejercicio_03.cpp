/*
 Realice un programa que lea un valor entero y determine si se trata de un numero 
 par o impar
*/

#include<iostream>

using namespace std;

int main()
{
	int numero;
	
	cout<<"\nDigite un numero: "<<endl;
	cin>>numero;
	
	if(numero==0){
		cout<<"\nEl numero es 0";
	}
	
	else if(numero%2==0){
		cout<<"El numero es par";
	}else{
		cout<<"El numero es impar";
	}
	
	return 0;
}
