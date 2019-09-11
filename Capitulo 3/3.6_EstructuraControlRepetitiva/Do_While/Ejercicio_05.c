/*	Ejercicio 5. Adivinar en un máximo de cinco oportunidades un número entero comprendido entre 1 y 100. En
	cada ciclo la computadora dirá si el número que capturó el usuario es mayor o menor que el número de la computadora.
	Al final si adivinó el número, imprimir:  “Felicidades lo lograste en ____ intentos”, 
	y si no imprimir “Lástima, suerte para la próxima”.	*/

#include <stdio.h>
#include <conio.h>
#define NMAQ 17

int main(int argc, char const *argv[])
{
	int c=0, unnum;

	do
	{
		printf("dame un numero entero\n");
		scanf("%d", &unnum);
		if (unnum > NMAQ)
			printf("tu numero es mayor al mio\n");
		if (unnum < NMAQ)
			printf("tu numero es menor al mio\n");

		c += 1;
	} while (unnum != NMAQ && c < 5);

	if (unnum == NMAQ)
		printf("felicidades lo lograste en %d intentos\n", c);
	else
		printf("lastima suerte para la proxima\n");
	getch();
	return 0;
}