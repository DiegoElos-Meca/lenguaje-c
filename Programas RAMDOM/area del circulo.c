/* TODO (#1#): El progama consiste en calcular el area de un 
               circulo area=Pi*radio*radio (datos introducidos por teclado).w
               
               Aprender a definir constantes. */

#include<stdio.h>
#include<stdlib.h>

int main(){
#define PI 3.1416  //definir siempre en primera columna	
	const float Pi=3.1416;//segunda manera de definir constantes
	
	float area,radio;
	
	//pedir al usuario radio
	printf("dime el radio: ");
	scanf("%f",&radio);
	
	//aplicar la formula del circulo
	area=PI*radio*radio;
	
	//imprimir resultado
	printf("\nEl area del circulo es: %.2f unidades cuadradas\n",area);
	system("pause"); 
	return 0;
	
}
