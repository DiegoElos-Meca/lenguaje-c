#include<stdio.h>
#include<stdlib.h>

int main(){
	int calif[5],suma;
	
	for(int i=0;i<5;i++){
		printf("ingresar calificacion %d: ",i+1);
		scanf("%d",&calif[i]);
		suma=suma+calif[i];
	}

	int elemn= sizeof(calif)/sizeof(calif[0]);
	
	printf("tamaño d/ arreglo: %d\n",elemn);
	
	int temp,masordenacion;
	float promedio;
	
/*
	do{
		for(int i=0;i<elemn-1;i++){
			if (calif[i]>calif[i+1]){
			temp = calif[i];
			calif[i]=calif[i+1];
			calif[i+1]= temp;
			masordenacion= true;	
			}
		}
	}while(masordenacion=false);
*/
	for(int f=0;f<elemn;f++){
		for(int j=0;j<elemn-1;j++){
			temp = 0; 
			
			if(calif[j]>calif[j+1]){
				temp=calif[j];
				calif[j]=calif[j+1];
				calif[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<elemn;i++){
		printf(" %d,",calif[i]);
	}



	
	promedio=suma/5;
	printf("\nel promedio es: %f\n",promedio);

	system ("pause");
	
}
