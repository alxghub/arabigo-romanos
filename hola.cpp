/*
Programa en C++ que permite convertir un numero del 1 al 1000 a su equivalente a Numero Romano
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int na[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
string nr[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

void conNumRom(int n){
	int i=0;
	while(n>0){  //n=5
		if(n>=na[i]){
			cout<<nr[i];
			n=n-na[i];
		}
		else
			i=i+1;
	}
}

int main(){
	int n;
	cout<<"Ingrese un numero: "; cin>>n;
	conNumRom(n);
	cout<<"Hi World";
    getchar();
	return 0;
}
