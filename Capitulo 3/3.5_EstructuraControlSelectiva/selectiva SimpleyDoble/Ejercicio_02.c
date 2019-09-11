/*	ESTRUCTURA DE CONTROL SELECTIVA DOBLE si/si-no (if/else)....
....SEGUN LA CALIFICACION, IMPRIMIR SI ES APROBADA O REPROBADA	*/
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	float calif;	// para almacenar la calificacion del alumno.
	printf("Dame una calificacion\n");
	scanf("%f", &calif);
	
	// decidir si esta aprobado o reprobado
	if (calif >= 60)
		printf("APROBADO\n");	// codicion verdadera
	else
		printf("REPROBADO\n");	// condicion falsa

	getch();
	return 0;
}
