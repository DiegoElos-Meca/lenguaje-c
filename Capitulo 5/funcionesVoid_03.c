#include <stdio.h>
#include <conio.h>

void funcion2(); // prototipo de la funcion

void funcion1(){
	printf("Azul\n");
	printf("Verde\n");
}

void funcion3(){
	printf("Blanco\n");
	printf("Negro\n");
}

int main(int argc, char const *argv[])
{
	printf("Los colores\n");
	printf("Lila\n");
	funcion2();
	printf("Cafe\n");
	getch();
	return 0;
}

void funcion2(){
	printf("Amarillo\n");
	printf("Rojo\n");
	funcion1();
	printf("Naranja\n");
}