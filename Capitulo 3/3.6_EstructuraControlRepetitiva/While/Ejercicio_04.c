// Sume un conjunto de números enteros hasta que la suma sea mayor que 100. Al final imprimir el resultado de la acumulación. 

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int n, sum;
	sum = 0;
	while (sum <= 100)
	{
		printf("dame un numero entero\n");
		scanf( "%d", &n);
		sum += n;
	}
	printf("la suma es : %d\n", sum);
	getch();
	return 0;
}