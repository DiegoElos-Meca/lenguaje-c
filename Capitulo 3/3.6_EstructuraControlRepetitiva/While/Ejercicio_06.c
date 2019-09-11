/*	Ejercicio 6. Sumar los números pares y multiplicar los números impares hasta que la suma sea mayor 
	que 50 o el producto mayor que 150. 	*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int num, sum, prod;
	sum = 0;
	prod = 1;

	while (sum <= 50 && prod <= 150)
	{
		printf("dame un numero \n");
		scanf ( "%d", &num);

		if (num % 2 == 0)
		{
			sum += num;
		}else
			prod *= num;
	}
	printf("la suma es: %d\n", sum);
	printf("el producto es: %d\n", prod);
	getch();
	return 0;
}