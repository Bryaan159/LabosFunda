#include <iostream>
#include <string.h>
using namespace std;

const int longCad = 20;
struct costoPorArticulo{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};
void leerdatos(costoPorArticulo*,int);
float preciodatos(costoPorArticulo*,int);
void mostrardatos(costoPorArticulo*,int);
float preciofinal(costoPorArticulo*, int);
int main()
{
    int n;
    float save;
    cout<<"Paprika y Azucar"<<endl<<endl;
    cout<<"Cuantos articulos ingresara: "<<endl; cin>>n;
    cin.ignore(100,'\n');
    costoPorArticulo *listado = new costoPorArticulo[n];
    leerdatos(listado,n);
    mostrardatos(listado,n);
    preciodatos(listado,n);
    save=preciofinal(listado,n);
    cout<<"\nEl precio total de la compra es:$ "<<save<<endl<<endl;
    cout<<"Gracias por su preferencia al realizar su compra"<<endl;
    cout<<"#Quedate en casa"<<endl<<endl;
    
    return 0;
}
void leerdatos(costoPorArticulo *articulos,int n)/*Miestras se llame la misma estrucutura no hay problema
Se coloca un asterico para indicarle y almacenarla*/
{   
    cout<<"Ingrese los datos respectivo"<<endl;
    int i=0;
    for(i;i<n;i++)
    {
        cout<<"Ingrese el nombre del articulo: ";
        cin.getline(articulos[i].nombreArticul,longCad); //LongCad es cuadno no deseo poner el numero exacto!

        cout<<"\nCual es la cantidad de "<<articulos[i].nombreArticul<<": "<<endl;
        cin>>articulos[i].cantidad;
        //cin.ignore se coloca el final se habla de tipo enteros y antes tienes un getline xd!
        cout<<"Cual es el precio de "<<articulos[i].nombreArticul<<":"<<endl;
        cin>>articulos[i].precio;
        cin.ignore(100,'\n');
        system("cls");
    }
}
void mostrardatos(costoPorArticulo *articulos, int n)
{   cout<<"\nPaprika y Azucar"<<endl<<endl;
    int i=0;
    for(i;i<n;i++)
    {
        cout<<i+1<<"."<<" La cantidad de "<<articulos[i].nombreArticul<<" es: "<<articulos[i].cantidad<<endl;
        cout<<i+1<<"."<<" El precio unitario "<<articulos[i].nombreArticul<<" es:"<<"$"<<articulos[i].precio<<endl;
        cout<<endl;
    }
}
float preciodatos(costoPorArticulo *articulos, int n)
{
    int i=0;
    for(i;i<n;i++)
    {
        articulos[i].costoPorArticulo=articulos[i].cantidad * articulos[i].precio;
        cout<<"El costo de "<<articulos[i].nombreArticul<<" es: "<<"\n$"<<articulos[i].costoPorArticulo<<endl;
    }
    
}
float preciofinal(costoPorArticulo *articulos, int n)
{
    int i=0;
    float totaldesuma=0;
    for(i;i<n;i++)
    {   
       /* Es acumular el valor de totaldesuma que inicie en 0 y
       el primer valor de costo del articulo, cuando termine suma el otro articulo y asi sucesivamente hasta
       terminar el lazo for*/ 
       totaldesuma+=articulos[i].costoPorArticulo; 
    }
    return totaldesuma;
}
