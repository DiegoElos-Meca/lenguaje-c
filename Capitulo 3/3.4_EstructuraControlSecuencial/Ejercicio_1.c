/*SUME DOS NUMEROS ENTEROS */

#include<stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int n1, n2, suma;
	
	printf("Dame el primer numero \n");
	scanf("%d",&n1);
	printf("Dame el segundo numero \n");
	scanf("%d",&n2);
	suma = n1 + n2;
	printf("La suma es %d\n", suma);
	getch();
	return 0;
}