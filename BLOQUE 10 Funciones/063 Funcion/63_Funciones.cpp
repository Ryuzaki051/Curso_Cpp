 //Ejemplo de encontrar el mayor de 2 numeros
 
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 //Prototipo de Funcion
 int encontrarMax(int x, int y);
 
 
 
 int main(){
 	int n1,n2;
 	//int mayor;
 	cout<<"Digite dos numeros: ";
 	cin>>n1>>n2;
 	
 	
 	//Forma uno de expresar la implementacion de una funcion
 	//mayor=encontrarMax(n1,n2);
 	//cout<<"\nEl valor de los dos numeros es: "<<mayor<<endl;
	 
	//forma dos de expresar y reducir la forma uno de una funcion 	
 	cout<<"\nEl valor de los dos numeros es: "<<encontrarMax(n1,n2)<<endl;
	 
	 getch();
 	return 0;
 }
 
 //Definicion de funcion
 int encontrarMax(int x, int y){
 	int numMax;
 	
 	if(x>y){
 		numMax=x;
	 }
	 else{
	 	numMax=y;
	 }
 	return numMax;
 }
