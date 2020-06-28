#include <iostream>
using namespace std;
void saveMedia(float[26], int);
void showMedia(float[26], int);
float bpmMedia(float[], int);
float comparar(float, float[], int);
float diferencia(float, float[] , int);
int main()
{
	cout<<"Media de estaturas de alumnos"<<endl;
	
	float estaturas[26];
	int n;
	cout<<"\nCuantos alumnos se analizaran: "; cin>>n;
	
	saveMedia(estaturas, n);
	showMedia(estaturas, n);
	bpmMedia(estaturas,n);
	float save,save2,save3;
	save=bpmMedia(estaturas,n);
	save2=comparar(save, estaturas,n);
	save3=diferencia(save,estaturas,n);
	
	cout<<"El promedio de las estaturas son: "<<save<<endl;
	cout<<"La cantidad que hay arriba del promedio: "<<save2<<endl;
	cout<<"La cantidad que hay debajo del promedio: "<<save3<<endl;
	

	cout<<endl;
	
	return 0;
}
void saveMedia(float estaturas[], int n)
{	
	cout<<"Digite la estatura del "<<" alumno"<<endl;
	for( int i=0;i<n;i++)
		cin>>estaturas[i];
}
void showMedia(float estaturas[], int n)
{
	int i;
	cout<<"Las estaturas son: "<<endl;
	for(i=0;i<n;i++)
		cout<<estaturas[i]<<" "<<endl;
	cout<<endl;	
}
float bpmMedia(float estaturas[], int n)
{
	 float suma=0;
	 float promedio;
	 int i;
	for(i=0;i<n;i++){
		suma=suma+estaturas[i];
		promedio=suma/n;
	}
	return promedio;

}
float comparar(float promedio, float estaturas[],int n)
{	float acumulador=0;
	for(int i=0;i<n;i++)
	if(promedio<=estaturas[i])
	{
		acumulador=acumulador+1;
	}
	
	return acumulador;
}
float diferencia(float promedio, float estaturas[],int n)
{	float guardar=0;
	for(int i=0;i<n;i++)
	if(promedio>estaturas[i])
	{
		guardar=guardar+1;
	}
	
	return guardar;
}
