/*
	Sentencia while
	
	while(expresion logica){
		conjunto de instrucciones;
	}

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i,j;
	j=10;
	i=1;
	
	while(i<=10){
		cout<<i<<endl;
		//i=i+1;
		//i+=1;
		i++;
	}
	
	while(j>=1){
		cout<<j<<endl;
		j--;
	}
	
	getch();
	return 0;
}
