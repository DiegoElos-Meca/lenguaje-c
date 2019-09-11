#include <stdio.h>
#include <conio.h>

int suma(int n1, int n2)
{
	return (n1 + n2);
}

int mult(int n1, int n2)
{
	return (n1 * n2);
}

int main()
{
	int op, n1, n2;

	printf("Elija una opcion: \n");
	printf("1. Sumar dos numeros.\n");
	printf("2. Multiplicar dos numeros.\n");
	scanf("%d", &op);
	printf("Dime los dos numeros:\n");
	scanf("%d %d", &n1, &n2);

	if (op = 1)
	{
		printf("La suma es: %d\n", suma(n1,n2));
	}
	else
	{
		printf("La Multiplicacion es: %d\n", mult(n1,n2));
	}
	getch(); return 0;
}
