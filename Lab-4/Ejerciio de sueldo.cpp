#include <iostream>
#include <conio.h>
using namespace std;
int Pago(int);
int main()
{   int Work,n;

    cout<<"Ingrese la N de empleados: "<<endl; cin>>n;
    Work=Pago(n);
    getch();
    return 0;
   
}
int Pago(int n ){

    int a,b,c,d,desc,desc1,e,e1,renta;
    for (int i=2 ; i <= n+1; i++)
    {
        cout<<"Ingrese la cantidad de horas trabajas: "; cin>>a;
        cout<<"Ingrese la cantidad de horas extras: "; cin>>b;
    	
        c=(a*1.75)+(b*2.50);
        desc=c*0.04;
        e=c-desc;
        desc1= c*0.0625;
        e1=c-desc1;
        if (c>500)
        { 
            cout<<"Se aplicara un 10% de Renta";
            renta=c*0.10;
            c=c-e-e1-renta;           //Es limitar a la varaiable para que tome en cuenta la Renta
        }else
        {
            cout<<"Su salario esta excento de Renta";
            c=c-e-e1;
        }
        	cout<<"\nAhora ingrese las horas N: "<<i<<endl;
    }       
    return c;
}
