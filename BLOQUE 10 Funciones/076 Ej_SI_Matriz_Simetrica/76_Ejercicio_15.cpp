/*Ejercicio 15: Desarrollar una funcion que determine si una matriz es simetrica o no

una matriz es simetrica: A= A^t

- La matriz debe ser cuadrada
- Aij = Aji

|2  5   9 |				|2  5   9 |
|5  8 - 1 |		-->		|5  8 - 1 |
|9 -1  10 |				|9 -1  10 |

*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();

int m[100][100], nfilas, ncol;
void comprobarSimetria(int m[][100], int, int);


int main()
{
	
	pedirDatos();
	comprobarSimetria(m,nfilas,ncol);
	
	cout<<"";
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"\nDigite el numero de columnas: ";
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite el numero [ "<<i<<" ] [ "<<j<<" ]: ";
			cin>>m[i][j];
		}
	}
}

void comprobarSimetria(int m[][100],int nfilas, int ncol){
	int cont=0;
	
	if(nfilas==ncol){
		for(int i=0;i<nfilas;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j]==m[j][i]){
					cont++;
				}	
			}
		}
	}
	
	if(cont == nfilas*ncol){
		cout<<"\nLa matriz es simetrica";
	}
	else{
		cout<<"\nLa matriz NO es simetrica";
	}

}
