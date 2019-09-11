// IMPRIMIR LA PALABRA PROGRAMACION SEIS VECES

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int contador;
	contador = 1;

	while (contador < 7	)
	{
		printf("%d Programacion\n", contador);
		contador += 1;
	}
	getch();
	return 0;
}
