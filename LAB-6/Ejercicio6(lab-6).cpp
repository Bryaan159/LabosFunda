#include <map>
#include <iostream>
using namespace std;
int main()
{
  int Numbers[] = { 1, 4, 7, 8, 9, 4, 4,4,4,8, 5, 3, 2, 2, 1, 1, 1 };
  int numElementos = sizeof( Numbers ) / sizeof( int );
 
  map< int, int > contadorRepeticiones;
 
  for ( int i=0; i < numElementos ; ++i )
  {
    contadorRepeticiones[ Numbers[ i ] ]++;
  }
 
  cout << "Total de repeticiones: " << std::endl;
  for ( int i = 0; i < 10; ++i )
  {
	cout << "Numero " << i << " se repite " << contadorRepeticiones[ i ] << " veces" << std::endl;
  }
  return 0;
}