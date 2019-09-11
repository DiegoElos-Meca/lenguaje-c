// IMPRIMIR A QUE DIA DE LA SEMANA CORRESPONDE EN NUMERO 

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int dia;
	printf("Escriba el numero del dia: \n");
	scanf("%d",&dia);
	switch (dia)
	{
		case 1:	printf("el dia %d es lunes \n", dia);
		break;
		case 2: printf("el dia %d es martes\n", dia);
		break;
		case 3: printf("el dia %d es martes\n", dia);
		break;
		case 4: printf("el dia %d es jueves\n", dia);
		break;
		case 5: printf("el dia %d es viernes\n", dia);
		break;
		case 6: printf("el dia %d es sabado\n", dia);
		break;
		case 7: printf("el dia %d es domingo\n", dia);
		break;
	}
	getch();
	return 0;
}