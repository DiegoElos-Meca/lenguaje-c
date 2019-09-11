/*
	Name: funciones con paso de parametros
	Author: Diego Manuel Elos Gonzalez
	Date: 04/07/18 17:51
	Description: Haga el programa principal y opciones a tres funciones con paso de parámetros que calculen: 
				a) la hipotenusa de un triángulo rectángulo, b) el área de un triángulo, c) el tercer ángulo de un triángulo.

*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

float hipotenusa(int num1, int num2);
float area(int num1, int num2);
float angulo(int num1, int num2);

int main(int argc, char const *argv[])
{
	char op;
	int num1, num2;
	printf("Dime una opcion:\n");
	printf("a) hipotenusa de un triángulo\n");
	printf("b) area de un triángulo\n");
	printf("c) tercer angulo de un triángulo\n");
	scanf("%c", &op);
	switch(op)
	{
		case 'a': printf("La hipotenusa es: %f\n", hipotenusa(num1,num2)); break;
		case 'b': printf("El area del triangulo es: %f\n",area(num1,num2)); break;
		case 'c': printf("El tercer angulo es: %f\n", angulo(num1,num2)); break;
		default: printf("Error\n");
	}
	getch();
	return 0;
}

float hipotenusa(int num1,int num2)
{
	float h; 
	printf("Dame el cateto opuesto y cateto adyacente del triangulo\n");
	scanf("%d %d", &num1, &num2);
	h = sqrt(num1*num1 + num2*num2);
	return h;
}

float area(int num1, int num2)
{
	float area; 
	printf("Dame la base y la altura del triangulo\n");
	scanf("%d %d", &num1, &num2);
	area = num1 * num2 / 2;
	return area;
}

float angulo(int num1, int num2){
	float angulo;
	printf("Dame el angulo 1 y el angulo 2 del triangulo\n");
	scanf("%d %d", &num1, num2);
	angulo = 180 - (num1 + num2);
	return angulo;
}