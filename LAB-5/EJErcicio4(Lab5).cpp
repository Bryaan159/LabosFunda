#include <iostream>
using namespace std;


bool Bisiesto(int)
int main()
{
    int Dia,Mes,Houes,aux;
    cout<<endl;
    cout<<"CAMBIO DE DIA SEGUN AÑO BISIESTO"<<endl;

    cout<<"Ingrese un valor para Dia "<<endl; cin>>Dia;
    cout<<"Ingrese un valor para Mes "<<endl; cin>>Mes;
    cout<<"Ingrese un valor para Año "<<endl; cin>>Año;
    
    switch (Mes)
    {
    case 1:
        Limit=31;
        break;
    case 2:
        if (Bisiesto(Año)==true)
        {
         Limit=29;
        }else
        {
          Limit=28;
        }  
        break;
    case 3:   
        Limit =31;
        break;
    case 4:
        Limit = 30;
        break;
    case 5:
        Limit =31;
        break;   
    case 6:
        Limit =30;
        break; 
    case 7:
        Limit =31;
        break;  
    case 8:
        Limit =31;
        break; 
    case 9:
        Limit =30;
        break;
    case 10:
        Limit =31;
        break;
    case 11:
        Limit =30;
        break;
    case 12:
        Limit =31;
        break;
    default:
        break;}
    return 0;
    Dia=Dia++
    if (Dia>Limit)
    {
        Dia=1;
        Mes=Mes++;
        if (Mes>12)
        {
            Mes=1;
            Año=Año++;
        }    
    }
    cout<<"La fecha actualizada es:"<<Dia<<"-"<<Mes<<"-"<<Año<<endl;

// Definicion de funciones
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

}
