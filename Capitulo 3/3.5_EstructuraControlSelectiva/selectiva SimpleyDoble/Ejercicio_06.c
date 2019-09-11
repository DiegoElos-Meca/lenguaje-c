/*	DADO LOS TRES LADOS DEL TRIANGULO, IMPRIMIR SI ESTOS PERTENECEN AL MISMO TRIANGULO	*/



#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("introduzca los tres lados del triangulo\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a+b > c && a+c > b && b+c > a)
		printf("si pertenecen al mismo triangulo\n");
	else
		printf("no pertenecen al mismo triangulo\n");
	getch();
	return 0;
}