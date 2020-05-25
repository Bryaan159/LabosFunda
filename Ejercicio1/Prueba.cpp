/* Un número es divible entre otro numero */
#include <iostream>
using namespace std;

int main()
{   int a,b;
    cout<<"Ingrese un numero "<<endl;
    cin>>a;

    cout<<"Ingrese un numero "<<endl;
    cin>>b;

    if (a%b==0)
    {
       cout<<"Su numero es divisible entre otro numero";

    }
    else
    {
        cout<<"Su numero no es divisible entre otro numero";
    }
    
    return 0;
} 