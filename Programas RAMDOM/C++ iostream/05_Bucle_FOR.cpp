#include <iostream>
using namespace std;

int main()
{
	int NUMTABLA,  RESULTADO;
	
	cout << "Numero de la tabla de multiplicar que desea: " << endl;
	cin >> NUMTABLA;
	
	cout << "Tabal de multiplicar del numero: " << NUMTABLA << " es:\n" << endl;
	
	for ( int i=1; i<=10; i++)
	{
		cout << " " << NUMTABLA << " * " << i << " = " << (NUMTABLA * i) << endl;
	}
	
	return 0;
}
