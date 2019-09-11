/* IMPRIMIR QUE TIPO DE CALIFICACION ES SEGUN SU CALIFICACION, 
	CONSIDERANDO QUE SI EL ALUMNO TIENE 100 SE ESCRIBA EXELENTE
	a) 90 y 99 se imprima  Muy Bueno 
	b) 80 y 89 se imprima  Bueno 
	c) 70 y 79 se imprima  Regular 
	d) 60 y 69 se imprima  Malo 
	e) 0 y 59 se imprima   Reprobado
*/
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int cal; // para almacenar la calificacion del alumno
	printf("Cual es la calificacion del alumno? \t");
	scanf("%d",&cal);
// bloque para posicionar los resultados
	if (cal != 100 )
	{
		if (cal >= 90 && cal <=99)
		{
			cal = 90;
		}else if (cal >= 80 && cal <= 89)
		{
			cal = 80;
		}else if (cal >= 70 && cal <= 79)
		{
			cal = 70;
		}else if (cal >= 60 && cal <= 69)
		{
			cal = 60;
		}else if (cal >= 0 && cal <=59)
			cal = 50;
	}
	switch (cal) // segun sea la reasignacion de la calificacion 
	{
		case 100: printf("Exelente!!!\n");
		break;

		case 90: printf("Muy Bien!!!\n");
		break;

		case 80: printf("Bueno!!!\n");
		break;

		case 70: printf("Regular!!!\n");
		break;

		case 60: printf("Malo!!!\n");
		break;

		case 50: printf("Reprobado alv \n");
		break;

		default: printf("Pon algo valido prro\n");
	}
	getch();
	return 0;
}