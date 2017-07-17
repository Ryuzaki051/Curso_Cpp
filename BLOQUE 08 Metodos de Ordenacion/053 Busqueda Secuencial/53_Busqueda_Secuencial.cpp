//Busqueda secuencial

//a[5]={3,4,2,1,5}; dato= 4; 

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char letra[]={'u','a','i','e','o'},dato2;
	int a[]={3,4,2,1,5};
	int i, dato;
	char band='F';
	
	dato2='e';
	dato=10;
	
	//Busqueda secuencial para numeros
	i=0;
	while((band=='F') && (i<5)){
		if(a[i]==dato){
			band='V';
		}
		i++;
	}
	
	if(band=='F'){
		cout<<"\nEl numero a buscar no existe en el arreglo";
	}
	else if(band=='V'){
		cout<<"\nEL numero a sido encontrado en la pos: "<<i-1<<endl;
	}
	
	cout<<"\n";
	
	//Busqueda secuencial para letras
	i=0;
	while((band=='F') && (i<5)){
		if(letra[i]==dato2){
			band='V';
		}
		i++;
	}
	
	if(band=='F'){
		cout<<"\nLa vocal a buscar no existe en el arreglo";
	}
	else if(band=='V'){
		cout<<"\nLa vocal buscar a sido encontrado en la pos: "<<i-1<<endl;
	}

	
	getch();
	return 0;
}
