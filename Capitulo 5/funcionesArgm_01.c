/*
	Name: 
	Author: Diego Manuel Elos Gonzalez 
	Date: 04/07/18 17:22
	Description: 
*/

#include <stdio.h>
#include <conio.h>

int suma(int n1, int n2);
int mult(int n1, int n2);

int main()
{
	int op, n1, n2, s, p;
	printf("Que deseas hacer?\n");
	printf("1. sumar dos numeros.\n");
	printf("2. multiplicar dos numeros.\n");
	scanf("%d",&op);

	switch(op)
	{
		case 1: 
				printf("Dame los numeros a sumar:\n");
				scanf("%d %d", &n1, &n2);
				s = suma(n1,n2);
				printf("La suma es: %d\n", s); getch(); break;

		case 2: 
				printf("Dame los numeros a multiplicar:\n");
				scanf("%d %d", &n1, &n2);
				p = mult(n1,n2);
				printf("La multiplicacion es: %d\n", p); getch(); break;

		default: printf("Error \n");
	}
	return 0;
}

int suma(int n1, int n2)
{
	int s;
	s = n1 + n2;
	return s;
}

int mult(int n1, int n2)
{
	int p;
	p = n1 * n2;
	return p;
}
