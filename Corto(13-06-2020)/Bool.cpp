#include <iostream>
#include <conio.h>

using namespace std;
bool Bisiesto(int);
int main()
{
    int New;
    cout<<"Se le solicita que ingrese un numero de year, Por ejemplo:2075"<<endl; cin>>New;
    if(Bisiesto(New)==true){
        cout<<"Su year si es bisiesto";
    }if(Bisiesto(New)==false){
        cout<<"Su year no es bisiesto";
    } 

    return 0;
    
	getch();
    return 0;
}// Defincion 
bool Bisiesto(int New)
{	int R1,R2,R3;
    R1=New%400;
    if (R1==0)
    {
        return true;
    }
    R2=New%4;
    R3=New%100;
	if (R2=0 && R3!=0)
    {
        return true;
    }else{
    	return false;
    }
}