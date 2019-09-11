/*
	Name: Arreglos de caracteres 
	Copyright: Acona
	Author: Diego Manuel Elos González
	Date: 26/06/18 18:03
	Description: Hacer ejercicios de arreglos de caracteres.
*/
#include<stdio.h>
#include<conio.h>

int main(){
	// Definir arreglo con cadena "lenguaje" 8 caracteres.
	char cad[9]="lenguaje"; // declarar arreglo pensndo en el espacio nulo.
	
	printf("%c\n",cad[0]); // corresponde a caracter "l".
	printf("%c\n",cad[5]); // corresponde a caracter "a".
	printf("%c\n",cad[9]); // corresponde a caracter "null".
	
	// imprimir todos los caracteres del arreglo 
	for(int i=0; i<9; i++){
	printf("%c",cad[i]);
	}
	getch(); return 0;
}
