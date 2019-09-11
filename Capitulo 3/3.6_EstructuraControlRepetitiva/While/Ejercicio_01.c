//	MOSTRAR LOS 10 PRIMEROS NUMEROS ENTEROS POCITIVOS.
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int i;
	i = 1;

	while (i < 11) // mientras i sea menor que 11
	{
		printf("%d\n", i);
		i += 1; // i = i + 1
	}
	getch();
	return 0;
}