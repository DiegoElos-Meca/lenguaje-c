/*	CALCULE EL PROMEDIO DE TRES ALUMNOS QUE CURSO TRES MATERIAS EL SEMESTRE ANTERIOR. SI SU PROM-
	-MEDIO ES MAYOR QUE 95 SE LE VA A ASIGNAR UNA CAlIFICACION DE 100. IMPRIMIR CUAL FUE LA CALI-
	-FICACION PROMEDIO DEL ALUMNO 	*/
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int cal1, cal2, cal3;	// para almacenar las tres calificaciones del alumno.
	float prom;	// para almacenar el promedio final.

	printf("Dame las tres calificacionaes\n");
	scanf("%d", &cal1);
	scanf("%d", &cal2);
	scanf("%d", &cal3);
	
	//formula para calcular el promedio.
	prom = (cal1+cal2+cal3)/3.;		//El 3. es necesario por la conversión de tipos 


	if (prom >= 95)
		prom = 100;		//si el promedio es mayor a 95, se le asignará un 100.

	printf("El promedio es: %.2f\n", prom);
	getch();
	return 0;
}