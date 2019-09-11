#include <stdio.h>
#include <conio.h>

void funcion_a (){
	printf("Introduccion a la programacion\n");
}
void funcion_b(){
	printf("Introduccion a la fisica\n");
}
void funcion_c(){
	printf("Introduccion a la quimica\n");
}
void funcion_d(){
	printf("Introduccion a la computacion\n");
}

int main(){
	funcion_a();
	funcion_b();
	funcion_c();
	funcion_d();
	getch();
	return 0;
}