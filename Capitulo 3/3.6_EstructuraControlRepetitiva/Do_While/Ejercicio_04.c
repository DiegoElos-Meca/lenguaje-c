// Ejercicio 4. Introducir un número entero y contar cuántos dígitos tiene.

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	long c = 0, num, num1;

	printf("dame un numero\n");
	scanf("%li",&num);
	num1 = num;

	do
	{
		num /= 10;
		c += 1;
	} while (num >= 1);

	printf("El numero %li tiene %li digitos.\n", num1, c);
	getch();
	return 0;
}