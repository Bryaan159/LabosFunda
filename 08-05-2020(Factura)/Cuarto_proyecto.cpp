#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()

{  
   cout<<"Bienvenidos a PAPRIKA Y AZUCAR"<<endl<<endl;
   int Cantidad;
   float Precio,resultado=0,IVA=0,Total=0; 
   char Producto [60];   	
   cout<<"Ingrese su producto:"<<endl;
   cin>>Producto;
   cout<<"Ingrese la cantidad que desee comprar: "<<endl;
   cin>>Cantidad;
   cout<<"Cuanto es el precio del producto: "<<endl;
   cin>>Precio;
   resultado = Cantidad*Precio;
   IVA = resultado*0.13;
   Total = resultado + IVA;
   cout<<"Su producto es "<<Producto<<endl;
   cout<<"El precio de su producto es $"<<resultado<<endl;
   cout<<"Cantida de IVA es $"<<IVA<<endl;
   cout<<"La venta total fue de $"<<Total;
   
    return 0;
}