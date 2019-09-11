// PROPORCIONE EL PRECIO DE UN AUTO, SELECCIONANDO SELECCIONANDO LA OPCION DE ENTRE CINCO DIFERENTES

#include <stdio.h>
#include <conio.h>
#define A 85000
#define B 110000
#define C 152000
#define D 180000
#define E 170000

int main(int argc, char const *argv[])
{
	int opcion;
	printf("Elija la marca del auto para darle precio\n");
	printf("1:NISSAN, TSURU  2:GOLF\n3:JETTA. 4:DODGE,STRATUS\n5:NEON\t");
	scanf("%d",&opcion);
	switch (opcion)
	{
	case 1:	printf("el NISSAN TSURU cuesta: $%d\n", A);
	break;

	case 2: printf("el VW GOLF cuesta: $%d\n", A);
	break;

	case 3:	printf("el VW JETTA cuesta: $%d\n", C);
	break;

	case 4:	printf("el DODGE STRATUS cuesta: $%d\n", D);
	break;

	case 5: printf("el NEON cuesta: $%d\n", E);
	break;
	}
	getch();
	return 0;
}