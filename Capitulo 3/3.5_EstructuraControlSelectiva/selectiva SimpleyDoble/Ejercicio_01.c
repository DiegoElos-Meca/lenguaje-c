/*	SEGUN UNA CALIFICACION, IMPRIMIR SI ESTA	
	ESTRUCTURA DE CONTROL SELECTIVA SIMPLE si (if)	*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	float cal;	// para almacenar calificacion del alumno
	printf("Dime la calificacion: \n");
	scanf("%f", &cal);

	if (cal >= 60)	// si la calificacion es mayor o igual a 60, Ejecuta. Si es Falso se omite .
		printf("Aprobada!!!\n");	// sin llaves porque solo es una instruccion,

	getch();
	return 0;
}