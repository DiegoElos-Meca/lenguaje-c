/*	Ejercicio 7. Imprimir si un estudiante es admitido en la universidad o no con base 
	en los promedios que tenga de la preparatoria y del examen de admisión. El promedio 
	mínimo es de 85.	*/
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	float cal_p, cal_e, promedio; // para las calificaciones de la prepa y el examen y el promedio
	printf("el promedio de la preparatoria \n");
	scanf("%f", &cal_p);
	printf("calificacion del examen de admision\n");
	scanf("%f", &cal_e);

	promedio = (cal_e+cal_p)/2.;

	printf("el promedio es: %f\n",promedio );
	printf("por lo tanto \n");

	if (promedio >= 85)
	{
		printf("el estudiante es admitido \n");
	}
	else
		printf("el estudiante no es admitido\n");
	getch();
	return 0;
}