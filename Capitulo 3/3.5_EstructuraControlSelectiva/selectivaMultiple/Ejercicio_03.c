// Calcule el area de un triangulo, un circulo, o de un cuadrado utilizando un menu.
#include <stdio.h>
#include <conio.h>
#define pi 3.1416

int main(int argc, char const *argv[])
{
	char opcion;
	int x;
	float area;

	printf("este programa calcula las siguientes areas cm2\n");
	printf("A) area de un triangulo\n");
	printf("B) area de un circulo\n");
	printf("C) area de un cuadrado\n");
	scanf("%s", &opcion);

	switch (opcion){

		case 'A':
		{
			int y;
			printf("teclee la base y la altura del triangulo\n");			
			scanf("%d %d", &x, &y);
			area = x*y /2.;
		}break;

		case 'B':
		{
			printf("teclea el radio del circulo\n");
			scanf("%d",&x);
			area = pi * x * x;
		}break;

		case 'C': 
		{
			printf("teclea el lado del cuadrado\n");
			scanf("%d",&x);
			area = x * x;
		}break;

		default: printf("dime una op. valida\n");

	}
	printf("el area que buscas es: %.1f cm2\n", area);
	getch();
	return 0;
}