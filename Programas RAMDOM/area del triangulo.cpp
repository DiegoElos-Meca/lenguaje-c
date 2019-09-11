/* TODO (#1#): este programa sirve para calcular el area de un 
               triangulo (valores introducidos por el teclado) */
#include<stdio.h>
#include<stdlib.h>

// funcion principal 

int main(){
	
	float area,base,altura;
	
//pedir y capturar datos

	printf("dime la base:  ");
	scanf("%f",&base);
	printf("dime la altura:  ");
	scanf("%f",&altura);
	printf("Diego Manuel Elos Gonzalez\n");
//ejecutar formula del area

	area=base*altura/2;

//imprimir resultado de la formula

	printf("\nEl area del triangulo es: %.2f\n",area);
	system("pause"); return 0;
	//fin.
}
 