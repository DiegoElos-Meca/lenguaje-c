#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nombre[60];
	printf("ingresa tu nombre completo: ");
	gets(nombre);
	
	//
	for (int i=0;i<strlen(nombre);i++){
		for(int a=0;a<strlen(nombre)-i;a++){
			printf("%c",nombre[a]);
		}printf("\n");
	}
	system("pause");
}
