// CONVERSOR DE PULGADAS A CENTIMETROS 
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int PULGADAS; float CENTIMETROS;
	printf("Conversor de pulgadas a centimetros \n");
	printf("Dame las pulgadas\n");
	scanf("%d", &PULGADAS);

	CENTIMETROS = PULGADAS*2.54;
	
	printf("%d pulgadas = %7.3f centimetros\n", PULGADAS,CENTIMETROS );
	getch();
	return 0;
}