#include <iostream>
using namespace std;
int MCD(int);
int main()
{
    int Max,Min,B;
    cout<<"Ingrese el número mayor: "<<endl; cin>>Max;
    cout<<"Ingrese el numero menor: "<<endl; cin>>Min;
    B=MCD(Max,Min);   //Se coloca las variables que va a trabajar
    cout<<"SU MCD es: "<<B<<endl;

    return 0;
}// Definicíon
int MCM(int Max, int Min)
{
    int residuo;
    do
    {
       residuo=Max%Min;
       if(residuo !=0){
           Max=Min;
           Min=residuo;
       }
    
    } while (residuo != 0);
        cout<<"Su MCD es: "<<Min<<endl;
    
    return Min;  

}