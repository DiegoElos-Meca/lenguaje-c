  // comentario del inicio del programa

/*Programa que muestra la estructura de un programa en C*/

  // Decalaracion de archivos de cabecera 	(librerias)

#include <stdio.h>
#include <conio.h>

  //Prototipo de las funciones

void bienvenida ();

  // declaracion de variables y constantes globales

char nombre[30];

  // programa principal

int main(int argc, char const *argv[])
{
	printf("¿cual es tu nombre? \n");
	scanf("%s",&nombre);
	bienvenida(nombre);  //Llamada a la funcion
	getch();
	return 0;
}	

  //Decalracion de funciones

void bienvenida ()
{
	char nomb[];
	printf("Hola %s bienvenido al lenguaje C\n",nomb );
	getch();
}
