/*
	Escribir un programa para la ecuacion de segundo grado
	
	ax^2 + bx +c =0 teniendo en cuenta la formula chicharronera
	
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c,x1=0,x2=0;
	
	cout<<"\nDigite el valor de a: "<<endl; cin>>a;
	cout<<"\nDigite el valor de b: "<<endl; cin>>b;
	cout<<"\nDigite el valor de c: "<<endl; cin>>c;
	
	x1=(-(b)+(sqrt(pow(b,2)-(4*(a*c)))) )/(2*a);
	
	x2=(-(b)-(sqrt(pow(b,2)-(4*(a*c)))) )/(2*a);
	
	cout.precision(2);
	cout<<"\nEl valor de la ecuacion en X1 es: "<<x1<<endl;
	cout<<"\nEl valor de la ecuacion en X2 es: "<<x2<<endl;
	
	return 0;
}
