/*
	Name: Arreglos bidimensionales 
	Copyright: acona
	Author: Diego Manuel Elos Gonzalez 
	Date: 26/06/18 19:06
	Description: llenar e imorimir una matriz
*/
#include <stdio.h>
#include <conio.h>

int main(){
	int matriz[2][3];
	printf("Dame los valores de la matriz:\n"); 
	
	// llenar una matriz con for anidados
	for (int i=0; i<2; i++)
		for(int j=0; j<3; j++)
			scanf("%d",&matriz[i][j]);
	
	// imprimir la matriz con for anidados 
	for (int i=0; i<2; i++)
		for(int j=0; j<3; j++)
			printf("%d ",matriz[i][j]);
	
	getch(); return 0;
}
