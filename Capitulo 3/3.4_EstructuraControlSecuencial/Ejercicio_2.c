/* AREA DE UN CUADRADO */
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int lado;
	char unidades[12];
	printf("Dime las unidades\n");
	scanf("%s",&unidades);
	printf("Escribe la longitud del cuadrado \n");
	scanf("%i",&lado);
	printf("El area del cuadrado es igual a %i %s\n", lado * lado, unidades);
	getch();

	long ladoo;
	char unid[12];
	printf("dime las unidades\n");
	scanf("%s",&unid);
	printf("escribe la longitud del cuadrado \n");
	scanf("%li", &ladoo);
	printf("el area del cuadro es: %li %s\n", ladoo, unid);
	getch();
	return 0;
}