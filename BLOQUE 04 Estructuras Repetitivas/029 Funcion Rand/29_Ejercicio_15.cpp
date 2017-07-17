/**
	Realice un prorama que solicite al usuario que piense un numero entero entre el 1 el 100.
	El programa debe generar un numero aleatorio en ese mismo rango [1-100], e indicarle al usuairo
	si el numero que digito es menor o mayor al numero aleatorio, asi hasta que lo adivine. Y por ultimo
	mostrarle el numero de intentos que le llevo
	
	variable = limite_inferior + rand() % (limite_superior + 1 - Limite_inferior);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, dato, contador =0;
	
	srand(time(NULL)); //Generar un numero aleatorio
	dato= 1 + rand()%(100-1); //25
	
	do{
		cout<<"\n Digite un numero: "; cin>>numero; //15
		
		if(numero>dato){
			cout<<"\nDigite un numero menor:\n";
		}
		if(numero<dato){
			cout<<"\n Digite un numero mayor: \n";
		}
		contador++;
		
	}while(numero!=dato);
	
	cout<<"\n FELICIDADES ADIVINASTE EL NUMERO\n";
	cout<<"\nNumero de intentos: "<<contador<<endl;
	
	system("pause");
	return 0;
}
