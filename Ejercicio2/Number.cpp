/* Verificar si un número es par o impar*/ 
#include <iostream>
using namespace std;

int main(){
	int N=0,M;
	cout<<endl;
	cout<<"NUMERO ES PAR O IMPAR"<<endl;
	
	cout<<"Ingrese un numero"<<endl; cin>>N;
	
	if(N%2==0){
		cout<<"Su numero: "<<N<<" es par"<<endl;
	}
	else
	{
		cout<<"Su numero: "<<N<<" es impar"<<endl;
	}
	
	
	return 0;
}
