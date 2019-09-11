/*..AREA, PERIMETRO Y DIAGONAL DE UN RECTANGULO.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float base, alt, area, peri, diag; // variables para base, altura, area, perimetro y la diagonal.
	printf("Dame la base y la altura\n");
	scanf("%f", &base);
	scanf("%f", &alt);

	area = base*alt;  // formula del area
	peri = 2*base+2*alt;  // formula del perimetro
	diag = sqrt(base*base + alt*alt);  // formula de la diagonal
	
	printf("El area es: %5.2f\n El perimetro es: %5.2f\n La diagonal es: %5.2f\n",area,peri,diag );
	getch();
	return 0;
}