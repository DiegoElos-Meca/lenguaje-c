/*..UNA TIENDA VENDE LIBROS A $100, CUADERNOS A $15.50 Y PLUMAS A $2.35..... 
....CALCULE EL TOTAL DE UNA VENTA SEGUN EL NUMERO DE ARTICULOS VENDIDOS.....*/
#include <stdio.h>
#include <conio.h>
#define PLIB 100  //precio por libro
#define PCUAD 15.50  // precio por cuaderno
#define PPLUM 2.35  // precio por pluma 

int main(int argc, char const *argv[])
{
	int libros, cuadernos, plumas;  // para almacenar la cantidad de producto que se vende
	float venta;  // para almacenar el total de la venta ($$$)
	printf("Cuantos libros vendio? \n");
	scanf("%d", &libros);
	printf("Cuantos cuadernos vendio?\n");
	scanf("%d",&cuadernos);
	printf("Cuantas plumas vendio?\n");
	scanf("%d",&plumas);

	venta = (libros*PLIB)+(cuadernos*PCUAD)+(plumas*PPLUM);	 // total de la venta (formula)
	
	printf("La venta de libros fue: %d\n",libros*PLIB );
	printf("La venta de cuadernos fue: %.2f\n",cuadernos*PCUAD );
	printf("La venta de plumas fue: %.2f\n",plumas*PPLUM );
	printf("La venta TOTAL fue: %.2f\n",venta );
	getch();
	return 0;
}
