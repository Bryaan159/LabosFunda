#include <iostream>

using namespace std ;

int main(){
    
    int N=0,Number;
    cout<<endl;
    cout<<"BIENVENIDOS A VERFICAR SU NUMERO SI ES POSITIVO, NEGATIVO O CERO "<<endl;
    cout<<"\nIngrese un numero para verificar ";
    cin>>N;
    if(N<0){
        cout<<"El numero "<<N<<" es negativo"<<endl;

    }
    else{
        if(N>0)
        cout<<"El numero "<<N<<" es positivo"<<endl;
    }
    if (N==0){
        cout<<"Su numero "<<N<<" es igual a cero "<<endl;
    }   


    return 0;
}
