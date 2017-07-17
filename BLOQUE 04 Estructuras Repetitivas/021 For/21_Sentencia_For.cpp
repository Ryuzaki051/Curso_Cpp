/**
 	Sentencia FOR
 	
 	for(expresion 1; expresion logica; expresion 2){
 		conjunto de instrucciones;
 	}
 	
*/

#include<iostream>
#include<conio.h>

using namespace std;
 
int main(){
	int i;
	
	for(i=1; i<=10; i++){
		cout<<i<<endl;
	}
	
	for(int j=10; j>=1; j--){
		cout<<j<<endl;
	}
	
	getch();
	return 0;
}
