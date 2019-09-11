// Prgrama para leer fecha (dia, mes, año)} y diga si es correcta o no

#include <stdio.h>
#include <conio.h>

int main (){
	int dia, mes, year;
	printf("Dime el dia_mes_year\n");
	scanf("%d %d %d", &dia, &mes, &year);
	
	// if para comprobar si no hay errores
	if ((dia >= 1) && (dia <= 31) && (mes >= 1) && (mes <= 12 ) && (year < 2018)){
		printf("%d / %d / %d",dia, mes, year);
		printf("\t---> Fecha correcta ");
		getch();
	}else{
	
		printf("Error en la fecha\n"); getch();

		// Tres if para localizar el error
		if ( !((dia >= 1) && (dia <= 30)))
			printf("%d <---error en el dia\n",dia);
		if ( !((mes >= 1) && (mes <= 12)))
			printf("%d <---error en el mes\n",mes);
		if (!(year <= 2018))
			printf("%d <---error en el year\n",year);
		}
}
