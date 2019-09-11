// Ejercicio 2. Imprimir y sumar los números pares entre 1 y el 50, imprimir el resultado de la sumatoria.

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int i = 2,s = 0;
	do
	{
		printf("%d\n", i);
		s += i;
		i += 2;
	} while (i < 51);
	printf("%d\n", s);
	getch();
	return 0;
}