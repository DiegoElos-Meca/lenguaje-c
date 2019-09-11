//HIPOTENUSA DE UN TRIANGULO RECTANGULO

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int a,b;
	float c;
	
	printf("Cateto adyacente al angulo: ");
	scanf("%d", &a); 
	printf("\n");
	
	printf("Cateto opuesto al angulo: ");
	scanf("%d", &b); 
	printf("\n");
	
	c = sqrt(a*a + b*b);
	printf("La hipotenusa mide %.2f cm\n", c);
	
	getch();
	return 0;
}
