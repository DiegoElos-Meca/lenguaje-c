#include <iostream>

using namespace std;

int main()
{
	int OPCION;
	char OPCIO;
	cout << "	Elige Una Opcion" << endl; 
	cout << "-1 Talla de un numero INT" << endl;
	cout << "-2 Talla de un numero FLOAT" << endl;
	cout << "-3 Talla de variable DOBLE FLOAT" << endl;
	cout << "-4 Talla de variable CHAR\n" << endl;
	
	cin >> OPCION;
	do {


	switch (OPCION)
	{
		case 1:
			int NUMINT;
			cout << "La talla de variable INT es: " << sizeof(NUMINT) << " Bytes"<< endl;
			break;
		
		case 2: 
			float NUMFLOAT;
			cout << "La talla de variable FLOAT es: "  << sizeof(NUMFLOAT) << " Bytes"<< endl;
			break;
		
		case 3: 
			double NUMDOBLE;
			cout << "La talla de variable DOBLE FLOAT es: "  << sizeof(NUMDOBLE) << " Bytes"<< endl;
			break;
		
		case 4: 
			char UNCHAR;
			cout << "La talla de variable CHAR es: "  << sizeof(UNCHAR)<< " Bytes"<< endl;
			break;
		case 5:
		default:
				cout << "gracias" << endl;

	}
	
	cout << "Ota vez?" << endl;
	cin >> OPCIO;
	} while(OPCIO == 'y');
	return 0;
}

