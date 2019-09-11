#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nombre1[] = "diego manuel";
	char nombre2[] = {'d','i','e','g','o',' ','m','a','n','u','e','l'};
	char nombre3[5];//inicializar posteriormente desde el teclado
	char nombre4[5];//inicializar posteriormente desde el teclado
	char nombre5[5];//inicializar posteriormente desde el teclado
	
	printf("ingresar nombre en la cadena nombre3: ");
	scanf("%s",nombre3);
	fflush (stdin); //limpia el buffer de l teclado
	
	printf("ingresa nombre para nombre4: ");
	gets(nombre4);
	
	printf("ingresar nombre para nombre 5: ");
	fgets(nombre5,5,stdin);
	
	//printf("nombre1: %s\n",nombre1);
	//printf("nombre2: %s\n",nombre2);
	printf("nombre3: %s\n",nombre3);
	printf("nombre4: %s\n",nombre4);
	printf("nombre5: %s\n",nombre5);
	system("pause");
}
