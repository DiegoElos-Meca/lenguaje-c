/*	Ejercicio 5. Calcule el monto del pago de una persona al inscribirse en la 
	alberca olímpica, dependiendo de si es alumno de la Universidad o no. Si es 
	alumno se le hará un 50% de descuento tanto en la inscripción como en la mensualidad. 
	Las cuotas sin descuento son: inscripción: 100, mensualidad: 150.	*/
#include <stdio.h>
#include <conio.h>
#define I 100
#define M 150

int main(int argc, char const *argv[])
{
	int tipo;	// se almacenara si es estudiante o no.
	printf("si la persona es alumno de la universidad oprima (1)\nSino oprima (2)\n");
	scanf("%d",&tipo);

	if (tipo == 1)
		printf("el pago debe ser de: %.2f\n",I*0.50 + M*0.50 );
	else
		printf("el pago debe ser de: %d\n",I+M );
	getch();
	return 0;
}