//transformar una cadena a numeros - funcion atoi() y atof ()

//"123" -> 123 


#include<iostream>
#include<conio.h>
#include<stdlib.h>
//#include<string.h> no sirve para la conversion con atoi y  atof
using namespace std;

int main(){
	char cad1[]="123";
	char cad2[]="123.456";
	int numero;
	float numero2;
	
	numero=atoi(cad1); // valores enteros
	numero2=atof(cad2); // valores con punto flotante
	
	cout<<numero<<endl;
	cout<<numero2<<endl;	
	
	getch();
	return 0;
}
