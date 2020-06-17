#include <iostream>

using namespace std;

int main();
{   
    int Hora, Minutos, Segundos;
    cout<<"Ingrese el valor de hora: "<<endl; cin>>Hora;
    cout<<"Ingrese el valor de minutos: "<<endl; cin>>Minutos;
    cout<<"Ingrese el valor de segundos: "<<endl; cin>>Segundos;

    do
    {
        cout<<"Ingrese el valor de hora: "<<endl; cin>>Hora;
    } while (Hora>=0 && Hora<24);
    do
    {
        cout<<"Ingrese el valor de minutos: "<<endl; cin>>Minutos;
    } while (Minutos>0 && Minutos<60);
    do
    {
        cout<<"Ingrese el valor de segundos: "<<endl; cin>>Segundos;
    } while (Segundos>0 && Segundos<24);
    
        Segundos=Segundos++;
        if (Segundos>59)
        {
            Segundos=0;
            Minutos = Minutos++;
            if(Minutos>59){
                Minutos=0;
                Hora= Hora++;
            }   if(Hora>23){
                Hora = 0;
            }
        }
        cout<<"Su hora es: "<<Hora<<Minutos<<Segundos<<endl;      
        
    return 0;
}