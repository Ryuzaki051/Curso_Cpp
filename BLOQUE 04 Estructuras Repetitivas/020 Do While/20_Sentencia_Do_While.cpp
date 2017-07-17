/**
	Sentencia do - while
	
	do{
	
	}
	while(expresion logica);
	
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int i,j;
	
	i=1, j=10;
	
	do{
		cout<<i<<endl;
		i++; // incrementa el iterador de 1 en 1
	}while(i<=10);
	
	do{
		cout<<j<<endl;
		j--; // decrementa el iterador de 1 en 1
	}while(j>=1);
	
	system("pause");
	return 0;
}
