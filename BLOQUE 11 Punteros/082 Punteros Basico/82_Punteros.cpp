/* Punteros

&n = La direccion de n
*n = La variable cuya direccion esta almacenad en n0000  

*/

#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int num,*dir_num;
	
	num=20;
	dir_num=&num;
	
	
	//
	//cout<<"Numero: "<<num<<endl;
	//cout<<"\nDirecccion de memoria: "<<&num<<endl;
	
	cout<<"Numero: "<<*dir_num<<endl; // valor de memoria
	cout<<"\nDirecccion de memoria: "<<dir_num<<endl; //Direccion de memoria
	
	
	getch();
	return 0;
}
