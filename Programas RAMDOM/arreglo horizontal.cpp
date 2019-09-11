#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
	char nombre[60];
	printf("ingresa tu nombre completo: ");
	gets(nombre);
	
	//
	for (int i=strlen(nombre)-1;i>=0;i--){
		printf("%c\a",nombre[i]);
	}
	
	printf("\n");
	system("pause");
}
