/* TODO (#1#): Tanto ++ como -- pueden aplicarse a 
               variables, pero no a constantes o a expresiones. 
               Por ejemplo: ++i, i++ ambas son equivalentes 
               a i=i+1. */
               
#include<stdio.h>

int main(){
	
	int a=7,b;
	
	b=++a+3; //a se incrementa en 1, se suma 3 y b recibe 11
	b=b+a+++5; //b recibe 11+8+5 y la a se incrementa
	printf("%d,%d",a,b);
	return 0;
}
