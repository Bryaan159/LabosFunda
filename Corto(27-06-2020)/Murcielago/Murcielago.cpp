#include <iostream>

#include <locale.h>
using namespace std;
char convertir(char[]);
int main()
{	
	setlocale(LC_CTYPE, "Spanish");
	char palabra[40];
	cout<<"Cuál es la palabra a convertir: "<<endl;
	cin.getline(palabra, 30);
	
	convertir(palabra);
}
char convertir(char palabra[])
{	
	
	for( int i=0;i<20;i++)
	{
		switch(palabra[i])
		{
			case 'm':
				palabra[i]='0';
			break;
			
			case 'u':
				palabra[i]='1';
			break;
			
			case 'r':
				palabra[i]='2';
			break;
			
			case 'c':
				palabra[i]='3';
			break;
			
			case 'i':
				palabra[i]='4';
			break;
			
			case 'e':
				palabra[i]='5';
			break;
			
			case 'l':
				palabra[i]='6';
			break;
			
			case 'a':
				palabra[i]='7';
			break;
			
			case 'g':
				palabra[i]='8';
			break;
			
			case 'o':
				palabra[i]='9';
			break;
		}
		
	}
	cout<<palabra<<endl; 
}