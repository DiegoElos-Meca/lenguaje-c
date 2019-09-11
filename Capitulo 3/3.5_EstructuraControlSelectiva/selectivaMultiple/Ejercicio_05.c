/*	CALCULA LA PAGA DE UN TRABAJADOR SEGUN LAS HORAS TRABAJADAS Y 
	EL PRECIO POR HORA PARA EL TRABAJO QUE REALICE
	a) Intendencia: $35  b) Asistente: $50 c) Administrativo: $80 d) Directivo: $120  e) Gerente: $150*/
#include <stdio.h>
#include <conio.h>
#define Intendencia 35
#define Asistente 50
#define Administrativo 80
#define Directivo 120
#define Gerente 150

int main(int argc, char const *argv[])
{
	char puesto;
	int horas, pagaTotal;
	printf("introduce el numero de horas trabajadas\n");
	scanf("%d",&horas);
	printf(" a) intendencia  b) asistente  c) administrativo  d) directivo  e) gerente\n");
	printf("elige el puesto\n");
	scanf("%s",&puesto);

	switch (puesto){
	 	case 'a': pagaTotal = horas * Intendencia;
	 	break;
	 	
	 	case 'b': pagaTotal = horas * Asistente;
	 	break;

	 	case 'c': pagaTotal = horas * Administrativo;
	 	break;

	 	case 'd': pagaTotal = horas * Directivo;
	 	break;

	 	case 'e': pagaTotal = horas * Gerente;
	 	break;

	 	default: printf("pon algo valido prro\n");
 	}
 	printf("la paga total es : %d\n", pagaTotal);
 	getch();
	return 0;
}