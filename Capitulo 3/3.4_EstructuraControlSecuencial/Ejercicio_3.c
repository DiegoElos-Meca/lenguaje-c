// AREA DEL CIRCULO Y EL VOLUMEN DE UNA ESFERA CON EL MISMO RADIO.

#include <stdio.h>
#include <conio.h>
#define PI 3.1416

int main(int argc, char const *argv[])
{
	float radio, area, volumen;
	printf("El area y volumen de una esfera en cm...\n");
	printf("Cuanto Mide el Radio?\n");
	scanf("%f", &radio);
	area = PI*radio*radio;
	printf("El area del circulo es: %.2f\n", area);
	volumen = (4/3)*PI*radio*radio*radio;
	printf("el volumen de la esfera es: %.2f cm cubicos\n", volumen);
	getch();
	return 0;
}