#include <iostream>

using namespace std; 

int main()
{
	int DINERO;
	
	cout << "- Hola Preciosa, Quieres Salir Conmigo?" << endl; 
	cout << "- Depende" << endl;
	cout << "- Depende De Que?" << endl;
	cout << "- De Cuanto Dinero Tienes En Tu Bolsillkjo...?" << endl;
	
	cout << "Ingresa La Cantidad: ";
	cin >> DINERO;
	
	cout << "\n- Tengo " << DINERO << " Pesos" << endl;
	
	if (DINERO >= 1000)
	{
		cout << "- Creo Que Puedo Aceptar...mmm... Ya Que " << endl;
		cout << "- Ok, Vamos A Los Taquitos De La Vuelta " << endl;
	}
	else
	{
		cout << "- Como Te Atrevez a Invitarme a Salir " << endl;
		cout << "- Adios. :c" << endl;
	}
	
		
}
