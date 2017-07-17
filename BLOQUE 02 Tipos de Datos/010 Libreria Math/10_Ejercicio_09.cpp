/*
9.-  Realice un programa que calcule el valor que toma la siguiente funcion para unos 
valores dados de x e y;

*/

#include<iostream>
#include<math.h>


using namespace std;

int main(){
	float x,y, resultado=0;
	
	cout<<"Digite el valor de x: "<<endl; cin>>x;
	cout<<"\nDigite el valor de y: "<<endl; cin>>y;
	
	
	resultado=(sqrt(x))/(pow(y,2)-1);
	
	cout.precision(2);
	cout<<"\n El resultado de la expresion es: "<<resultado<<endl;
	
	return 0;
}
