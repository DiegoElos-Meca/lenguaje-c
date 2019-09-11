// Ejercicio 3. Calcule la sumatoria de un conjunto de números, mientras el número que se capture en cada ciclo sea diferente de 0. Al final imprimir el resultado respectivo.

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int num, i = 0; // num: el numero a sumar.  i: es el acumulador.
	
	do
	{
		printf("dime un numero \n");
		scanf("%d",&num);
		i += num;
	} while (num != 0);

	printf("la suma es: %d\n", i );
	getch();
	return 0;
}