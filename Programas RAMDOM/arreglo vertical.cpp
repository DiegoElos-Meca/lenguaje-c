#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nombre[60];
	printf("ingresa tu nombre completo: ");
	gets(nombre);
	
	for (int i=0;i<strlen(nombre);i++){
		printf("%c\n\f",nombre[i]);
	}
	system("pause");
}
