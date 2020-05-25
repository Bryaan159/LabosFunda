/* Verificar sí la palabra con su letra inicial posee la misma que la última letra*/ 
#include <iostream>
using namespace std;

int main()
{
    string palabra;
        cout<<"Ingrese una palabra"<<endl;
        cin>>palabra;

        if (palabra.front() == palabra.back()){ 

            cout<<"En ambas palabras posee la misma letra"<<endl;
        }else{
            cout<<"No posee la misma letra en ambas palabras"<<endl;
        }

     

    return 0;
}
