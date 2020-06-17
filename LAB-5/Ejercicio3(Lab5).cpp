#include <iostream>

using namespace std;
bool Bisiesto(int);
int main()
{
    int Año;
    cout<<"Se le solicita que ingrese un número de año, Por ejemplo:2075"; cin>>Año;
    if(Bisiesto(Año)==true){
        cout<<"Su año si es bisiesto";
    }if(Bisiesto(Año)==false){
        cout<<"Su año no es bisiesto";
    } 

    return 0;
}// Defincion 
bool Bisiesto(int Año)
{
    Año=Año%400;
    if (Año=0)
    {
        return true;
    }if (Año=Año%4==0 && Año=Año%100!=0)
    {
        return true;
    }else

     return false;
}