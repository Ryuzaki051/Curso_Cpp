/*
Correspondencia entre array y punteros
*/

#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int numeros[]={1,2,3,4,5};
	int *dir_numeros;
	
	dir_numeros=numeros;  //dir_numeros= &numeros[0]; 
	
	for(int i=0;i<5;i++){
		//cout<<"Elemento del vector ["<<i<<"]: "<<*dir_numeros++<<endl;
		cout<<"Posicion de Memoria "<<numeros[i]<<" es: "<<dir_numeros++<<endl;
	}
	
	cout<<"";
	
	getch();
	return 0;
}
