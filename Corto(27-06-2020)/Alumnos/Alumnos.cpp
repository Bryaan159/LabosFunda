#include <iostream>
#include  <iomanip>
#include <locale.h>
using namespace std;
int leerMatriz(float [][5], int);
float resultado(float[][5], int);
void mostrarMatriz(float[][5],int);
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int n;
	//cout << endl;
	cout << "Cantidad de alumnos: ";
	cin >> n;
	float notas [n] [5]; 
	leerMatriz(notas, n);
	mostrarMatriz(notas, n);
	resultado(notas,n);
		
	return 0;
}

int leerMatriz(float notas[][5], int n)
{
	cout << "Digite los siguientes elementos de la matriz:" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <5 ; j++){
		cout << "Alumno " <<i+1<< " y notas  "<<j+1<< " : ";
		cin >> notas[i][j];
		
		}
		cout << endl;
	}	
}
void mostrarMatriz(float notas[][5], int n)
{
	cout << "La matriz es la siguiente:"<< endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++)
		{
			cout <<"Alumno ["<<i+1<<"] Nota [ "<<j+1<<" ]"<<" [ "<<notas[i][j]<<" ]\n";
		}
	}cout<<endl;
}

float  resultado ( float notas [] [ 5 ], int n) {
    float suma = 0 ;
    for ( int i = 0 ; i <n; i ++) 
	{
        for ( int j = 0 ; j < 5 ; j ++) {
            suma = suma + (notas [i] [j] * 0.20 );
        }
        if (suma>= 6.00 ) {
            cout << "El alumno " << i + 1 << " con promedio  " << setprecision ( 2 ) << suma << "  estado: Aprobado " << " \nFelicidades, cumple tus metas";
            suma = 0 ; 
        } else {
            cout << " \nEl alumno " << i + 1 << " con promedio " << setprecision ( 2 ) << suma << " estado: Reprobado " <<" \nTodos sabemos que tú puedes"<<endl;
            suma = 0 ; 
    }
 }
} 
