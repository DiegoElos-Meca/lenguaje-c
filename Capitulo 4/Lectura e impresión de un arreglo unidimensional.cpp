/*
	Name: Arreglos Unidimensionales
	Author: Diego Manuel Elos Gonzalez
	Date: 23/06/18 20:55
	Description: 	Este programa dá Lectura e impresión de una lista con 10 subindices de un 
					arreglo arreglo unidimensional.
*/

#include <stdio.h>
#include <conio.h>

int main(){
	int lista[10]; // Decalracion de arreglo, [10 (espacios)subindices].
	
	printf("Llenar lista de 10 subindices\n");
	
	// for para llenar la lista.
	for (int i=0; i<=9; i++){
		printf("Dame el Elemento %d \n",i+1);
		scanf("%d", &lista[i]);
	}
	
	// for para imprimir la lista.
	printf("Elementos de lista\n");
	for(int i=0; i<=9; i++){
		printf("%d ",lista[i]);
	}
	getch(); return 0;
}
