/*Realizar un programa en C++ que reciba el radio de un círculo y calcular su área y perimetro*/
 
 #include<iostream>
 #include<math.h>           
 using namespace std;

 int main(){
     const double PI = 3.141592654;
     float r,area=0,c,perimetro=0;
     cout<<"Ingrese el valor de radio para el cirulo: "; cin>>r;
     area=PI*(pow(r,2));
     cout<<"Su valor de area es:"<<endl<<area;
     perimetro=(2)*(PI)*(r);
     cout<<"\nSu valor de perimetro es:"<<endl<<perimetro;
        
    return 0;
 }