//Ejercicio 5. Calcule el producto (multiplicación) entre un conjunto de números reales hasta que el número introducido sea cero. 

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	float num, prd;
	prd = 1;

	printf("dime un numero \n");
	scanf ( "%f", &num);

	while ( num != 0)
	{
		prd *= num;
		printf("dame otro numero\n");
		scanf( "%f", &num);
	}

	printf("El producto es: %f\n", prd);
	getch();
	return 0;
}