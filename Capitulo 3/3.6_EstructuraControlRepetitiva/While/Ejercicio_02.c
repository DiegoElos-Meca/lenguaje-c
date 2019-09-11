// MOSTRAR LOS MULTIPLOS DE SIETE QUE SE ENCUENTRAM DE 0 A 150

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int m;
	m = 7; 

	while (m < 150)
	{
		printf("%d\n", m);
		m += 7;
	}
	getch();
	return 0;
}
