/*
	Name: Prueba
	Copyright: 
	Author: Diego MAnuel Elos Gonzalez
	Date: 30/06/18 11:11
	Description: 
*/
#include <iostream>
using namespace std;

int main(){
	int num;
	char ltr;
	float real;
	char name[6];
	cout << "Hola Mundo :v\n" << "Dime Un Numero: " << endl;
	cin >> num;
	cout << "Dime una letra: " << endl;
	cin >> ltr;
	cout << "Dime un numero real: " << endl;
	cin >> real;
	cout << "Dime t numbre" << endl;
	cin >> name;
	
	
	
	cout << num << "-" << ltr << "-" << real << "-";
	for (int i=0; i<6; i++)
		cout << name[i];
	
	return 0;
}
