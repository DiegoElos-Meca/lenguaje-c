/*	IMPRIMIR SI UN NUMERO ES PAR O IMPAR	*/
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int num;
	printf("Tecle un numero\n");
	scanf("%d",&num);

	if (num % 2 == 0)
		printf("%d Es par\n",num );
	else
		printf("%d Es impar\n",num);
	
	getch();
	return 0;
}