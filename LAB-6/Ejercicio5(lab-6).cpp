#include <iostream>
using namespace std;
int main()
{	
	int k,i=0;
	int a=100;
	int arreglo[100];
	k=1;
	for(i; i<a; i++)
	{
		arreglo[i] = k;
  		k=k+2;
	}
	//for(i=0;i<100;i++){cout<<"Elementos: "<<arreglo[i]<<endl;
	for(i=99;i>=0;i--)
	{
		cout<<"Elemento: "<<arreglo[i]<<endl;
	}
			return 0;
}
