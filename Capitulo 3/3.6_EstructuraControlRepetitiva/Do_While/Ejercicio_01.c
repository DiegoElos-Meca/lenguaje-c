//Ejercicio 1. Imprimir los 10 primeros números enteros positivos

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	do
	{
		printf("%d\n", i);
		i += 1;
	} while (i < 11);
	
	getch();
	return 0;
}