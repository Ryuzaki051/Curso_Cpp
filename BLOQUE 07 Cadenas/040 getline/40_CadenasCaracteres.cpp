//Cadenas de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[]="Alejandro";
	char palabra2[]={'A','l','e','j','a','n','d','r','o'};
	char nombre[30];
	
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	cout<<"\nDigite su nombre: ";
	//cin>>nombre; cin-> no es recomendable bajo cadenas
	//gets(nombre); esta instruccion toma/roba espacio demas
	cin.getline(nombre,20,'\n'); // la mejor forma de guardar caracteres
	
	cout<<nomre<<endl;
	
	
	
	getch();
	return 0;
}
