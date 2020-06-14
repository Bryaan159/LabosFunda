#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a=45,b,intento=5; //La respuesta es 45
	int n, opcion;
	do
	{
		cout<<"\n 1. Comenzar";
		cout<<"\n 2. Salir"<<endl;
		cout<<"\nIntroducir una opcion"<<endl;	cin>>opcion;
		switch(opcion)
		{
			case 1:for (int i = intento; i > 0; i--)
    				{cout<<"El numero de intentos que le queda son: "<<i<<endl;
       	 			cout<<"Ingrese un numero: "<<endl; cin>>b;
    				if (a<b)
    				{
        			cout<<"Su numero ingresado es mayor al numero secreto"<<endl;
    				}
    				if(a>b)
    				{
        			cout<<"Su numero es menor al numero secreto"<<endl;
    				}if(a==b){
        			cout<<"Felicidades decubriste el numero secreto";
        			break;
    				}				
					}
					break;
   		 }	
	}while (opcion !=2 && intento!=0);

	return 0;
}
