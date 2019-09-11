#include<iostream>
#include <conio.h>
using namespace std;

// Prototipos de funciones
void funcion ();

// Funcion principal
int main ()
{
    cout << "Hola Mundo" << endl;
    getch();

    funcion(); // llamada a la funcion.

    getch(); 
    return 0;
}

void funcion ()
{
	int num1, num2;
	cout << "Dime un dos numeros enteros" << endl;
	cin >> num1 >> num2;

	cout << num1+num2 << endl;
}