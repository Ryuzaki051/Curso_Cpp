/*
	11.- Hacer un programa que simule un cajero automatico con un saldo
	inicial de 1000 dolares

**/

#include<iostream>

using namespace std;

int main(){
	int saldo_inicial=1000, opc;
	float extra, saldo=0, retiro;
	
	cout<<"\t Bienvenido a su cajero virtual..."<<endl;
	cout<< "\n1.- Ingresar dinero en cuenta";
	cout<< "\n2.- Retirar dinero de la cuenta";
	cout<< "\n3.- Salir";
	cout<< "\nOpcion ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\nDigite la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo=saldo_inicial+extra;
			cout<<"\nDinero en cuenta: "<<saldo;
			break;
			
		case 2:
			cout<<"\nDigite la cantidad de dinero a retirar: ";
			cin>>retiro;
			
			if(retiro > saldo_inicial){
				cout<<"Usted no cuenta con esa cantidad de dinero.";
			}
			else if(retiro <= saldo_inicial){
				saldo=saldo_inicial- retiro;
				cout<<"Dinero en cuenta: "<<saldo;
			}
			break;
		case 3: cout<<"\nGracias por visitarnos..."; break;
			
	}
	return 0;
}
