/* Transmision de Direcciones

Ejemplo: Intercambiar el valor de dos variables

*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo
void intercambio(float *, float *);

int main()
{
	float num1=20.8, num2=6.78;
	
	cout<<"Primer Numero: "<<num1<<endl;
	cout<<"Segundo Numero: "<<num2<<endl;
	
	intercambio(&num1,&num2); //llamada a la funcion intercambio
	
	cout<<"\n\nDespues del intercambio: \n\n";
	cout<<"El nuevo valor de num1 es: "<<num1<<endl;
	cout<<"El nuevo valor de num2 es: "<<num2<<endl;
	
	getch();
	return 0;
}

void intercambio(float *dirNm1, float *dirNm2){
	float aux;
	
	aux= *dirNm1;
	*dirNm1= *dirNm2;
	*dirNm2= aux;
}


