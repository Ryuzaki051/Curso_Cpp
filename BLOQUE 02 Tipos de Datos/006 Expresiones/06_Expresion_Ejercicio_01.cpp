//1.- Escribe la siguiente expresion en c++

// a) a/b+1

#include<iostream>

using namespace std;

int main(){
	float a,b,resultado=0;
	
	cout<<"\nDigite el valor de a: ";  cin>>a;
	cout<<"\nDigite el valor de b: ";  cin>>b;

	resultado=(a/b)+1;
	
	cout.precision(2);
	cout<<"\nEl resultado de la expresion es: : "<<resultado<<endl;
	
	return 0;
}
