/*

*/

#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int a=10;
	int *ptr=&a;
	
	cout<<"Valor de a: "<<a<<endl;
	cout<<"Direccion de a: "<<&a<<endl;
	cout<<"Direccion del Puntero sin(*): "<<ptr<<endl;
	cout<<"Direccion del Puntero con(*): "<<*ptr<<endl;
	cout<<"\n\nCambiando valores"<<endl;
	*ptr=25; //sobre escribe el valor de a (10) - a(25)
	cout<<"Valor de a: "<<a<<endl;
	cout<<"Valor del puntero sin(*): "<<ptr<<endl;
	cout<<"Valor del puntero con(*): "<<*ptr<<endl;
	cout<<endl;
	
	getch();
	return 0;
}
