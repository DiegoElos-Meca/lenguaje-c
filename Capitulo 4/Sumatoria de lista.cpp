/*
	Name: Arreglos unidimensionales 
	Copyright: acona
	Author: Diego Manuel ELos González
	Date: 26/06/18 18:39
	Description: arreglo de 10 elementos, llenar y hacer la sumatoria
*/
#include<stdio.h>
#include <conio.h>

int main(){
	int x[10];
	int s=0;
	
	printf("llenar la lista: \n");
	for (int i=0; i<10; i++){
		scanf("%d",&x[i]);
	}
	for(int i=0; i<10; i++){
		s += x[i];
	}
	printf("\nLa sumatoria es: %d",s);
	getch();
}
