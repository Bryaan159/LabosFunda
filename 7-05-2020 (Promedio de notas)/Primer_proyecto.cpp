/*Primer programa sobre el promedio de 3 números enteros ingresados por el usuario*/

#include<iostream>
using namespace std;

int main(){
    int klip=3,a,b,c,resultado=0;
    cout<<"Bienvenido al proceso para calcular el promedio"<<endl;
    cout<<"Cual es su primera nota? "<<endl;
    cin>>a;
    cout<<"Cual es su segunda nota? "<<endl;
    cin>>b;
    cout<<"Cual es su tercera nota? "<<endl;
    cin>>c;
    resultado = (a+b+c)/klip;
    cout<<"Su promedio es un total de: "<<resultado;
    return 0;
}
