//Comparar dos cadenas - funcion strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra1[]="Hola";
	char palabra2[]="Hola";
	
	char palabra3[]="Hola";
	char palabra4[]="Alejandro";
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"\nAmbas cadenas son iguales";
	}
	
	
	if(strcmp(palabra3,palabra4)!= 0){
		cout<<"\nAmbas cadenas son diferentes";
	}else{
		cout<<"\nLas cadenas son iguales\n";
	}
	cout<<"\n";
	if(strcmp(palabra3,palabra4) > 0){
		cout<<palabra3 <<" esta despues alfabeticamente";
	}
	
	getch();
	return 0;
}
