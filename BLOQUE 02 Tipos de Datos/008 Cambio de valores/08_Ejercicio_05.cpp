/*
 5. Escriba un fragmento de programa que intercambie los valores de dos variables
 
*/

#include<iostream>

using namespace std;

int main(){
	
	int x,y,aux;
	
	cout<<"\nDigite el valor de x: "; cin>>x;
	cout<<"\nDigite el valor de y: "; cin>>y;
	/*
	x=10
	y=5
	
	aux=10
	x=5
	y=10
	
	*/
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"\nEl nuevo valor de y es: "<<y<<endl;
	
	return 0;
}
