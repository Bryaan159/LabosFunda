/*Contar la longitud de la palabra con dos condiciones seguidas*/
#include <iostream>

using namespace std;

int main()
{   string palabra;
    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;

    if ((palabra.size()%2)==0){

        cout<<"Su palabra "<<palabra<<" es par"<<endl;
    }else{
        cout<<"Su palabra "<<palabra<<" es impar"<<endl;
    }if ((palabra.size()>10)){
        cout<<"Su palabra "<<palabra<<" es mayor a diez caracteres"<<endl;
    }else{
        cout<<"Su palabra "<<palabra<<" no es mayor a diez caracteres"<<endl;
    }
    

    return 0;
}