// INTRODUCIR LOS SEGUNDOS E IMPRIMIR CUANTAS HORAS, MINUTOS Y SEGUNDOS EQUIVALE.
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int h, m, s;	// para almacenar las horas, minutos, y segundos.
	printf("Dame el numero de segundos\n");
	scanf("%d", &s);
	printf("Son: \n");

	if (s < 0)
		printf("Error de datos \n");
	else
	{
		if (s > 3600)
		{
			h = s / 3600;
			printf("%d hrs ", h);
			s = s-3600 * h ;
		}
		if (s > 60 )
		{
			m = s / 60 ;
			printf("%d min ", m);
			s = s - m*60 ;
		}
		if (s > 0)
			printf("%d seg ",s );
	}
	getch();
	return 0;
}