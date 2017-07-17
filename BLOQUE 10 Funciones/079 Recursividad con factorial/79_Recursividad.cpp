/* Recursividad
Factorial de un numero 	3!= 3*2*1

	caso base: if 0! = 1

	factorial(n) = 1				, SI n=0
					n*factorial(n-1), SI n>0
*/

#include<iostream>
#include<conio.h>
using namespace std;


int factorial(int);


int main()
{
	cout<<"Factorial: "<<factorial(5);
	cout<<"\n";
	
	getch();
	return 0;
}

int factorial(int n){
	if(n==0){//Caso base
		n=1;
	}else{//Caso General
		n=n*factorial(n-1);
	}
	
	return n;
}
