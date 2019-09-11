/*
	Name: arreglos 
	Copyright: Acona
	Author: Diego Manuel Elos González
	Date: 26/06/18 17:29
	Description: preguntar la talla del arreglo, llenarlo e imprimirlo
*/
#include <stdio.h>
#include <conio.h>

int main(){
	
	int n=0; // para guardar la talla
	
	// preguntar el tamaño del arreglo
	printf("Tamaño del arreglo: \n");
	scanf("%d",&n);
	
	int lista[n]; // arreglo de tamaño n
	
	// llenar el arreglo
	printf("Los valores del arreglo son: \n");
	for (int i=0; i<n; i++){
		printf("%d - ",i+1);
		scanf("%d",&lista[i]);
	} 
	getch();
	
	//imprimir todos los datos del arreglo 
	printf("OK \n");
	for (int i=0; i<n; i++){
		printf("%d ",lista[i]);
	}
	getch(); return 0;
}
