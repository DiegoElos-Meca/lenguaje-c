// USO DE #define: CREACION DE MACROS

// Ejemplo de macros 

#include <stdlib.h> 
#include <stdio.h>
#define suma(n1,n2) n1+n2
#define multiplica(n1,n2) n1*n2 
int main ()
{
	int x;
	x = suma(2,3);
	printf("Suma = %d \n",x );
	printf("Multiplicacion = %d\n",multiplica(2,3) );
	system("pause");

	return 0;
}
