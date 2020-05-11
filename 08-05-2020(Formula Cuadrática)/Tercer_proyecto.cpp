#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;        

int main()
{
    float resultado1=0,resultado2=0;
    int a,b,c;
    cout<<"Bienvenidos a la formula cuadratica"<<endl;
    cout<<"Ingrese el valor para a: "; cin>>a;
    cout<<"\nIngrese el valor para b: "; cin>>b;
    cout<<"\nIngrese el valor para c: "; cin>>c;
    resultado1=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
    cout<<"\nEl resultado de X1= "<<resultado1;
    resultado2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
    cout<<"El resultado de X2="<<resultado2;

    return 0;
}